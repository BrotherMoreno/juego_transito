#pragma once
#include "Mybiblioteca.h"
#include "Mapas.h"

struct Enemigos {
    int x, y;
    int dy;
    int dx;
    int ancho, alto;
    int color;
};

void dibujarEnemigoNivel1(Enemigos EnemigoNivel1) {
    Console::ForegroundColor = ConsoleColor::Blue;
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y);
    cout << char(219); //**el inicial
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y + 1);
    cout << char(219); //**el inicial
    Console::ForegroundColor = ConsoleColor::White;
}

void borrarEnemigoNivel1(Enemigos EnemigoNivel1) {
    // Borrar la posición del enemigo sin afectar el color de fondo
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y);
    cout << " ";
    ubicar(EnemigoNivel1.x, EnemigoNivel1.y + 1);
    cout << " ";
}

void moverEnemigoNivel1(Enemigos& EnemigoNivel1, int limiteIzquierdo, int limiteDerecho) {
    // Mueve el enemigo en el eje X
    EnemigoNivel1.x += EnemigoNivel1.dx;

    // Si el enemigo llega al límite izquierdo o derecho, cambia de dirección
    if (EnemigoNivel1.x <= limiteIzquierdo || EnemigoNivel1.x >= limiteDerecho) {
        EnemigoNivel1.dx = -EnemigoNivel1.dx;  // Invertir la dirección del movimiento
    }
}
void moverEnemigoLadoALado(Enemigos& enemigo, int limiteIzquierdo, int limiteDerecho) {
    enemigo.x += enemigo.dx;

    if (enemigo.x <= limiteIzquierdo || enemigo.x >= limiteDerecho) {
        enemigo.dx = -enemigo.dx;
    }
}