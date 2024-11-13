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

	Enemigos EnemigoNivel1;
	EnemigoNivel1.x=1;
	EnemigoNivel1.y=18;
	EnemigoNivel1.dy=1;
	EnemigoNivel1.dx=1;
	EnemigoNivel1.ancho;
	EnemigoNivel1.alto;
	EnemigoNivel1.color;
	

	dibujarMapa1(mapa1);
	bool gano = false;
	bool JugarNivel1 = true;
	bool portalActivo = false;
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
			movimientoPersonajeNivel1(jugadorNivel1, mapa1);
			moverEnemigoNivel1(EnemigoNivel1, mapa1);
			//borramos los dibujos
			borrarPersonajeNivel1(jugadorNivel1);
			borrarEnemigoNivel1(EnemigoNivel1);

			//dibujamos
			dibujarPersonajeNivel1(jugadorNivel1);
			dibujarEnemigoNivel1(EnemigoNivel1);


			if (detectarColisionPersonajeConAliadoNivel1(actportales, jugadorNivel1) && actportales.activo == true) {
				actportales.activo = false;
				portalActivo = true; 
				borrarAliado(actportales);
			}
			if (portalActivo) {
				if (determinarColisionTeletransportePortalNivel1(jugadorNivel1)) {
					jugadorNivel1.y = 14;
					jugadorNivel1.x = 3;
				}
			}
			//movemos los dibujos

			

	
			
		 }
	} while (!gano);

}