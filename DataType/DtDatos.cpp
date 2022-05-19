#include "../DataType/DtDatos.h"

DtDatos::DtDatos(){
}

DtDatos::DtDatos(string Nombre ,Genero Gen, float Peso,TipoPelo TPelo,bool Vacuna,RazaPerro Raza)
{
	this->Nombre=Nombre;
	this->Peso = Peso;
	this->Gen = Gen ;
	this->TPelo = TPelo;
	this->Raza = Raza;
	this->Vacuna = Vacuna;
	
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

void Perro::setRaza(RazaPerro Raza){
     this->Raza = Raza;
}


void Perro::setVacunaCachorro(bool Vacuna)
{
     this->Vacuna = Vacuna;
}

void Gato::setTipoPelo(TipoPelo TPelo){
    this->TPelo=TPelo;
}


DtDatos::~DtDatos()
{
}
