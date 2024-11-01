#include"menu_principal.h"
#include"rlutil.h"
#include"Mybiblioteca.h"
#include"personajeChosicano.h"
#include"mapa_two.h"
#define ANCHO 82
#define ALTO 31
int main() {
	//menu_principal();
	Console::SetWindowSize(ANCHO, ALTO);
	dibujarMapa(mapa2);
	dibujar_chosicano(4,3);
	_getch();
	return 0;
}
