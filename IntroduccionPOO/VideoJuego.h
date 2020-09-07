#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

//CLASE BASE
class VideoJuego
{

protected:
	string Plataforma;
	string FechaLanzamiento;
	string Nombre;
	int RestriccionDeEdad;

public:
	VideoJuego();
	~VideoJuego();
	
	string getPlataforma();
	string getFechaLanzamiento();
	string getNombre();
	int getRestriccion();
	void setPlataforma(string platafomra);
	void setFechaLanzamiento(string fecha);
	void setNombre(string nombre);
	void setRestriccion(int Restriccion);

	void mostrarInformacion();
	void iniciarJuego();

};

VideoJuego::VideoJuego()
{

}


VideoJuego::~VideoJuego()
{
}


void VideoJuego::mostrarInformacion() {
	cout << "Nombre: " << Nombre << endl;
	cout << "Plataformas: "<< Plataforma <<endl;
	cout << "Lanzamiento: " << FechaLanzamiento << endl;
	cout << "Restriccion de edad: " << RestriccionDeEdad << endl;

}


void VideoJuego::iniciarJuego() {
	cout << "Juego iniciado " << endl;
}


string VideoJuego::getPlataforma() {
	return Plataforma;
}


string VideoJuego::getFechaLanzamiento() {
	return FechaLanzamiento;
}


string VideoJuego::getNombre() {
	return Nombre;
}


int VideoJuego::getRestriccion() {
	return RestriccionDeEdad;
}


void VideoJuego::setPlataforma(string platafomra) {
	Plataforma = platafomra;
}

void VideoJuego::setFechaLanzamiento(string fecha) {
	FechaLanzamiento = fecha;
}

void VideoJuego::setNombre(string nombre) {
	Nombre = nombre;
}

void VideoJuego::setRestriccion(int Restriccion) {
	RestriccionDeEdad = Restriccion;
}