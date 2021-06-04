#pragma once
namespace SistemaMonitoreoGranjaModel {
	using namespace System;
	public ref class Produccion {

		/*Atributos o Datos*/
	private:
		String^ tipo_Producto;
		int cantidad;
		String^ calidad;
		int precio;

		/*Metrodos y Funciones*/
	public:

		Produccion();
		Produccion(String^ tipo_Producto, int cantidad, String^ calidad, int precio);

	};
}