#pragma once
#include "VideoJuego.h"

class Plataformer2D : public VideoJuego
{
public:
	Plataformer2D();
	~Plataformer2D();

	int getCantidadNiveles();
	string getEstilo();
	void setCantidadNiveles(int cant);
	void setEstilo(string estilo);

private:
	int CantidadDeNiveles;
	string Estilo;
};

Plataformer2D::Plataformer2D()
{
}

Plataformer2D::~Plataformer2D()
{
}

int Plataformer2D::getCantidadNiveles() {
	return CantidadDeNiveles;

}
string Plataformer2D::getEstilo() {
	return Estilo;
}
void Plataformer2D::setCantidadNiveles(int cant){
	CantidadDeNiveles = cant;
}
void Plataformer2D::setEstilo(string estilo) {
	Estilo = estilo;
}