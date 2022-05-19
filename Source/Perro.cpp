#include "../Headers/Perro.h"
#include <sstream>

Perro::Perro(RazaPerro Raza , bool Vacuna)
{

	this->Raza=Raza;
	this->Vacuna=Vacuna;
	
}

RazaPerro Perro::getRaza()const {
	return this->Raza;
}

bool Perro::getVacunaCachorro()const {
	return this->Vacuna;
}

void Perro::setRaza(RazaPerro Raza){
     this->Raza = Raza;
}


void Perro::setVacunaCachorro(bool Vacuna)
{
     this->Vacuna = Vacuna;
}


Perro::~Perro()
{
}


 template <typename T> string tostr(const T& t) {
	std::ostringstream os;
	os<<t;
	return os.str();
}


//void Datos(Perro *P){
//
//	string Geni,vacu;
//	float pes,rac;
//
//	pes = P->getPeso();
//	rac = pes * 0,025;
//
//	string spes = tostr(pes);
//	string srac = tostr(rac);
//
//
//	if (P->getGenero() == macho)
//		Geni == "Macho";
//	if (P->getGenero() == hembra)
//		Geni == "Hembra";
//		
//	if (P->getVacunaCachorro() == 0)
//		vacu == "no";
//	if (P->getVacunaCachorro() == 1)
//		vacu == "si";
//
//    cout<< P->getNombre() << string("\n");
//    cout<< Geni << string("\n");
//    cout<< spes<<string("Kg")<< string("\n");
//    cout<<string("Su Mascota ")<<vacu<<string("cuenta con Vacuna")<<string("\n");
//	cout<< string("Racion Diaria")<< srac << string("Kg")<< string("\n");
//	
//}

ostream& operator<<(ostream& os,Perro *M){

string Geni;
float pes,rac;

pes = M->getPeso();
rac = pes * 0,025;

string spes = tostr(pes);
string srac = tostr(rac);


if (M->getGenero() == macho)
	Geni == "Macho";
if (M->getGenero() == hembra)
	Geni == "Hembra";

os << M->getNombre() << string("\n");
os << Geni << string("\n");
os << spes<<string("Kg")<< string("\n");
os << string("Racion Diaria")<< srac << string("Kg")<< string("\n");
}
