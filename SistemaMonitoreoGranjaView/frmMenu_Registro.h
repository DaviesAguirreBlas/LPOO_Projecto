#pragma once

#include "frmMant_Farmacos.h"
#include "frmMant_Alimentos.h"
#include "frmpersonal.h"
#include "frmMant_Herramientas.h"
namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMenu_Registro
	/// </summary>
	public ref class frmMenu_Registro : public System::Windows::Forms::Form
	{
	public:
		frmMenu_Registro(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMenu_Registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(79, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Alimentos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMenu_Registro::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(79, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 62);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Farmacos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMenu_Registro::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 103);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 62);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Herramientas";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMenu_Registro::button3_Click);
			// 
			// frmMenu_Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 309);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmMenu_Registro";
			this->Text = L"frmMenu_Registro";
			this->Load += gcnew System::EventHandler(this, &frmMenu_Registro::frmMenu_Registro_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMant_Alimentos^ ventanaMant_Alimentos = gcnew frmMant_Alimentos();
		this->Hide();
		ventanaMant_Alimentos->ShowDialog();
		this->Show();
		

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMant_Herramientas^ ventanaMant_Herramientas = gcnew frmMant_Herramientas();
		this->Hide();
		ventanaMant_Herramientas-> ShowDialog();
		this->Show();
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMant_Farmacos^ ventanaMant_Farmacos = gcnew frmMant_Farmacos();
		this->Hide();
		ventanaMant_Farmacos->ShowDialog();
		this->Show();

	}
	private: System::Void frmMenu_Registro_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
