#pragma once
#include<iostream>
#include<time.h>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;
using namespace System;
void ubicar(int x, int y) {
	//funcion que ubica dependiendo de los parametros de x  , y}
	Console::SetCursorPosition(x,y);
}
void resaltar_opcion(char* options, int pos_opx, int pos_opy, bool seleccion) {//resaltar de un color las opciones
	if (seleccion) {
		Console::BackgroundColor = ConsoleColor::Green;
	}
	else {
		Console::BackgroundColor = ConsoleColor::Black;
	}
	Console::SetCursorPosition(pos_opx, pos_opy);
	cout << options << endl;
	Console::BackgroundColor = ConsoleColor::Black;
}