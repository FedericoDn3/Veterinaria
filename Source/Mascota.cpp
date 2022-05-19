#include "../Headers/Mascota.h"

Mascota::Mascota(){
}

Mascota::Mascota(string Nombre , Genero Gen , float Peso)
{
	this->Nombre=Nombre;
	this->Peso = Peso;
	this->Gen = Gen ;
}

string Mascota::getNombre()const {
	return this->Nombre;
}

float Mascota::getPeso()const {
	return this->Peso;
}

Genero Mascota::getGenero() const {
	return this->Gen;
}

void Mascota::setNombre(string Nombre){
    this->Nombre = Nombre;
}


void Mascota::setPeso(float Peso)
{
    this->Peso = Peso;
}

//void Datos(){
//}

void Mascota::setGenero(Genero Gen)
{
    this->Gen=Gen;
}

Mascota::~Mascota()
{
}
