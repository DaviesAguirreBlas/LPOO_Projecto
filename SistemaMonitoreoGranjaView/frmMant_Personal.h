#pragma once
#include "frmRegistra_Personal.h"
#include "frmRegistra_Tarea.h"
namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMant_Personal
	/// </summary>
	public ref class frmMant_Personal : public System::Windows::Forms::Form
	{
	public:
		frmMant_Personal(void)
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
		~frmMant_Personal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;

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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(307, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Tarea";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMant_Personal::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(103, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 77);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Personal";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMant_Personal::button2_Click);
			// 
			// frmMant_Personal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 323);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmMant_Personal";
			this->Text = L"frmMant_Personal";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		frmRegistra_Personal^ ventanaRegistra_Personal = gcnew frmRegistra_Personal();
		ventanaRegistra_Personal->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmRegistra_Tarea^ ventanaRegistra_Tarea = gcnew frmRegistra_Tarea();
		ventanaRegistra_Tarea->Show();
	}
	};
}
