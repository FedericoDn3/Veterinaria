#ifndef MASCOTA_H
#define MASCOTA_H

#include "../Enums/Genero.h"
#include "../Enums/RazaPerro.h"
#include "../Enums/TipoPelo.h"

#include <string>
#include <iostream>

using namespace std;



class Mascota
{

	public:
		Mascota();
		Mascota(string Nombre ,Genero Gen, float Peso);
		virtual ~Mascota();
		string getNombre() const;
		void setNombre(string nombre);
		void setPeso(float peso);
		void setGenero (Genero genero);;
		Genero getGenero() const;
		float getPeso() const;
//		virtual void Datos();
	private:

		string Nombre;
		Genero Gen;
		float Peso;
		
};

#endif
