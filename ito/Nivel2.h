#pragma once
#include "Mybiblioteca.h"
#include"mapa_two.h"
#include"jugador1.h"
#include "aliados.h"

void JugarNivel2() {
	Personaje jugadorMan;
	jugadorMan.x = 1;
	jugadorMan.y = 8;
	jugadorMan.dx = 1;
	jugadorMan.dy = 1;

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

	dibujarMapa(mapa2);
	bool gano = false;
	do {
		actportales.activo = true;
		

		if (actportales.activo) {
			activacionPortales(actportales);
			dibujarPortaleRojo(portalRojo);
			dibujarPortalAmarillo(portalAmarillo);
			dibujarPersonaje(jugadorMan);
		}
	} while (!gano);
}