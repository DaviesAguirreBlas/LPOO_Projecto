#pragma once

namespace SistemaMonitoreoGranjaModel {


	using namespace System;

	public ref class Alimentos {
		/*Atributos o Datos*/

	private:
		String^ nombre;
		String^ descripcion;
		String^ fechaVencimiento;
		String^ presentacion;
		String^ unidadMedida;


		/*Métodos o Funciones*/
	public:
		Alimentos();
		Alimentos(String^ nombre, String^ descripcion, String^ fechaVencimiento, String^ presentacion, String^ unidadMedida);


	};
}