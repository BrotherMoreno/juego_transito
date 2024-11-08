#pragma once
#include "Mybiblioteca.h"
#include"Mapas.h"
#include"jugador1.h"
#include "aliados.h"
#include"Colisiones.h"
#include"enemigos.h"

void jugarNivel1() {
	PersonajeNivel1 jugadorNivel1;
	jugadorNivel1.x = 30;
	jugadorNivel1.y = 24;
	jugadorNivel1.dx = 1;
	jugadorNivel1.dy = 1;

	Aliados actportales;
	actportales.x = 2;
	actportales.y = 28;
	actportales.activo = false;

	Aliados portalRojo;
	portalRojo.posPortalRojoX = 78;
	portalRojo.posPortalRojoY = 25;
	portalRojo.posPortalRojoSalidaX = 1;
	portalRojo.posPortalRojoSalidaY = 14;

	Aliados portalAmarillo;
	portalAmarillo.posPortalAmarilloX = 17;
	portalAmarillo.posPortalAmarilloY = 23;
	portalAmarillo.posPortalAmarilloSalidaX = 40;
	portalAmarillo.posPortalAmarilloSalidaY = 20;

	

	dibujarMapa1(mapa1);
	bool gano = false;
	bool JugarNivel1 = true;
	do {
		actportales.activo = true;
		if (actportales.activo) {
			activacionPortales(actportales);
		}
		
		while (jugarNivel1) {
			//dibujar el portal cuando se recolecte el poder
			if (!actportales.activo) {
				dibujarPortalRojo(portalRojo);
			}
			//borramos los dibujos
			borrarPersonajeNivel1(jugadorNivel1);
			//dibujamos
			dibujarPersonajeNivel1(jugadorNivel1);
			//movemos los dibujos
			movimientoPersonajeNivel1(jugadorNivel1, mapa1);
			if (detectarColisionPersonajeConAliadoNivel1(actportales, jugadorNivel1) && actportales.activo == true) {
				actportales.activo = false;
				borrarAliado(actportales);
			}

	
			
		 }
	} while (!gano);

}