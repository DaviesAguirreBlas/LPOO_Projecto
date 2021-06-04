#pragma once

namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Herramientas {
	private:

		String^ tipo;
		String^ funcionalidad;
		String^ cantidad;


	public:

		Herramientas();

		Herramientas(String^ tipo, String^ funcionalidad, String^ cantidad);


	};
}