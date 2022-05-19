#include "./Enums/Genero.h"
#include "./Enums/RazaPerro.h"
#include "./Enums/TipoPelo.h"
#include "./Headers/Mascota.h"
#include "./Headers/Gato.h"
#include "./Headers/Perro.h"
#include "./Headers/Socio.h"
#include "./Headers/Consulta.h"
#include "./DataType/Fecha.h"

#include <string.h>
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <utility>
#include <Windows.h>
#include <conio.h>
#include <stdexcept>
#include <sstream>
#include <iosfwd> 
#include <cctype>
#include <cstdlib>

using namespace std;

const int MAX_SOCIOS = 50;

Socio* obtenerSocio(string ci);
void agregarSocio(string Nombre ,string Ci ,Fecha FechaIngreso);
void IngresarConsulta(string Ci,string Motivo,Fecha FechaConsulta);
void agregarPerroCliente(string Ci ,RazaPerro Raza , bool Vacuna, string Nombre ,Genero Gen, float Peso);
void agregarGatoCliente(string Ci,TipoPelo TPelo, string Nombre ,Genero Gen, float Peso);
void obtenerPerros(int cantMascotas,Socio* socio);
void obtenerGatos(int cantMascotas,Socio* socio);
void obtenerConsultas(int cantConsultas,Socio* socio);


Socio** Socios = new Socio* [MAX_SOCIOS];
int cantSocios = 0;
main (){
	string ci,nom,nomm,cons;
	int p,g,x,y,z,raza,tpelo,vacu;
	float peso;
	bool vac,loop;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	RazaPerro Raza;
	TipoPelo TPelo;
	Genero Gen;


	while (1){
	cin.clear();
	fflush(stdin);
	system("CLS");
	printf (
	"________________________________________________________________________________________________________________________\n"
	"|                   #     #                                                                 .-.               .-.      |\n"
	"|                   #     # ###### ##### ###### #####  # #    #   ##   #####  #   ##       (   `-._________.-'   )     |\n"
	"|                   #     # #        #   #      #    # # ##   #  #  #  #    # #  #  #       >=     _______     =<      |\n"
	"|                   #     # #####    #   #####  #    # # # #  # #    # #    # # #    #     (   ,-'`       `'-,   )     |\n"
	"|                    #   #  #        #   #      #####  # #  # # ###### #####  # ######      `-'               `-'      |\n"
	"|                     # #   #        #   #      #   #  # #   ## #    # #   #  # #    #                                 |\n"
	"|                      #    ######   #   ###### #    # # #    # #    # #    # # #    #                                 |\n"
	"|                #                 ######                                 ###                                          |\n"
	"|                #         ##      #     # #    # #       ####    ##       #  #    # ###### ###### #      # ######     |\n"
	"|                #        #  #     #     # #    # #      #    #  #  #      #  ##   # #      #      #      #     #      |\n"
	"|                #       #    #    ######  #    # #      #      #    #     #  # #  # #####  #####  #      #    #       |\n"
	"|                #       ######    #       #    # #      #  ### ######     #  #  # # #      #      #      #   #        |\n"
	"|                #       #    #    #       #    # #      #    # #    #     #  #   ## #      #      #      #  #         |\n"
	"|                ####### #    #    #        ####  ######  ####  #    #    ### #    # #      ###### ###### # ######     |\n"
	"|                                                                                                                      |\n"
	"|______________________________________________________________________________________________________________________|"
	"\n                                                Bienvenido.  Elija la opcion.\n");
	system("color F5");
	printf ("\n                                                 1)Registrar socio\n"
			"\n                        ~(^._.)                  2)Agregar mascota\n"
			"\n                                                 3)Ingresar consulta\n"
			"\n                                                 4)Ver consultas\n"
			"\n                                                 5)Eliminar Socio\n"
			"\n                                                 6)Ver Mascotas Socio\n"
			"\n                                                 0)  Salir \n"
			);
	int _getch();
	x=getch()-'0';
///////////////////////////////////////////////////////////////////////////////////////* Switch Inicio *////////////////////////////////////////////////////////////////////////////////////////////
		try{
		switch (x){
		cin.clear();
		fflush(stdin);
///////////////////////////////////////////////////////////////////////////////////////* Case 1 Inicio *////////////////////////////////////////////////////////////////////////////////////////////
			case 1:{
				system("CLS");
				cin.clear();
				fflush(stdin);
				
				cout<<"Ingrese su numero de cedula sin puntos o guion "<<endl;
				cin>>ci;
				cout<<"Ingrese Nombre"<<endl;
				cin>>nom;
				cout<<"Perfecto "<<nom<<" ahora los datos de tu Mascota "<<endl<<endl<<endl;
				
				cout<<"Ingrese el nombre de su mascota"<<endl;
				cin>>nomm;
				cout<<"Especifique el Genero de su Mascota"<<endl;
				cout<< "1 para Hembra - 2 para macho"<<endl;

				loop=0;

				//While Genero
				while(loop == 0){
				cin>>y;
					switch (y){

					case 1:
					Gen=hembra;
					loop=1;
					break;
					case 2:
					Gen=macho;
					loop=1;
					break;
					default:
					cout<<"Opcion incorrecta - Recuerde 1 para Hembra 2 para Macho "<<endl;
					break;
					}
				}
				//End While Genero
				cout<<"Ingrese el peso de su Mascota en Kilos"<<endl;
				cin>>peso;
				cout<<"Su Mascota es Perro o Gato?"<<endl;
				cout<<"1- Perro 2- Gato"<<endl;

				loop=0;

				//While Perro o Gato
				while(loop == 0) {
				cin>>z;
					switch (z){

					case 1:
					cout << "Guau" << endl;
					loop=1;
					break;
					case 2:
					cout<< "Miau" << endl;
					loop=1;
					break;
					default:
					cout<<"Opcion incorrecta - Recuerde 1 para Gato 2 para Perro "<<endl;
					break;
					}
				}
				//End While Perro o Gato
				system("CLS");

				//If Perro
				if(z == 1){

					cout<<"Especifique la Raza de su perro"<<endl;
					cout<< "1-Labrador"<<endl<<"2-Ovejero"<<endl<<"3-Bulldog"<<endl<<"4-Pitbull"<<endl<<"5-Collie"<<endl<<"6-Pekines"<<endl<<"7-Otro"<<endl;

					loop=0;

					while(loop == 0) {
					cin>>raza;
						switch (raza){

						case 1:
						Raza=labrador;
						loop=1;
						break;
						case 2:
						Raza=ovejero;
						loop=1;
						break;
						case 3:
						Raza=bulldog;
						loop=1;
						break;
						case 4:
						Raza=pitbull;
						loop=1;
						break;
				 		case 5:
						Raza=collie;
						loop=1;
						break;
						case 6:
						Raza=pekines;
						loop=1;
						break;
						case 7:
						Raza=otro;
						loop=1;
						break;
						default:
						cout<<" Opcion Incorrecta Recuerde "<<endl;
						cout<< "1-Labrador"<<endl<<"2-Ovejero"<<endl<<"3-Bulldog"<<endl<<"4-Pitbull"<<endl<<"5-Collie"<<endl<<"6-Pekines"<<endl<<"7-Otro"<<endl;
						break;
						}
					}
					cout<<"Cuenta con Vacuna?"<<endl;
					cout<<"1-No 2-Si"<<endl;

					loop=0;

					while(loop == 0) {
					cin>>vacu;
						switch (vacu){

						case 1:
						cout << "No" << endl;
						vac=0;
						loop=1;
						break;
						case 2:
						cout<< "Si" << endl;
						vac=1;
						loop=1;
						break;
						default:
						cout<<"Opcion incorrecta - Recuerde 1 No Tiene   2 Si tiene Vacuna "<<endl;
						break;
							}
					}
				int dia=timePtr->tm_mday;
				int mes=timePtr->tm_mon;
				int anio=timePtr->tm_year + 1900;


				agregarSocio(nom,ci,Fecha(dia,mes,anio));
				agregarPerroCliente(ci,Raza,vac,nomm,Gen,peso);
				}
				//EndIf Perro

				//If Gato
				if(z == 2){
				cout<<"Que tipo de pelo tiene su Gato"<<endl;
				cout<<"1-Corto 2-Mediano 3-Largo"<<endl;

				loop=0;

					while(loop == 0) {
					cin>>tpelo;

						switch (tpelo){

						case 1:
						TPelo=corto;
						loop=1;
						break;
						case 2:
						TPelo=mediano;
						loop=1;
						break;
						case 3:
						TPelo=largo;
						loop=1;
						break;
						default:
						cout<<"Opcion Incorrecta - Recuerde 1 para corto 2 para mediano 3 para largo"<<endl;
						break;
							}
					}

				int dia=timePtr->tm_mday;
				int mes=timePtr->tm_mon;
				int anio=timePtr->tm_year + 1900;


				agregarSocio(nom,ci,Fecha(dia,mes,anio));
				agregarGatoCliente(ci ,TPelo ,nomm,Gen,peso);
				}
				//EndIf Gato
				cout<<endl<<"Registrado"<<endl;
				Sleep(1000);
			break;
			}
///////////////////////////////////////////////////////////////////////////////////////* Case 2 Inicio *////////////////////////////////////////////////////////////////////////////////////////////
			case 2:{
				system("CLS");
				cin.clear();
				fflush(stdin);

				cout<<"Ingrese Su Cedula"<<endl;
				cin>>ci;
				
				cout<<"Ingrese el nombre de su mascota"<<endl;
				cin>>nomm;
				cout<<"Especifique el Genero de su Mascota"<<endl;
				cout<< "1 para Hembra - 2 para macho"<<endl;

				loop=0;

				//While Genero
				while(loop == 0){
				cin>>y;
					switch (y){

					case 1:
					Gen=hembra;
					loop=1;
					break;
					case 2:
					Gen=macho;
					loop=1;
					break;
					default:
					cout<<"Opcion incorrecta - Recuerde 1 para Hembra 2 para Macho "<<endl;
					break;
					}
				}
				//End While Genero
				cout<<"Ingrese el peso de su Mascota en Kilos"<<endl;
				cin>>peso;
				cout<<"Su Mascota es Perro o Gato?"<<endl;
				cout<<"1- Perro 2- Gato"<<endl;

				loop=0;

				//While Perro o Gato
				while(loop == 0) {
				cin>>z;
					switch (z){

					case 1:
					cout << "Guau" << endl;
					loop=1;
					break;
					case 2:
					cout<< "Miau" << endl;
					loop=1;
					break;
					default:
					cout<<"Opcion incorrecta - Recuerde 1 para Gato 2 para Perro "<<endl;
					break;
					}
				}
				//End While Perro o Gato
				system("CLS");

				//If Perro
				if(z == 1){

					cout<<"Especifique la Raza de su perro"<<endl;
					cout<< "1-Labrador"<<endl<<"2-Ovejero"<<endl<<"3-Bulldog"<<endl<<"4-Pitbull"<<endl<<"5-Collie"<<endl<<"6-Pekines"<<endl<<"7-Otro"<<endl;

					loop=0;

					while(loop == 0) {
					cin>>raza;
						switch (raza){

						case 1:
						Raza=labrador;
						loop=1;
						break;
						case 2:
						Raza=ovejero;
						loop=1;
						break;
						case 3:
						Raza=bulldog;
						loop=1;
						break;
						case 4:
						Raza=pitbull;
						loop=1;
						break;
				 		case 5:
						Raza=collie;
						loop=1;
						break;
						case 6:
						Raza=pekines;
						loop=1;
						break;
						case 7:
						Raza=otro;
						loop=1;
						break;
						default:
						cout<<" Opcion Incorrecta Recuerde "<<endl;
						cout<< "1-Labrador"<<endl<<"2-Ovejero"<<endl<<"3-Bulldog"<<endl<<"4-Pitbull"<<endl<<"5-Collie"<<endl<<"6-Pekines"<<endl<<"7-Otro"<<endl;
						break;
						}
					}
					cout<<"Cuenta con Vacuna?"<<endl;
					cout<<"1-No 2-Si"<<endl;

					loop=0;

					while(loop == 0) {
					cin>>vacu;
						switch (vacu){

						case 1:
						cout << "No" << endl;
						vac=0;
						loop=1;
						break;
						case 2:
						cout<< "Si" << endl;
						vac=1;
						loop=1;
						break;
						default:
						cout<<"Opcion incorrecta - Recuerde 1 No Tiene   2 Si tiene Vacuna "<<endl;
						break;
							}
					}
				agregarPerroCliente(ci,Raza,vac,nomm,Gen,peso);
				}
				//EndIf Perro

				//If Gato
				if(z == 2){
				cout<<"Que tipo de pelo tiene su Gato"<<endl;
				cout<<"1-Corto 2-Mediano 3-Largo"<<endl;

				loop=0;

					while(loop == 0) {
					cin>>tpelo;

						switch (tpelo){

						case 1:
						TPelo=corto;
						loop=1;
						break;
						case 2:
						TPelo=mediano;
						loop=1;
						break;
						case 3:
						TPelo=largo;
						loop=1;
						break;
						default:
						cout<<"Opcion Incorrecta - Recuerde 1 para corto 2 para mediano 3 para largo"<<endl;
						break;
							}
					}
				agregarGatoCliente(ci ,TPelo ,nomm,Gen,peso);
				}
				//EndIf Gato
				cout<<endl<<"Registrado"<<endl;
				Sleep(1000);
			break;
			}
///////////////////////////////////////////////////////////////////////////////////////* Case 3 Inicio *////////////////////////////////////////////////////////////////////////////////////////////
			case 3:{
				system("CLS");
				fflush(stdin);

				cout<<"Ingrese Su Cedula"<<endl;
				cin>>ci;

				cout<<"Ingrese el Motivo de su Consulta"<<endl;
				cin>>cons;
				
				cout<<"Ingresando Consulta"<<endl;

				int dia=timePtr->tm_mday;
				int mes=timePtr->tm_mon;
				int anio=timePtr->tm_year + 1900;

				IngresarConsulta(ci,cons,Fecha(dia,mes,anio));

				Sleep(1000);
			break;
			}
///////////////////////////////////////////////////////////////////////////////////////* Case 4 Inicio *////////////////////////////////////////////////////////////////////////////////////////////
			case 4:{
				system("CLS");
				cin.clear();
				fflush(stdin);
				////////////////////////////////////////// Hay que SobreCargar el  < menor a fecha !!!! //////////////////////////////////////
				cout<<"Ingrese Socio"<<endl;
				cin>>ci;
				Socio* socio = obtenerSocio(ci);
				if (socio == NULL) { throw std::invalid_argument("Socio inexistente"); }

    			int cantConsultas =socio->getCantC();
				obtenerConsultas(cantConsultas,socio);
				Sleep(1000);
			break;
			}
///////////////////////////////////////////////////////////////////////////////////////* Case 5 Inicio *////////////////////////////////////////////////////////////////////////////////////////////
			case 5:{
				system("CLS");
				cin.clear();
				fflush(stdin);
				cout<<"Ingrese Socio a Eliminar"<<endl;
				cin>>ci;
				Socio* socio = obtenerSocio(ci);
				if (socio == NULL) { throw std::invalid_argument("Socio inexistente"); }
				string Ci="***";
				socio->setCi(Ci);
				socio->~Socio();
				Sleep(1000);
				
				break;
			}
///////////////////////////////////////////////////////////////////////////////////////* Case 6 Inicio *////////////////////////////////////////////////////////////////////////////////////////////
			case 6:{
				system("CLS");
				cin.clear();
				fflush(stdin);

				cout<<"Ingrese Socio"<<endl;
				cin>>ci;
				Socio* socio = obtenerSocio(ci);
				if (socio == NULL) { throw std::invalid_argument("Socio inexistente"); }

    			int cantPerros =socio->getCantP();
    			int cantGatos =socio->getCantG();

				obtenerGatos(cantGatos ,socio);
				obtenerPerros(cantPerros ,socio);
				Sleep(1000);
				break;
			}
///////////////////////////////////////////////////////////////////////////////////////* Case 0 Inicio *////////////////////////////////////////////////////////////////////////////////////////////
			case 0:{
			
				system("CLS");
				fflush(stdin);
				printf("Gracias por elegir nuestra Veterinaria\n");
				Sleep(3000);
			return 1;
			}
///////////////////////////////////////////////////////////////////////////////////////* Default Inicio *////////////////////////////////////////////////////////////////////////////////////////////
			default :{
				system("CLS");
				cin.clear();
				fflush(stdin);
				printf("\n\n\n\n\n\n\n                 Dato Curioso - Los Dinosaurios nunca fueron al Veterinario , Mira como terminaron! \n");
				Sleep(3000);
			break;
			}
		}
		//Switch Menu
        }
        //Try Menu
		catch(std::invalid_argument &ia) {
			system("CLS");
			cout << "Error: " << ia.what() << endl;
			Sleep(3000);
		}
	}
	//While Menu
}
//Main


template <typename T> string tostr(const T& t) {
	std::ostringstream os;
	os<<t;
	return os.str();
}

void agregarSocio(string Nombre ,string Ci ,Fecha FechaIngreso) {
    if (cantSocios == MAX_SOCIOS) {
        throw std::invalid_argument("No se pueden agregar mas Socios");
    }

    Socio* socio = obtenerSocio(Ci);

    if (socio != NULL) { throw std::invalid_argument("Ya existe un socio con la ci ingresada"); }

    Socios[cantSocios] = new Socio(Nombre,Ci,FechaIngreso);
    cantSocios++;
}

Socio* obtenerSocio(string ci) {
    for(int i = 0; i < cantSocios; i++) {
        if (Socios[i]->getCi() == ci) {
            return Socios[i];
        }
    }
    return NULL;
}

void obtenerConsultas(int cantConsultas,Socio* socio) {
	int c=0;

    for(c; c < cantConsultas; c++) {
	    Consulta** MisC=socio->getConsultas();
		Consulta* *Misc=MisC;


    cout<< string("\n")<< Misc[c]->getMotivo() << string("\n");

	Sleep(4500);
        }
}

void obtenerGatos(int cantGatos,Socio* socio) {
	int g=0;

    for(g; g < cantGatos; g++) {
	    Gato** MisG=socio->getGatos();
		Gato* *Misg=MisG;
		
	string Geni,tpelo;
	float pes,rac;

	pes = Misg[g]->getPeso();
	rac = pes * 0.015;

	string spes = tostr(pes);
	string srac = tostr(rac);



	if (Misg[g]->getGenero() == macho)
		Geni = "Macho";
	if (Misg[g]->getGenero()== hembra)
		Geni = "Hembra";

	if (Misg[g]->getTipoPelo() == corto)
		tpelo = "Corto";
	if (Misg[g]->getTipoPelo() == mediano)
		tpelo = "Mediano";
	if (Misg[g]->getTipoPelo() == largo)
		tpelo = "Largo";


    cout<< string("\n")<< Misg[g]->getNombre() << string("\n");
    cout<< Geni << string("\n");
    cout<< spes<<string("Kg")<< string("\n");
	cout<<string("Su Mascota tiene Pelo ")<<tpelo<< string("\n");
	cout<< string("Racion Diaria ")<< srac << string(" Kg")<< string("\n")<< string("\n");
	Sleep(4500);
        }
}
void obtenerPerros(int cantPerros,Socio* socio) {
	int m=0;

    for(m; m < cantPerros; m++) {
	    Perro** MisP=socio->getPerros();
		Perro* *Misp=MisP;

	string Geni,vacu;
	float pes,rac;

	pes = Misp[m]->getPeso();
	rac = pes * 0.025;

	string spes = tostr(pes);
	string srac = tostr(rac);


	if (Misp[m]->getGenero() == macho)
		Geni = "Macho";
	if (Misp[m]->getGenero() == hembra)
		Geni = "Hembra";

	if (Misp[m]->getVacunaCachorro() == 0)
		vacu = "no";
	if (Misp[m]->getVacunaCachorro() == 1)
		vacu = "si";

    cout<< string("\n")<< Misp[m]->getNombre() << string("\n");
    cout<< Geni << string("\n");
    cout<< spes<<string("Kg")<< string("\n");
    cout<<string("Su Mascota ")<<vacu<<string(" cuenta con Vacuna")<<string("\n");
	cout<< string("Racion Diaria ")<< srac << string(" Kg")<< string("\n")<< string("\n");
	Sleep(4500);
        }
}
    
void agregarGatoCliente(string Ci,TipoPelo TPelo, string Nombre ,Genero Gen, float Peso){
	Socio* socio = obtenerSocio(Ci);

    if (socio == NULL) { throw std::invalid_argument("Socio inexistente"); }

    Gato* M =new Gato(TPelo);
	M->setNombre(Nombre);
	M->setPeso(Peso);
	M->setGenero(Gen);
    socio->agregarGato(M);
}

void agregarPerroCliente(string Ci ,RazaPerro Raza , bool Vacuna, string Nombre ,Genero Gen, float Peso){
	Socio* socio = obtenerSocio(Ci);

    if (socio == NULL) { throw std::invalid_argument("Socio inexistente"); }

    Perro* M =new Perro(Raza,Vacuna);
	M->setNombre(Nombre);
	M->setPeso(Peso);
	M->setGenero(Gen);
    socio->agregarPerro(M);
}

void IngresarConsulta(string Ci,string Motivo,Fecha FechaConsulta){
	Socio* socio = obtenerSocio(Ci);

   if (socio == NULL) { throw std::invalid_argument("Socio inexistente"); }
    Consulta* C = new Consulta(Motivo,FechaConsulta);
    socio->agregarConsulta(C);
}

