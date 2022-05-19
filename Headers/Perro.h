#ifndef PERRO_H
#define PERRO_H

#include "../Headers/Mascota.h"


class Perro : public Mascota
{
	public:
		Perro(RazaPerro Raza , bool Vacuna);
		void setRaza(RazaPerro);
		void setVacunaCachorro(bool vacuna);
		RazaPerro getRaza() const;
		bool getVacunaCachorro() const;
		~Perro();
//		void Datos(Perro *P);
		friend ostream& print(ostream& os);
				
	private:
		RazaPerro Raza;
		bool Vacuna;

};
#endif
