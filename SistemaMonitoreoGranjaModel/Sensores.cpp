#include "Sensores.h"
using namespace SistemaMonitoreoGranjaModel;
Sensores::Sensores()
{
    throw gcnew System::NotImplementedException();
}

Sensores::Sensores(String^ tipoSensor, String^ ID, String^ marca, String^ unidades)
{
    this->tipoSensor = tipoSensor;
    this->ID = ID;
    this->marca = marca;
    this->unidades = unidades;
}


