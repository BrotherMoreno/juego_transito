#pragma once
#include"Mybiblioteca.h"
#include"Nivel2.h"
#include"mapa_two.h"
bool ColisionTeletransporterojo(Personaje& jugador) {
    if (jugador.x + 1 == 27 && (jugador.y == 27 || jugador.y == 26)) {
        return true;
    }
    return false;
}