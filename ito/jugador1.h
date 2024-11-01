#pragma once
#include"Mybiblioteca.h"
#include"mapa_two.h"
#define Arriba 72
#define Abajo 80
#define Derecha 77
#define Izquierda 75
struct Personaje {
	int x, y;
	int dx, dy;
	bool salir;
	int ancho, alto;

};

void dibujarPersonaje(Personaje jugadorMan) {
	ubicar(jugadorMan.x, jugadorMan.y);     cout << " O ";
	ubicar(jugadorMan.x, jugadorMan.y + 1); cout << "/|\\";
	ubicar(jugadorMan.x, jugadorMan.y + 2); cout << "/ \\";
}
void dibujarSimulacioncaminar(Personaje jugadorMan) {
	ubicar(jugadorMan.x, jugadorMan.y);     cout << "\\O/";
	ubicar(jugadorMan.x, jugadorMan.y + 1); cout << " | ";
	ubicar(jugadorMan.x, jugadorMan.y + 2); cout << "/ \\";
}
void dibujarAccionRecoger(Personaje jugadorMan) {
	ubicar(jugadorMan.x, jugadorMan.y);     cout << "_ O";
	ubicar(jugadorMan.x, jugadorMan.y + 1); cout << " /\\";
	ubicar(jugadorMan.x, jugadorMan.y + 2); cout << "| \\";
}

void borrarPersonaje(Personaje jugadorMan) {
	ubicar(jugadorMan.x, jugadorMan.y);   cout << "   ";
	ubicar(jugadorMan.x, jugadorMan.y + 1); cout << "   ";
	ubicar(jugadorMan.x, jugadorMan.y + 2); cout << "   ";
}

void movimientoPersonaje(Personaje&jugadorMan, int mapa[FILA][COLUMNA]) {
	if (kbhit) {
		switch (_getch()) 
		{
		case Arriba:
			if (mapa2[jugadorMan.y - jugadorMan.dy][jugadorMan.x] != 2 &&mapa2[jugadorMan.y + 1 - jugadorMan.dy][jugadorMan.x] != 2&& mapa2[jugadorMan.y+2 - jugadorMan.dy][jugadorMan.x ] != 2)
			{
				jugadorMan.y = jugadorMan.y - jugadorMan.dy;
				dibujarSimulacioncaminar(jugadorMan);
				borrarPersonaje(jugadorMan);
			}
			break;
		case Abajo:
			if (mapa2[jugadorMan.y +jugadorMan.dy][jugadorMan.x] != 2 && mapa2[jugadorMan.y + 1 + jugadorMan.dy][jugadorMan.x] != 2 && mapa2[jugadorMan.y + 2 + jugadorMan.dy][jugadorMan.x] != 2)
			{
				jugadorMan.y = jugadorMan.y + jugadorMan.dy;
			}
			break;
		case Derecha:
			if(mapa2[jugadorMan.x +jugadorMan.dx][jugadorMan.y] != 2 && mapa2[jugadorMan.x + jugadorMan.dx][jugadorMan.x] != 2 )
			{
				jugadorMan.y = jugadorMan.x + jugadorMan.dx;
			}
			break;
		case Izquierda:
			if (mapa2[jugadorMan.x - jugadorMan.dx][jugadorMan.y] != 2 && mapa2[jugadorMan.x - jugadorMan.dx][jugadorMan.x] != 2)
			{
				jugadorMan.y = jugadorMan.x - jugadorMan.dx;
			}
			break;
		}
	}
}