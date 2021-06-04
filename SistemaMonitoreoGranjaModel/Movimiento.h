#pragma once
#include "AreaDeAnimales.h"
#include "Almacen.h"
#include "Alimentos.h"
#include "Farmacos.h"
#include "Produccion.h"
#include "Herramientas.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Movimiento {
		/*Atributos o Datos*/
	private:
		String^ cantidad;
		String^ tipo_de_movimiento;
		String^ elementos;
		String^ hora;
		AreaDeAnimales^ objAreaDeAnimales;
		Almacen^ objAlmacen;
		Alimentos^ objAlimentos;
		Farmacos^ objFarmacos;
		Produccion^ objProduccion;
		Herramientas^ objHerramientas;
		/*Métodos o Funciones*/
	public:
		Movimiento(String^ cantidad, String^ tipo_de_movimiento, String^ elementos, String^ hora, AreaDeAnimales^ objAreaDeAnimales, Almacen^ objAlmacen, Alimentos^ objAlimentos, Produccion^ objProduccion, Herramientas^ objHerramientas);
		Movimiento();


	};
}