#pragma once
#include"Mybiblioteca.h"
#include"mapa_two.h"
#define Arriba 72
#define Abajo 80
#define Derecha 77
#define Izquierda 75
struct PersonajeNivel1 {
	int x, y;
	int dx, dy;
	bool salir;
	int ancho, alto;
};
//funciones personaje nivel 1
void dibujarPersonajeNivel1(PersonajeNivel1 jugadorNivel1);
void dibujarSimulacionCaminarNivel1(PersonajeNivel1 jugadorNivel1);
void dibujarAccionRecogerNIvel1(PersonajeNivel1 jugadorNivel1);
void borrarPersonajeNivel1(PersonajeNivel1 jugadorNivel1);

struct PersonajeNivel2 {
	int x, y;
	int dx, dy;
	bool salir;
	int ancho, alto;

};
//funciones personaje nivel 2

void dibujarPersonajeNivel1(PersonajeNivel1 jugadorNivel1) {
	Console::BackgroundColor = ConsoleColor::Green;
	ubicar(jugadorNivel1.x, jugadorNivel1.y);     cout << " O ";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 1); cout << "/|\\";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 2); cout << "/ \\";
}
void dibujarSimulacionCaminarNivel1(PersonajeNivel1 jugadorNivel1) {
	Console::BackgroundColor = ConsoleColor::Green;
	ubicar(jugadorNivel1.x, jugadorNivel1.y);     cout << "\\O/";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 1); cout << " | ";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 2); cout << "/ \\";
}
void dibujarAccionRecogerNIvel1(PersonajeNivel1 jugadorNivel1) {
	Console::BackgroundColor = ConsoleColor::Green;
	ubicar(jugadorNivel1.x, jugadorNivel1.y);     cout << "_ O";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 1); cout << " /\\";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 2); cout << "| \\";
}
void borrarPersonajeNivel1(PersonajeNivel1 jugadorNivel1) {
	ubicar(jugadorNivel1.x, jugadorNivel1.y);   cout << "   ";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 1); cout << "   ";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 2); cout << "   ";
}


void dibujarPersonajeNivel2(PersonajeNivel2 jugadorNivel2) {
	Console::BackgroundColor = ConsoleColor::DarkBlue;
	ubicar(jugadorNivel2.x, jugadorNivel2.y);     cout << " O ";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 1); cout << "/|\\";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 2); cout << "/ \\";
}
void dibujarSimulacionCaminarNivel2(PersonajeNivel2 jugadorNivel2) {
	Console::BackgroundColor = ConsoleColor::DarkBlue;
	ubicar(jugadorNivel2.x, jugadorNivel2.y);     cout << "\\O/";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 1); cout << " | ";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 2); cout << "/ \\";
}
void dibujarAccionRecogerNivel2(PersonajeNivel2 jugadorNivel2) {
	Console::BackgroundColor = ConsoleColor::DarkBlue;
	ubicar(jugadorNivel2.x, jugadorNivel2.y);     cout << "_ O";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 1); cout << " /\\";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 2); cout << "| \\";
}
void borrarPersonajeNivel2(PersonajeNivel2 jugadorNivel2) {
	ubicar(jugadorNivel2.x, jugadorNivel2.y);   cout << "   ";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 1); cout << "   ";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 2); cout << "   ";
}

//funcion movimiento de los personajes 

void movimientoPersonajeNivel1(PersonajeNivel1&jugadorNivel1, int mapa[FILA][COLUMNA]) {
	if (kbhit) {
		switch (_getch()) 
		{
		case Arriba:
			if (mapa2[jugadorNivel1.y - jugadorNivel1.dy][jugadorNivel1.x] != 2 &&mapa2[jugadorNivel1.y + 1 - jugadorNivel1.dy][jugadorNivel1.x] != 2&& mapa2[jugadorNivel1.y+2 - jugadorNivel1.dy][jugadorNivel1.x ] != 2)
			{
				dibujarSimulacionCaminarNivel1(jugadorNivel1);
				borrarPersonajeNivel1(jugadorNivel1);
				jugadorNivel1.y = jugadorNivel1.y - jugadorNivel1.dy;
			}
			break;
		case Abajo:
			if (mapa2[jugadorNivel1.y +jugadorNivel1.dy][jugadorNivel1.x] != 2 && mapa2[jugadorNivel1.y + 1 + jugadorNivel1.dy][jugadorNivel1.x] != 2 && mapa2[jugadorNivel1.y + 2 + jugadorNivel1.dy][jugadorNivel1.x] != 2)
			{
				dibujarSimulacionCaminarNivel1(jugadorNivel1);
				borrarPersonajeNivel1(jugadorNivel1);
				jugadorNivel1.y = jugadorNivel1.y + jugadorNivel1.dy;
			}
			break;
		case Derecha:
			if(mapa2[jugadorNivel1.x +jugadorNivel1.dx][jugadorNivel1.y] != 2 && mapa2[jugadorNivel1.x + jugadorNivel1.dx][jugadorNivel1.x] != 2 )
			{
				dibujarSimulacionCaminarNivel1(jugadorNivel1);
				borrarPersonajeNivel1(jugadorNivel1);
				jugadorNivel1.y = jugadorNivel1.x + jugadorNivel1.dx;
			}
			break;
		case Izquierda:
			if (mapa2[jugadorNivel1.x - jugadorNivel1.dx][jugadorNivel1.y] != 2 && mapa2[jugadorNivel1.x - jugadorNivel1.dx][jugadorNivel1.x] != 2)
			{
				dibujarSimulacionCaminarNivel1(jugadorNivel1);
				borrarPersonajeNivel1(jugadorNivel1);
				jugadorNivel1.y = jugadorNivel1.x - jugadorNivel1.dx;
			}
			break;
		}
	}
}
void movimientoPersonajeNivel2(PersonajeNivel2&jugadorNivel2, int mapa[FILA][COLUMNA]) {
	if (kbhit) {
		switch (_getch()) 
		{
		case Arriba:
			if (mapa2[jugadorNivel2.y - jugadorNivel2.dy][jugadorNivel2.x] != 2 &&mapa2[jugadorNivel2.y + 1 - jugadorNivel2.dy][jugadorNivel2.x] != 2&& mapa2[jugadorNivel2.y+2 - jugadorNivel2.dy][jugadorNivel2.x ] != 2)
			{
				dibujarSimulacionCaminarNivel2(jugadorNivel2);
				borrarPersonajeNivel2(jugadorNivel2);
				jugadorNivel2.y = jugadorNivel2.y - jugadorNivel2.dy;
			}
			break;
		case Abajo:
			if (mapa2[jugadorNivel2.y +jugadorNivel2.dy][jugadorNivel2.x] != 2 && mapa2[jugadorNivel2.y + 1 + jugadorNivel2.dy][jugadorNivel2.x] != 2 && mapa2[jugadorNivel2.y + 2 + jugadorNivel2.dy][jugadorNivel2.x] != 2)
			{
				dibujarSimulacionCaminarNivel2(jugadorNivel2);
				borrarPersonajeNivel2(jugadorNivel2);
				jugadorNivel2.y = jugadorNivel2.y + jugadorNivel2.dy;
			}
			break;
		case Derecha:
			if(mapa2[jugadorNivel2.x +jugadorNivel2.dx][jugadorNivel2.y] != 2 && mapa2[jugadorNivel2.x + jugadorNivel2.dx][jugadorNivel2.x] != 2 )
			{
				dibujarSimulacionCaminarNivel2(jugadorNivel2);
				borrarPersonajeNivel2(jugadorNivel2);
				jugadorNivel2.y = jugadorNivel2.x + jugadorNivel2.dx;
			}
			break;
		case Izquierda:
			if (mapa2[jugadorNivel2.x - jugadorNivel2.dx][jugadorNivel2.y] != 2 && mapa2[jugadorNivel2.x - jugadorNivel2.dx][jugadorNivel2.x] != 2)
			{
				dibujarSimulacionCaminarNivel2(jugadorNivel2);
				borrarPersonajeNivel2(jugadorNivel2);
				jugadorNivel2.y = jugadorNivel2.x - jugadorNivel2.dx;
			}
			break;
		}
	}
}