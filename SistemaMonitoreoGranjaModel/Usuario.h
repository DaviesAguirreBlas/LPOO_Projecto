#pragma once

namespace SistemaMonitoreoGranjaModel {
	using namespace System;

	public ref class Usuario {
	private:

		String^ ID;
		String^ contraseņa;



	public:
		Usuario();
		Usuario(String^ ID, String^ contraseņa);
	};
}