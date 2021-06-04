#pragma once

namespace SistemaMonitoreoGranjaModel {
	using namespace System;
	public ref class Farmacos {

		/*Atributos o Datos*/
	private:
		String^ ID;
		String^ nombre;
		int cantidad;
		String^ fechaVencimiento;
		String^ descripcion;

		/*Metrodos y Funciones*/
	public:

		Farmacos();
		Farmacos(String^ ID, String^ nombre, int cantidad, String^ fechaVencimiento, String^ descripcion);

	};
}