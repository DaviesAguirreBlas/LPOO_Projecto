#pragma once
#include "frmAreaDeAnimales.h"
namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMenuIngreso
	/// </summary>
	public ref class frmMenuIngreso : public System::Windows::Forms::Form
	{
	public:
		frmMenuIngreso(void)
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
		~frmMenuIngreso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(464, 70);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(273, 279);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Almacen";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(70, 217);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(199, 132);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Area de animales";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMenuIngreso::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 70);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 124);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Personal";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// frmMenuIngreso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 440);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmMenuIngreso";
			this->Text = L"frmMenuIngreso";
			this->Load += gcnew System::EventHandler(this, &frmMenuIngreso::frmMenuIngreso_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMenuIngreso_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAreaDeAnimales^ ventanaAreaDeAnimales = gcnew frmAreaDeAnimales();
		ventanaAreaDeAnimales->Show();
	}
	};
}
