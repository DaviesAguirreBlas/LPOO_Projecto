#pragma once
namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class AreasDeAnimalesController {
	private:
		List<AreaDeAnimales^>^ listaAreaDeAnimales;


	public:
		AreasDeAnimalesController();

		void CargarAreasDesdeArchivo();
		List<Comederos^>^ BuscarComederosArea(String^ tipo_animal);
		int ObtenerCantidadAreas();
		AreaDeAnimales^ ObtenerAreaLista(int indice);
		/*void GuardarPartidoPoliticoEnArchivo(AreaDeAnimales^ objArea);*/
	};
}