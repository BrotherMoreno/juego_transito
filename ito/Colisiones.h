#pragma once
#include"Mybiblioteca.h"
#include"Nivel2.h"
#include"Mapas.h"
#include"jugador1.h"
#include"enemigos.h"

bool detectarColisionPersonajeConAliadoNivel1(Aliados actportales, PersonajeNivel1 jugadorNivel1) {
    if ((jugadorNivel1.x + 2 == actportales.x || jugadorNivel1.x == actportales.x||jugadorNivel1.x+1==actportales.x) && (jugadorNivel1.y + 1 == actportales.y || jugadorNivel1.y + 2 == actportales.y)) 
    {
        return true;
    }
    return false;
}

bool determinarColisionTeletransportePortalNivel1(PersonajeNivel1& jugadorNivel1) {
    if (jugadorNivel1.x+3 == 78 && (jugadorNivel1.y == 25 || jugadorNivel1.y == 26||jugadorNivel1.y==27)) {
        return true;
    }
    return false;
}

bool detectarColisionPosicionSalidaPortalnivel1(int Mapa1[FILA][COLUMNA], PersonajeNivel1 jugadorNivel1) {
    if (Mapa1[jugadorNivel1.y][jugadorNivel1.x + 1] == 4 || Mapa1[jugadorNivel1.y - 1][jugadorNivel1.x + 1] == 4 || Mapa1[jugadorNivel1.y + 1][jugadorNivel1.x + 1] == 4) {
        return true;
    }
    return false;
}
bool determinarColisionJugadorConEnemigo_uno(PersonajeNivel1 jugadorNivel1, Enemigos EnemigoNivel1)
{
    if (jugadorNivel1.x + 1 < EnemigoNivel1.x || jugadorNivel1.x - 1 > EnemigoNivel1.x + 1 || jugadorNivel1.y + 1 < EnemigoNivel1.y || jugadorNivel1.y > EnemigoNivel1.y)
    {
        return false;
    }
    /*if ((jugador.x == enemigo.x && jugador.y == enemigo.y) || (jugador.x == enemigo.x + 1 && jugador.y == enemigo.y))
    {
        return true;
    }*/
    return true;

}