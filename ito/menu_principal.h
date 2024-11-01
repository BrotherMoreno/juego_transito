#pragma once
#include"Mybiblioteca.h"
#include"rlutil.h"


void jugar();
void intrucciones();
void menu_principal();
void jugar() {

	cout << "jugar";
}
void intrucciones() {
	cout << "hola";
	_sleep(2000);

}
void menu_principal() {
	int opcion_elegida;
	int repetir = true;
	int mov_opc = 0; //mov de las opciones
	do {
		system("cls");
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(57, 13);
		resaltar_opcion("JUGAR", 57, 13, mov_opc == 0);
		resaltar_opcion("INSTRUCCIONES", 57, 14, mov_opc == 1);
		resaltar_opcion("SALIR", 57, 15, mov_opc == 2);
		Console::SetCursorPosition(56, 13 + mov_opc);
		cout << char(175) << endl;
		int tecla = rlutil::getkey();//representa numero de la tecla
		switch (tecla)
		{
		case 119:// w en codigo asciii
			Console::SetCursorPosition(56, 13 + mov_opc);
			cout << " " << endl;
			mov_opc--;
			if (mov_opc < 0) {
				mov_opc = 0;
			}
			break;
		case 115:// s en codigo ascii
			Console::SetCursorPosition(56, 13 + mov_opc);
			cout << " " << endl;
			mov_opc++;
			if (mov_opc > 2) {
				mov_opc = 2;
			}
			break;
		case 1:
			if (mov_opc == 2) {
				exit(0);
				break;
			}
			if (mov_opc == 1) {
				opcion_elegida = 1;
				repetir = false;
				break;
			}
			if (mov_opc == 0) {
				opcion_elegida = 3;
				repetir = false;
				break;
			}
		}
	} while (repetir);
	system("cls");
	switch (opcion_elegida)
	{
	case 1:
		intrucciones();
		system("cls");
		system("pause>0");
		jugar();
		break;
	case 2:
		system("cls");
		intrucciones();
		break;
	case 3:
		system("cls");
		exit(0);
		break;
	}
}

