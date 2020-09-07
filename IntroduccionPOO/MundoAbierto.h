#pragma once
#include "VideoJuego.h"

class MundoAbierto : public VideoJuego
{
public:
	MundoAbierto();
	~MundoAbierto();
	
	void mostrarMapa();

	int getTam();
	string getNombreMapa();
	string* getZonas();

private:
	int TamañoKm2;
	string NombreMapa;
	string ZonasDelMapa[5];
};


MundoAbierto::MundoAbierto()
{
	ZonasDelMapa[0] = "Zone 1";
	ZonasDelMapa[1] = "Zone 2";
	ZonasDelMapa[2] = "Area51";
	ZonasDelMapa[3] = "Sea Shore";
	ZonasDelMapa[4] = "Downtown";

}

MundoAbierto::~MundoAbierto()
{
}

void MundoAbierto::mostrarMapa() {
	cout << "MAPA: " << NombreMapa << endl;
	cout << "TAMAñO: " << TamañoKm2 <<"KM2"<<endl;
	cout << "Zonas: " << NombreMapa << endl;

	for (int i = 0; i < 5; i++) {
		cout << "Zona " << i << " " << ZonasDelMapa[i] << endl;
	}
}

int MundoAbierto::getTam() {
	return TamañoKm2;
}
string MundoAbierto::getNombreMapa() {
	return NombreMapa;
}
string* MundoAbierto::getZonas() {
	return ZonasDelMapa;
}