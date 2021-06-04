#include "AreasDeAnimalesController.h"
#include "SensoresController.h"
#include "ComedoresController.h"

using namespace SistemaMonitoreoGranjaController;
using namespace System;
using namespace System::IO; /*Este es el namespace que permite manipular las clases y métodos para manejo de archivos de texto*/

AreasDeAnimalesController::AreasDeAnimalesController() {
	this->listaAreaDeAnimales = gcnew List<AreaDeAnimales^>();
}

void AreasDeAnimalesController::CargarAreasDesdeArchivo() {
	array<String^>^ lineas = File::ReadAllLines("areasDeAnimales.txt");
	String^ separadores = ";";
	for each (String ^ lineaAreas in lineas) {
		array<String^>^ palabras = lineaAreas->Split(separadores->ToCharArray());
		String^ raza = palabras[0];
		String^ color = palabras[1];
		String^ tipo_animal = palabras[2];
		String^ sexo = palabras[3];
		String^ estado_salud = palabras[4];
		int peso = Convert::ToInt32(palabras[5]);
		int edad = Convert::ToInt32(palabras[6]);
		int cantidad = Convert::ToInt32(palabras[7]);
		AreaDeAnimales^ objArea = gcnew AreaDeAnimales(raza, color, tipo_animal,sexo,estado_salud,peso, edad, cantidad);

		List<Comederos^>^ listComederosArea = BuscarComederosArea(tipo_animal);
		objArea->listaComederos = listComederosArea;
		this->listaAreaDeAnimales->Add(objArea);
	}
}
List<Comederos^>^ AreasDeAnimalesController::BuscarComederosArea(String^ tipo_animal) {
	List<Comederos^>^ listaComederosEncontrados = gcnew List<Comederos^>();
	array<String^>^ lineas = File::ReadAllLines("SensoresEnComederoEnArea.txt");
	String^ separadores = ";";
	for each (String ^ lineaComederosArea in lineas) {
		array<String^>^ palabras = lineaComederosArea->Split(separadores->ToCharArray());
		String^ ID_Sensor = palabras[0];
		String^ Comedero = palabras[1];
		String^ AreaEncontrada = palabras[2];
		if (AreaEncontrada == tipo_animal) {
			ComedoresController^ gestorAlumnoController = gcnew ComedoresController();
			Comederos^ objComedero = gestorAlumnoController->buscarComedero(Comedero);
			listaComederosEncontrados->Add(objComedero); //agregar nuevo elemeto a la lista
		}
	}
	return listaComederosEncontrados;
}
int AreasDeAnimalesController::ObtenerCantidadAreas() {
	return this->listaAreaDeAnimales->Count;
}
AreaDeAnimales^ AreasDeAnimalesController::ObtenerAreaLista(int indice) {
	return this->listaAreaDeAnimales[indice];
}

