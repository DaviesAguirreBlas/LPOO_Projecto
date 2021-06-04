#pragma once
#include "Medicion.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Sensores {
		/*Atributos o Datos*/
	private:
		String^ tipoSensor;
		String^ ID;
		String^ marca;
		String^ unidades;
		Medicion^ objMedicion;
		/*Métodos o Funciones*/
	public:
		Sensores();
		Sensores(String^ tipoSensor, String^ ID, String^ marca, String^ unidades);

	};
}