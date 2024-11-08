#pragma once
#include "Mybiblioteca.h"

#include"jugador1.h"
#include "aliados.h"
#include"Mapas.h";
void JugarNivel2() {
	PersonajeNivel2 jugadorNivel2;
	jugadorNivel2.x = 1;
	jugadorNivel2.y = 8;
	jugadorNivel2.dx = 1;
	jugadorNivel2.dy = 1;

	Aliados actportales;
	actportales.x = 4;
	actportales.y = 12;
	actportales.activo = false;

	Aliados portalRojo;
	portalRojo.posPortalRojoX=0;
	portalRojo.posPortalRojoY=16;
	portalRojo.posPortalRojoSalidaX = 79;
	portalRojo.posPortalRojoSalidaY = 12;

	Aliados portalAmarillo;
	portalAmarillo.posPortalAmarilloX = 17;
	portalAmarillo.posPortalAmarilloY = 23;
	portalAmarillo.posPortalAmarilloSalidaX = 40;
	portalAmarillo.posPortalAmarilloSalidaY = 20;

	dibujarMapa2(mapa2);
	bool gano = false;
	bool iniciarnivel = true;
	do {
		if (iniciarnivel == false) {
			break;
		}
		actportales.activo = true;
		

		if (actportales.activo) {
			activacionPortales(actportales);
			dibujarPortalRojo(portalRojo);
			dibujarPortalAmarillo(portalAmarillo);
		}
		while (iniciarnivel) {
			borrarPersonajeNivel2(jugadorNivel2);
			dibujarPersonajeNivel2(jugadorNivel2);
			movimientoPersonajeNivel2(jugadorNivel2, mapa2);

		}
	} while (!gano);
}