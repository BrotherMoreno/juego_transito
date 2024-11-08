#include"menu_principal.h"
#include"rlutil.h"
#include"Mybiblioteca.h"
#include"personajeChosicano.h"
#include"Mapas.h"
#include"Nivel2.h"


#define ANCHO 82
#define ALTO 31
int main() {
	eliminar_latencia_cursor();
	eliminarVisibilidadCursor();
	menu_principal();
	_getch();
	return 0;
}
