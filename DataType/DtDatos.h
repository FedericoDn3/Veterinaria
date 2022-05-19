#ifndef DTDATOS_H
#define DTDATOS_H
#include <string>
#include <stdexcept>
#include <string>

#include "../Enums/Genero.h"
#include "../Enums/RazaPerro.h"
#include "../Enums/TipoPelo.h"


using namespace std;


class DtDatos{

	public:
		DtDatos();
		DtDatos(string Nombre ,Genero Gen, float Peso,TipoPelo TPelo,bool Vacuna,RazaPerro Raza);
		~DtDatos();
		string getNombre() const;
		Genero getGenero() const;
		float getPeso() const;
		TipoPelo getTipoPelo();
		RazaPerro getRaza() const;
		bool getVacunaCachorro() const;
	private:

		string Nombre;
		Genero Gen;
		float Peso;
		TipoPelo TPelo;
		RazaPerro Raza;
		bool Vacuna;
#endif

