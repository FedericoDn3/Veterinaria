#ifndef GATO_H
#define GATO_H

#include "../Headers/Mascota.h"


class Gato : public Mascota
{
	public:
		Gato(TipoPelo TPelo);
		void setTipoPelo (TipoPelo);
		TipoPelo getTipoPelo();
		~Gato();
//		void Datos(Gato* G);
		friend ostream& print(ostream& os);
	private:
		TipoPelo TPelo;

};


#endif
