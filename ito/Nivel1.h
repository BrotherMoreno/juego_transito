#pragma once
#include "Mybiblioteca.h"
#include"mapa1.h"
#include"jugador1.h"
#include "aliados.h"

void jugarNivel1() {
	PersonajeNivel1 jugadorNivel1;
	jugadorNivel1.x = 1;
	jugadorNivel1.y = 24;
	jugadorNivel1.dx = 1;
	jugadorNivel1.dy = 1;

	Aliados actportales;
	actportales.x = 4;
	actportales.y = 12;
	actportales.activo = false;

	Aliados portalRojo;
	portalRojo.posPortalRojoX = 0;
	portalRojo.posPortalRojoY = 16;
	portalRojo.posPortalRojoSalidaX = 79;
	portalRojo.posPortalRojoSalidaY = 12;

	Aliados portalAmarillo;
	portalAmarillo.posPortalAmarilloX = 17;
	portalAmarillo.posPortalAmarilloY = 23;
	portalAmarillo.posPortalAmarilloSalidaX = 40;
	portalAmarillo.posPortalAmarilloSalidaY = 20;

	dibujarMapa1(mapa1);
	bool gano = false;
	do {
		actportales.activo = true;
		if (actportales.activo) {
			activacionPortales(actportales);
		/*	dibujarPortaleRojo(portalRojo);
			dibujarPortalAmarillo(portalAmarillo);*/
			dibujarPersonajeNivel1(jugadorNivel1);
		}
	} while (!gano);

}