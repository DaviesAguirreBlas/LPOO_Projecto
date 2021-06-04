#pragma once
#pragma once

#include "Farmacos.h"
#include "Alimentos.h"
#include "Produccion.h"
#include "Herramientas.h"

namespace SistemaMonitoreoGranjaModel {
	using namespace System::Collections::Generic;
	using namespace System;
	public ref class Almacen {

		/*Atributos o Datos*/
	private:
		String^ elemento;
		String^ fecha_lote;
		int cantidad;
		String^ estado;
		String^ zona;
		List< Farmacos^>^ List_Farmacos;
		List < Alimentos^>^ List_Alimentos;
		List < Produccion^>^ List_Produccion;
		List < Herramientas^>^ List_Herramientas;

		/*Metrodos y Funciones*/

	public:

		Almacen();
		Almacen(String^ elemento, String^ fecha_lote, int cantidad, String^ estado, String^ zona,
			List< Farmacos^>^ List_Farmacos, List < Alimentos^>^ List_Alimentos, List < Produccion^>^ List_Produccion, List < Herramientas^>^ List_Herramientas);

	};
}