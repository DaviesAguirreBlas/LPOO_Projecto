#pragma once

#include "Alimentos.h"
#include "Sensores.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class Comederos {
		/*Atributos o Datos*/
	private:
		int cap_comida;
		int cap_agua;
		int cap_proteinas;
		String^ hora_llenado;
		String^ nombre;
		Alimentos^ objAlimentos;
		List<Sensores^>^ List_Sensores;
		/*Métodos o Funciones*/
	public:
		Comederos(int cap_comida, int cap_agua, int cap_proteinas, String^ hora_llenado, String^ nombre);

	};
}
