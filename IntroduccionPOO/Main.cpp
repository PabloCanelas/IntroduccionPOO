#include <iostream>
#include "VideoJuego.h"
#include "MundoAbierto.h"
#include "Plataformer2D.h"
using namespace std;



int main() {
	//Set de variables
	MundoAbierto GtaV;
	Plataformer2D MarioBros;

	GtaV.setFechaLanzamiento("20/12/12");
	GtaV.setNombre("Gta V");
	GtaV.setRestriccion(18);
	GtaV.setPlataforma("PS4,Xbox,PC");
	GtaV.mostrarInformacion();
	GtaV.mostrarMapa();
	GtaV.iniciarJuego();

	MarioBros.setCantidadNiveles(100);
	MarioBros.setEstilo("Pixel art");
	MarioBros.setFechaLanzamiento("10/11/2001");
	MarioBros.setPlataforma("Nintendo64");
	MarioBros.setRestriccion(3);
	MarioBros.mostrarInformacion();
	MarioBros.setNombre("Mario bros.");


	getchar();

	return 0;
}