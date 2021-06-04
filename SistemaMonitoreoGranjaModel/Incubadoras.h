#pragma once

#include "Sensores.h"
#include "AreaDeAnimales.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System::Collections::Generic;
	using namespace System;

	public ref class Incubadoras :AreaDeAnimales {
	private:
		int temperatura;
		int humedad;
		List<Sensores^>^ List_Sensores;

	public:
		Incubadoras(int temperatura, int humedad);

	};
}