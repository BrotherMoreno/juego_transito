#pragma once
#include"Mybiblioteca.h"
//#define ANCHO 90
//#define ALTO 40;
struct Chosicano {
	int x, y;
	int dx, dy;
};

void dibujar_chosicano(int x, int y) {
	Console::ForegroundColor = ConsoleColor::White;
	ubicar(x, y);
	cout << " _______________________";
	ubicar(x, y + 1);
	cout << "|  |    |    |   |_|    |";
	ubicar(x, y + 2);
	cout << "|__|____|____|___| |____|";
	Console::ForegroundColor = ConsoleColor::DarkGreen;
	ubicar(x, y + 3);
	cout << "|----------------|_|    |";
	ubicar(x, y + 4);
	cout << "`--(o)(o)----------(o)--'";
}





