#pragma once
#include"Mybiblioteca.h"
#define FILA 30
#define COLUMNA 80

int mapa2[FILA][COLUMNA] = { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,5,5,5,5,5,4,4,4,4,5,5,5,5,5,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,5,5,5,2,2,2,4,4,2,2,2,5,5,5,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,6,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,5,5,2,2,2,2,4,4,2,2,2,2,5,5,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,4,4,4,6,4,4,6,6,4,4,6,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {2,2,2,3,3,2,2,3,3,2,2,3,2,2,2,2,2,1,1,4,2,2,2,4,4,4,4,4,4,2,2,2,4,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,4,4,4,6,4,4,4,6,4,4,6,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {0,0,2,2,2,2,2,2,2,2,2,3,2,2,2,2,2,1,1,4,2,2,4,4,4,4,4,4,4,4,2,2,4,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,4,4,4,4,6,4,6,4,4,6,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,4,4,4,4,4,4,5,5,4,4,4,4,4,4,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,6,6,6,6,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,4,4,4,4,4,4,5,5,4,4,4,4,4,4,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,6,6,6,6,6,6,6,6,6,6,6,6,6,6,4,4,4,4,4,4,4,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,4,2,2,4,4,4,4,4,4,4,4,2,2,4,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,6,2,2,6,2,2,2,2,2,2,6,2,2,6,4,4,4,4,4,4,4,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,4,2,2,2,4,4,4,4,4,4,2,2,2,4,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,4,4,4,4,4,4,6,2,6,2,2,2,2,2,2,2,2,6,2,6,4,4,4,4,4,4,4,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,5,5,2,2,2,2,4,4,2,2,2,2,5,5,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,6,6,6,6,6,6,6,6,2,2,2,2,2,2,2,2,2,2,6,6,6,6,6,6,6,6,6,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,5,5,5,2,2,2,4,4,2,2,2,5,5,5,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,1,6,6,6,6,6,6,6,2,2,2,2,2,2,2,2,2,2,2,2,6,6,6,6,6,6,6,6,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,5,5,5,5,5,4,4,4,4,5,5,5,5,5,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,1,6,6,6,6,6,6,6,2,2,2,2,2,2,2,2,2,2,2,2,6,6,6,6,6,6,6,6,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,7,0,0,7,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,7,0,0,7,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,7,0,0,7,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,7,0,0,7,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,7,7,2,2,2,2,2,2,2,2,2,2,2,2,2,2,7,7,2,2,2,2,2,2,2,2,2,2,2,7,7,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,7,7,3,3,2,2,3,3,2,2,3,3,2,2,3,3,7,7,2,2,2,2,2,2,2,2,2,2,2,7,7,3,3,2,2,3,3,2,2,3,3,2,2,3,3,2,2,3,3,2,2,3,3,2,2,3,3,2,2,3,3,2,2},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,7,7,2,2,2,2,2,2,2,2,2,2,2,2,2,2,7,7,2,2,2,2,2,2,2,2,2,2,2,7,7,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,7,0,0,7,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,7,0,0,7,0,0,7,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                                                            {1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,2,2,2,2,2,3,2,2,2,2,2,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4} };
                                                                                                         
void dibujarMapa(int Mapa2[FILA][COLUMNA]) {


    for (int f = 0; f < FILA; f++) {
        for (int c = 0; c < COLUMNA; c++) {
            Console::SetCursorPosition(c, f);
            if (Mapa2[f][c] == 0) Console::ForegroundColor = ConsoleColor::White;
            if (Mapa2[f][c] == 1) Console::ForegroundColor = ConsoleColor::DarkBlue;
            if (Mapa2[f][c] == 2)Console::ForegroundColor = ConsoleColor::Black;
            if (Mapa2[f][c] == 3)Console::ForegroundColor = ConsoleColor::DarkYellow;
            if (Mapa2[f][c] == 4)Console::ForegroundColor = ConsoleColor::DarkCyan;
            if (Mapa2[f][c] == 5)Console::ForegroundColor = ConsoleColor::DarkGreen;
            if (Mapa2[f][c] == 6)Console::ForegroundColor = ConsoleColor::DarkRed;
            if (Mapa2[f][c] == 7)Console::ForegroundColor = ConsoleColor::Black;

            cout << (char)219;
        }
    }
}

