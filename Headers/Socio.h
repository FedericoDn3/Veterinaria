#ifndef SOCIO_H
#define SOCIO_H

#include "../DataType/Fecha.h"
#include "../Headers/Consulta.h"
#include "../Headers/Mascota.h"
#include "../Headers/Perro.h"
#include "../Headers/Gato.h"

#include <string>

using namespace std;

class Socio
{
	public:

		Socio(string Nombre ,string Ci ,Fecha FechaIngreso);
		void setCi(string);
		void setNombre(string);
		void setFechaIngreso(Fecha);
		string getNombre();
		string getCi();
		Fecha getFechaIngreso();
		Perro** getPerros() const;
		Gato** getGatos() const;
		Consulta** getConsultas() const;
		int getCantP()const;
		int getCantG()const;
		int getCantM()const;
		int getCantC()const;
		void agregarGato(Gato*);
		void agregarPerro(Perro*);
		void agregarConsulta(Consulta*);
		~Socio();

 	private:
		string Ci;
		string Nombre;
		Fecha FechaIngreso;
		Perro** Perros;
		Gato** Gatos;
		Consulta** Consultas;
		int cantGatos;
		int cantPerros;
		int cantMascotas;
		int cantConsultas;
		static const int MAX_MASCOTAS = 10;
		static const int MAX_CONSULTAS = 20;;
};

#endif
