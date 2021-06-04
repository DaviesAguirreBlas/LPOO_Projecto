#pragma once

namespace SistemaMonitoreoGranjaController {

	using namespace System::Collections::Generic;
	using namespace SistemaMonitoreoGranjaModel;
	using namespace System;

	public ref class SensoresController {
	private:
		List<Sensores^>^ listaSensores;

	public:
		SensoresController();
		//Sensores^ buscarAlumno(String^ codigoAlumno);
		/*List<Sensores^>^ buscarAlumnosxNivelxGradoxSeccion(String^ nivel, int grado, String^ seccion);
		int verificarSiAlumnoPertencePartidoPolitico(String^ codigoAlumno);
	*/};

}