#pragma once
#include"Mybiblioteca.h"
#include"Nivel2.h"
#include"Mapas.h"

bool detectarColisionPersonajeConAliadoNivel1(Aliados actportales, PersonajeNivel1 jugadorNivel1) {
    if ((jugadorNivel1.x + 2 == actportales.x || jugadorNivel1.x == actportales.x||jugadorNivel1.x+1==actportales.x) && (jugadorNivel1.y + 1 == actportales.y || jugadorNivel1.y + 2 == actportales.y)) 
    {
        return true;
    }
    return false;
}