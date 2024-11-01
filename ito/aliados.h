#pragma once
#include"Mybiblioteca.h"


struct Aliados {
	int x, y;

};

void dibujarPortales(Aliados portal) {
    Console::BackgroundColor = ConsoleColor::DarkRed;
    Console::ForegroundColor = ConsoleColor::White;
    ubicar(portal.x,portal.y);
    cout << char(175);
    ubicar(portal.x, portal.y);
    cout << char(175);
    ubicar(portal.x,portal.y);
    cout << char(175);
}