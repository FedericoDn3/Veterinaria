#include "../Headers/Consulta.h"

Consulta::Consulta(string Motivo , Fecha FechaConsulta)
{
    this->Motivo = Motivo;
    this->FechaConsulta=FechaConsulta;
}

Consulta::setMotivo(string Motivo)
{
	this->Motivo=Motivo;
}


string Consulta::getMotivo()
{
    return this->Motivo;
}

Consulta::setFecha(Fecha FechaConsulta)
{
    this->FechaConsulta=FechaConsulta;
}

Fecha Consulta::getFecha()
{
	return this->FechaConsulta;
}

Consulta::~Consulta()
{
}
