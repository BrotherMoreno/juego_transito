#pragma once
#include"Mybiblioteca.h"
#include"Mapas.h"
#define Arriba 72
#define Abajo 80
#define Derecha 77
#define Izquierda 75
#define Letrae 101
struct PersonajeNivel1 {
	int x, y;
	int dx, dy;
	bool salir;
	int ancho, alto;
};

struct PersonajeNivel2 {
	int x, y;
	int dx, dy;
	bool salir;
	int ancho, alto;

};
//funciones Declaradas
void dibujarPersonajeNivel1(PersonajeNivel1 jugadorNivel1);
void dibujarSimulacionCaminarNivel1(PersonajeNivel1 jugadorNivel1);
void dibujarAccionRecogerNIvel1(PersonajeNivel1 jugadorNivel1);
void borrarPersonajeNivel1(PersonajeNivel1 jugadorNivel1);


//funciones Personaje nivel 1
void dibujarPersonajeNivel1(PersonajeNivel1 jugadorNivel1) {
	Console::BackgroundColor = ConsoleColor::DarkGray;
	ubicar(jugadorNivel1.x, jugadorNivel1.y);     cout << " O ";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 1); cout << "/|\\";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 2); cout << "/ \\";
}
void dibujarSimulacionCaminarNivel1(PersonajeNivel1 jugadorNivel1) {
	Console::BackgroundColor = ConsoleColor::DarkGray;
	ubicar(jugadorNivel1.x, jugadorNivel1.y);     cout << "\\O/";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 1); cout << " | ";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 2); cout << "/ \\";
}
void dibujarAccionRecogerNIvel1(PersonajeNivel1 jugadorNivel1) {
	Console::BackgroundColor = ConsoleColor::DarkGray;
	_sleep(100);
	ubicar(jugadorNivel1.x, jugadorNivel1.y);     cout << "_ O";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 1); cout << " /\\";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 2); cout << "|\\";
}
void borrarPersonajeNivel1(PersonajeNivel1 jugadorNivel1) {
	ubicar(jugadorNivel1.x, jugadorNivel1.y);   cout << "   ";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 1); cout << "   ";
	ubicar(jugadorNivel1.x, jugadorNivel1.y + 2); cout << "   ";
}

//funciones Personaje nivel 2
void dibujarPersonajeNivel2(PersonajeNivel2 jugadorNivel2) {
	Console::BackgroundColor = ConsoleColor::DarkGray;
	ubicar(jugadorNivel2.x, jugadorNivel2.y);     cout << " O ";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 1); cout << "/|\\";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 2); cout << "/ \\";
}
void dibujarSimulacionCaminarNivel2(PersonajeNivel2 jugadorNivel2) {
	Console::BackgroundColor = ConsoleColor::DarkGray;
	ubicar(jugadorNivel2.x, jugadorNivel2.y);     cout << "\\O/";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 1); cout << " | ";
	ubicar(jugadorNivel2.x, jugadorNivel2.y + 2); cout << "/ \\";
}
void dibujarAccionRecogerNivel2(PersonajeNivel2 jugadorNivel2) {
	Console::BackgroundColor = ConsoleColor::DarkCyan;
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
void movimientoPersonajeNivel1(PersonajeNivel1&jugadorNivel1, int mapa1[FILA][COLUMNA]) {
	if (kbhit) {
		switch (_getch()) 
		{
		case Arriba:
			if (mapa1[jugadorNivel1.y - jugadorNivel1.dy][jugadorNivel1.x] == 0 &&mapa1[jugadorNivel1.y + 1 - jugadorNivel1.dy][jugadorNivel1.x] == 0&& mapa1[jugadorNivel1.y+2 - jugadorNivel1.dy][jugadorNivel1.x ] == 0&&
				mapa1[jugadorNivel1.y - jugadorNivel1.dy][jugadorNivel1.x+1] == 0 && mapa1[jugadorNivel1.y + 1 - jugadorNivel1.dy][jugadorNivel1.x+1] == 0 && mapa1[jugadorNivel1.y + 2 - jugadorNivel1.dy][jugadorNivel1.x+1] == 0&&
				mapa1[jugadorNivel1.y - jugadorNivel1.dy][jugadorNivel1.x+2] == 0 && mapa1[jugadorNivel1.y + 1 - jugadorNivel1.dy][jugadorNivel1.x+2] == 0 && mapa1[jugadorNivel1.y + 2 - jugadorNivel1.dy][jugadorNivel1.x+2] == 0)
			{
				dibujarSimulacionCaminarNivel1(jugadorNivel1);
				_sleep(100);
				borrarPersonajeNivel1(jugadorNivel1);
				jugadorNivel1.y = jugadorNivel1.y - jugadorNivel1.dy;
			}
			break;
		case Abajo:
			if (mapa1[jugadorNivel1.y +jugadorNivel1.dy][jugadorNivel1.x] ==0 && mapa1[jugadorNivel1.y + 1 + jugadorNivel1.dy][jugadorNivel1.x] == 0 && mapa1[jugadorNivel1.y + 2 + jugadorNivel1.dy][jugadorNivel1.x] == 0&&
				mapa1[jugadorNivel1.y + jugadorNivel1.dy][jugadorNivel1.x+1] == 0 && mapa1[jugadorNivel1.y + 1 + jugadorNivel1.dy][jugadorNivel1.x+1] == 0 && mapa1[jugadorNivel1.y + 2 + jugadorNivel1.dy][jugadorNivel1.x+1] == 0&&
				mapa1[jugadorNivel1.y + jugadorNivel1.dy][jugadorNivel1.x + 2] == 0 && mapa1[jugadorNivel1.y + 1 + jugadorNivel1.dy][jugadorNivel1.x + 2] == 0 && mapa1[jugadorNivel1.y + 2 + jugadorNivel1.dy][jugadorNivel1.x+2] == 0)
			{
				dibujarSimulacionCaminarNivel1(jugadorNivel1);
				_sleep(100);
				borrarPersonajeNivel1(jugadorNivel1);
				jugadorNivel1.y = jugadorNivel1.y + jugadorNivel1.dy;
			}
			break;
		case Derecha:
			if ((mapa1[jugadorNivel1.y][(jugadorNivel1.x + 2) + jugadorNivel1.dx] == 0) && (mapa1[jugadorNivel1.y + 1][(jugadorNivel1.x + 2) + jugadorNivel1.dx] == 0) && (mapa1[jugadorNivel1.y + 2][(jugadorNivel1.x + 2) + jugadorNivel1.dx] == 0))
			{
				dibujarSimulacionCaminarNivel1(jugadorNivel1);
				_sleep(100);
				borrarPersonajeNivel1(jugadorNivel1);
				jugadorNivel1.x = jugadorNivel1.x + jugadorNivel1.dx;
			}
			break;
		case Izquierda:
			if ((mapa1[jugadorNivel1.y][(jugadorNivel1.x-2) + jugadorNivel1.dx] == 0)&& (mapa1[jugadorNivel1.y + 1][(jugadorNivel1.x - 2) + jugadorNivel1.dx] == 0)&&((mapa1[jugadorNivel1.y + 2][(jugadorNivel1.x - 2) + jugadorNivel1.dx] == 0)))
			{
				dibujarSimulacionCaminarNivel1(jugadorNivel1);
				_sleep(100);
				borrarPersonajeNivel1(jugadorNivel1);
				jugadorNivel1.x = jugadorNivel1.x - jugadorNivel1.dx;
			}
			break;
		case Letrae:
			borrarPersonajeNivel1(jugadorNivel1);
			dibujarAccionRecogerNIvel1(jugadorNivel1);
			_sleep(500);
			borrarPersonajeNivel1(jugadorNivel1);
			break;
		}
	}
}
void movimientoPersonajeNivel2(PersonajeNivel2&jugadorNivel2, int mapa2[FILA][COLUMNA]) {
	if (kbhit) {
		switch (_getch()) 
		{
		case Arriba:
			if (mapa2[jugadorNivel2.y - jugadorNivel2.dy][jugadorNivel2.x] ==1 &&mapa2[jugadorNivel2.y + 1 - jugadorNivel2.dy][jugadorNivel2.x] ==1&& mapa2[jugadorNivel2.y+2 - jugadorNivel2.dy][jugadorNivel2.x ] ==1&& jugadorNivel2.y>0)
			{
				dibujarSimulacionCaminarNivel2(jugadorNivel2);
				_sleep(100);
				borrarPersonajeNivel2(jugadorNivel2);
				jugadorNivel2.y = jugadorNivel2.y - jugadorNivel2.dy;
			}
			break;
		case Abajo:
			if (mapa2[jugadorNivel2.y +jugadorNivel2.dy][jugadorNivel2.x] ==1 && mapa2[jugadorNivel2.y + 1 + jugadorNivel2.dy][jugadorNivel2.x] ==1 && mapa2[jugadorNivel2.y + 2 + jugadorNivel2.dy][jugadorNivel2.x] ==1&& jugadorNivel2.y + 2 <29)
			{
				dibujarSimulacionCaminarNivel2(jugadorNivel2);
				_sleep(100);
				borrarPersonajeNivel2(jugadorNivel2);
				jugadorNivel2.y = jugadorNivel2.y + jugadorNivel2.dy;
			}
			break;
		case Derecha:
			if ((mapa2[jugadorNivel2.y][(jugadorNivel2.x+2) + jugadorNivel2.dx] == 1 )&& (mapa2[jugadorNivel2.y + 1][(jugadorNivel2.x+2) + jugadorNivel2.dx] == 1 ) && (mapa2[jugadorNivel2.y+2 ][(jugadorNivel2.x+2) + jugadorNivel2.dx] == 1))
			{
				dibujarSimulacionCaminarNivel2(jugadorNivel2);
				_sleep(100);

				borrarPersonajeNivel2(jugadorNivel2);
				jugadorNivel2.x = jugadorNivel2.x + jugadorNivel2.dx;
			}
			break;
		case Izquierda:
			if ((mapa2[jugadorNivel2.y][(jugadorNivel2.x-2) + jugadorNivel2.dx] == 1) && (mapa2[jugadorNivel2.y + 1][(jugadorNivel2.x-2) + jugadorNivel2.dx] == 1) && (mapa2[jugadorNivel2.y +2][(jugadorNivel2.x-2) + jugadorNivel2.dx] == 1)&&(jugadorNivel2.x!=0))
			{
				dibujarSimulacionCaminarNivel2(jugadorNivel2);
				_sleep(100);
				borrarPersonajeNivel2(jugadorNivel2);
				jugadorNivel2.x= jugadorNivel2.x - jugadorNivel2.dx;
			}
			break;
		}
	}
}