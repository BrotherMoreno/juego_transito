#pragma once
#include"Mybiblioteca.h"


struct Aliados {
	int x, y;
    int ancho, alto;
    bool activo;
    //valores exclusivos para el portal
    int posPortalRojoX, posPortalRojoY;
    int posPortalRojoSalidaX, posPortalRojoSalidaY;
    int posPortalAmarilloX, posPortalAmarilloY;
    int posPortalAmarilloSalidaX, posPortalAmarilloSalidaY;
};

void dibujarPortaleRojo(Aliados &portalRojo) {
    //dibuja entrada del portal rojo
    Console::BackgroundColor = ConsoleColor::DarkRed;
    Console::ForegroundColor = ConsoleColor::White;
    ubicar(portalRojo.posPortalRojoX, portalRojo.posPortalRojoY);
    cout << char(174);
    ubicar(portalRojo.posPortalRojoX, portalRojo.posPortalRojoY+1);
    cout << char(174);
    ubicar(portalRojo.posPortalRojoX, portalRojo.posPortalRojoY+2);
    cout << char(174);

    //dibuja salida del portal rojo
    ubicar(portalRojo.posPortalRojoSalidaX, portalRojo.posPortalRojoSalidaY);
    cout << char(174);
    ubicar(portalRojo.posPortalRojoSalidaX, portalRojo.posPortalRojoSalidaY+1);
    cout << char(174);
    ubicar(portalRojo.posPortalRojoSalidaX, portalRojo.posPortalRojoSalidaY+2);
    cout << char(174);

}
void dibujarPortalAmarillo(Aliados &portalAmarillo){
    //dibuja entrada del portal amarillo
    Console::BackgroundColor = ConsoleColor::DarkYellow;
    Console::ForegroundColor = ConsoleColor::White;
    ubicar(portalAmarillo.posPortalAmarilloX, portalAmarillo.posPortalAmarilloY);
    cout << char(175);
    ubicar(portalAmarillo.posPortalAmarilloX, portalAmarillo.posPortalAmarilloY+1);
    cout << char(175);
    ubicar(portalAmarillo.posPortalAmarilloX, portalAmarillo.posPortalAmarilloY+2);
    cout << char(175);

    //dibuja salida del portal amarillo
    ubicar(portalAmarillo.posPortalAmarilloSalidaX, portalAmarillo.posPortalAmarilloSalidaY);
    cout << char(175);
    ubicar(portalAmarillo.posPortalAmarilloSalidaX, portalAmarillo.posPortalAmarilloSalidaY+1);
    cout << char(175);
    ubicar(portalAmarillo.posPortalAmarilloSalidaX, portalAmarillo.posPortalAmarilloSalidaY+2);
    cout << char(175);
}

void activacionPortales(Aliados actportales) {
    Console::BackgroundColor = ConsoleColor::DarkBlue;
    Console::ForegroundColor = ConsoleColor::DarkGreen;
    Console::SetCursorPosition(actportales.x, actportales.y);
    cout << char(208);
    Console::ForegroundColor = ConsoleColor::Gray;
     
}
void borrarAliado(Aliados actportales) {

    Console::SetCursorPosition(actportales.x, actportales.y);
    cout << " ";
}