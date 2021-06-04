#pragma once
#include "Usuario.h"
#include "Tarea.h"
namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Personal {
	private:

		String^ horario;
		String^ tareas;
		String^ funcion;
		String^ asistencia;
		String^ nombre;
		Tarea^ objTarea;
		Usuario^ objUsuario;
	public:
		Personal();
		Personal(String^ horario, String^ tarea, String^ funcion, String^ asistencia, String^ nombre, Usuario^ objUsuario, Tarea^ objTarea);


	};
}