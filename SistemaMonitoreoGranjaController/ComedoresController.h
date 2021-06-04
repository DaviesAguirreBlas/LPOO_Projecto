#pragma once

namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class ComedoresController {
	private:
		List<Comederos^>^ listaComederos;

	public:
		ComedoresController();
		Comederos^ buscarComedero(String^ Nombre);
		/*List<Comederos^>^ buscarAlumnosxNivelxGradoxSeccion(String^ nivel, int grado, String^ seccion);
		int verificarSiAlumnoPertencePartidoPolitico(String^ codigoAlumno);
	*/
	};

}