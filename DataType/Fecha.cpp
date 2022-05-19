#include "../DataType/Fecha.h"
#include <sstream>
#include <string>

using namespace std;

Fecha::Fecha() {
}

Fecha::Fecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    
    if (!isValid()) {
        throw std::invalid_argument("Fecha invalida");
    }
}
    
int Fecha::getDia() const {
    return dia;
}

int Fecha::getMes() const {
    return mes;
}

int Fecha::getAnio() const {
    return anio;
}

bool Fecha::isValid() {
    return this->dia >= 1 && this->dia <= 31 &&
            this->mes >= 1 && this->mes <= 12 &&
            this->anio >= 1900;
}

Fecha::~Fecha() {
}

template <typename T> string tostr(const T& t) {
	std::ostringstream os;
	os<<t;
	return os.str();
}

std::ostream& operator<<(std::ostream &o,const Fecha* Fecha) {
	int dia,mes,anio;
	string sdia,smes,sanio;

	sdia=tostr(dia);
	smes=tostr(mes);
	sanio=tostr(anio);

    o <<sdia;
    o <<("/")<<smes;
    o <<("/")<<sanio;
    return o;
}

