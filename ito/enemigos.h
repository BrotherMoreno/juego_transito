#pragma once
#include"Mybiblioteca.h"
#include"Mapas.h"

struct Enemigos
{
    int x, y;
    int dy;
    int dx;
    int ancho, alto;
    int color;

};


void dibujarEnemigoNivel1(Enemigos EnemigoNivel1)
{
    Console::ForegroundColor = ConsoleColor::Blue;
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y); cout << char(220); //**el inicial
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y + 1); cout << char(220);
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y + 2);cout << char(220);
    Console::ForegroundColor = ConsoleColor::White;
}

void borrarEnemigoNivel1(Enemigos EnemigoNivel1)
{
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y);cout << " ";
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y + 1); cout << "  ";
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y + 2);cout << " ";
}
void moverEnemigoNivel1(Enemigos& EnemigoNivel1, int mapa1[FILA][COLUMNA])
{
    if (mapa1[EnemigoNivel1.y][EnemigoNivel1.x + EnemigoNivel1.dx] == 1){
        EnemigoNivel1.x+= EnemigoNivel1.dx;
    }
    if (mapa1[EnemigoNivel1.y][EnemigoNivel1.x + EnemigoNivel1.dx] == 3) {
        EnemigoNivel1.dx *= -1;
    }
    
}


