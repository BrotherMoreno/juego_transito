#include <windows.h>  
#include "Mybiblioteca.h"
#include "Mapas.h"
#include "jugador1.h"
#include "aliados.h"
#include "Colisiones.h"
#include "enemigos.h"



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
    EnemigoNivel1.y = 18;
    EnemigoNivel1.x = 1;
    EnemigoNivel1.dy = 0;
    EnemigoNivel1.dx = 1;
    EnemigoNivel1.ancho = 3;
    EnemigoNivel1.alto = 1;

    dibujarMapa1(mapa1);
    bool gano = false;
    bool portalActivo = false;


    while (!gano) {
        // Activar los portales
        actportales.activo = true;
        if (actportales.activo) {
            activacionPortales(actportales);
        }

        // Borramos las posiciones anteriores
        borrarPersonajeNivel1(jugadorNivel1);
        borrarEnemigoNivel1(EnemigoNivel1);

        // Mover el enemigo de forma automática
        moverEnemigoLadoALado(EnemigoNivel1, 1, 78);

        // Dibujamos en las nuevas posiciones
        dibujarPersonajeNivel1(jugadorNivel1);
        dibujarEnemigoNivel1(EnemigoNivel1);

        // Movemos el jugador
        movimientoPersonajeNivel1(jugadorNivel1, mapa1);

        if (detectarColisionPersonajeConAliadoNivel1(actportales, jugadorNivel1) && actportales.activo) {
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


        Sleep(50);
    }
}