#include "../Headers/Gato.h"
#include <sstream>

Gato::Gato(TipoPelo TPelo)
{
	this->TPelo=TPelo;
}

TipoPelo Gato::getTipoPelo()
{
	return this->TPelo;
}


void Gato::setTipoPelo(TipoPelo TPelo){
    this->TPelo=TPelo;
}

Gato::~Gato()
{
}



template <typename T> string tostr(const T& t) {
	std::ostringstream os;
	os<<t;
	return os.str();
}

//void Datos(Gato *G){
//
//
//	string Geni,tpelo;
//	float pes,rac;
//
//	pes = G->getPeso();
//	rac = pes * 0,025;
//
//	string spes = tostr(pes);
//	string srac = tostr(rac);
//
//
//
//	if (G->getGenero() == macho)
//		Geni == "Macho";
//	if (G->getGenero()== hembra)
//		Geni == "Hembra";
//
//	if (G->getTipoPelo() == corto)
//		tpelo == "Corto";
//	if (G->getTipoPelo() == mediano)
//		tpelo == "Mediano";
//	if (G->getTipoPelo() == largo)
//		tpelo == "Largo";
//
//
//    cout<< G->getNombre() << string("\n");
//    cout<< Geni << string("\n");
//    cout<< spes<<string("Kg")<< string("\n");
//	cout<<string("Su Mascota tiene Pelo")<<tpelo<< string("\n");
//	cout<< string("Racion Diaria")<< srac << string("Kg")<< string("\n");
//
//}


ostream& operator<<(ostream& os,Gato *M) {
string Geni;
float pes,rac;

pes = M->getPeso();
rac = pes * 0,015;

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
