#ifndef CONSULTA_H
#define CONSULTA_H

#include "../DataType/Fecha.h"

#include <string>

using namespace std;

class Consulta
{
	public:
		Consulta(string Motivo , Fecha FechaConsulta);

		string getMotivo();
		Fecha getFecha();
		setMotivo(string Motivo);
		setFecha(Fecha FechaConsulta);
		~Consulta();

	private:
		string Motivo;
		Fecha FechaConsulta;

};

#endif
