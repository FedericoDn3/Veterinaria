#ifndef FECHA_H
#define FECHA_H
#include <string>
#include <stdexcept>


class Fecha {
public:
	Fecha();
    Fecha(int dia, int mes, int anio);
    
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    virtual ~Fecha();

private:
    int dia;
    int mes;
    int anio;
    bool isValid();
};
	std::ostream& operator<<(std::ostream &o, Fecha* Fecha);
#endif

