#include "../Headers/Socio.h"

Socio::Socio(string Nombre ,string Ci , Fecha FechaIngreso)
{
    this->Ci=Ci;
    this->Nombre=Nombre;
	this->FechaIngreso=FechaIngreso;
	this->cantConsultas=0;
	this->cantPerros=0;
	this->cantGatos=0;
	this->cantMascotas=0;
	this->Gatos = new Gato*[MAX_MASCOTAS];
	this->Perros = new Perro*[MAX_MASCOTAS];
	this->Consultas = new Consulta*[MAX_CONSULTAS];
}


void Socio::setNombre(string Nombre)
{
    this->Nombre=Nombre;
}

void Socio::setCi(string Ci)
{
    this->Ci=Ci;
}

void Socio::setFechaIngreso(Fecha FechaIngreso)
{
	this->FechaIngreso;
}


string Socio::getCi() {
	return this->Ci;
}

string Socio::getNombre() {
	return this->Nombre;
}

Fecha Socio::getFechaIngreso() {
	return this->FechaIngreso;
}


Socio::~Socio()
{
	delete[]Gatos;
	delete[]Perros;
	delete[]Consultas;
}

Gato** Socio::getGatos() const {
    return this->Gatos;
}

Perro** Socio::getPerros() const {
    return this->Perros;
}

Consulta** Socio::getConsultas() const {
    return this->Consultas;
}

int Socio::getCantM() const {
    return this->cantMascotas;
}

int Socio::getCantG() const {
    return this->cantGatos;
}

int Socio::getCantP() const {
    return this->cantPerros;
}

int Socio::getCantC() const {
    return this->cantConsultas;
}

void Socio::agregarGato(Gato* M) {
    if (this->cantMascotas == MAX_MASCOTAS) {
        throw ("La Cantidad de Mascotas Admitidas es de 10 Solamente");
    }

    this->Gatos[this->cantGatos] = M;
	this->cantGatos++;
    this->cantMascotas++;
}

void Socio::agregarPerro(Perro* M) {
    if (this->cantMascotas == MAX_MASCOTAS) {
        throw ("La Cantidad de Mascotas Admitidas es de 10 Solamente");
    }

    this->Perros[this->cantPerros] = M;
	this->cantPerros++;
    this->cantMascotas++;
}

void Socio::agregarConsulta(Consulta* C) {
    if (this->cantConsultas == MAX_CONSULTAS) {
        throw ("El Plan que usted Posee Solo Permite 20 Consultas");
    }

    this->Consultas[this->cantConsultas] = C;
    this->cantConsultas++;
}

