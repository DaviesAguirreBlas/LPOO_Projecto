#include "ComedoresController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO;
ComedoresController::ComedoresController() {
	this->listaComederos = gcnew List<Comederos^>();
}

Comederos^ ComedoresController::buscarComedero(String^ nombre) {
	Comederos^ objComederoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Comederos.txt");
	String^ separadores = ";";
	for each (String ^ lineaComedero in lineas) {
		array<String^>^ palabras = lineaComedero->Split(separadores->ToCharArray());
		int cap_comida = Convert::ToInt32(palabras[0]);
		int cap_agua = Convert::ToInt32(palabras[1]);
		int cap_proteinas = Convert::ToInt32(palabras[2]);
		String^ hora_llenado = palabras[3];
		String^ id = palabras[4];
		if (id == nombre) {
			objComederoEncontrado = gcnew Comederos(cap_comida,cap_agua,cap_proteinas,hora_llenado,id);
			break;
		}
	}
	return objComederoEncontrado;
}