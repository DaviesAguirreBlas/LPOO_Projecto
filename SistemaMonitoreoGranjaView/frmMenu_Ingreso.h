#pragma once
#include "frmMant_Almacen.h"
#include"frmAreaDeAnimales.h"
#include "frmMant_Elementos_Almacen.h"
#include "frmMantAreaDeAnimales.h"
#include "frmMant_Personal.h"
#include "frmMantSensores.h"
#include "frmMant_Herramientas.h"
#include "frmMant_Farmacos.h"
#include "frmMantAlimentos.h"
#include "frmMantComederos.h"

namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMenu_Ingreso
	/// </summary>
	public ref class frmMenu_Ingreso : public System::Windows::Forms::Form
	{
	public:
		frmMenu_Ingreso(void)
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
		~frmMenu_Ingreso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areaDeAnimalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ almacenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personalToolStripMenuItem;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ToolStripMenuItem^ sensoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ herramientasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ farmacosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ comederosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alimentosToolStripMenuItem;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	protected:


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->areaDeAnimalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sensoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->herramientasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->farmacosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comederosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alimentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(88, 74);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Personal";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(88, 269);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(193, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Area Animales";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(88, 175);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(193, 65);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Almacen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientosToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(770, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->areaDeAnimalesToolStripMenuItem,
					this->almacenToolStripMenuItem, this->personalToolStripMenuItem, this->sensoresToolStripMenuItem, this->herramientasToolStripMenuItem,
					this->farmacosToolStripMenuItem, this->comederosToolStripMenuItem, this->alimentosToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			// 
			// areaDeAnimalesToolStripMenuItem
			// 
			this->areaDeAnimalesToolStripMenuItem->Name = L"areaDeAnimalesToolStripMenuItem";
			this->areaDeAnimalesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->areaDeAnimalesToolStripMenuItem->Text = L"Area de Animales";
			this->areaDeAnimalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::areaDeAnimalesToolStripMenuItem_Click);
			// 
			// almacenToolStripMenuItem
			// 
			this->almacenToolStripMenuItem->Name = L"almacenToolStripMenuItem";
			this->almacenToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->almacenToolStripMenuItem->Text = L"Almacen";
			this->almacenToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::almacenToolStripMenuItem_Click);
			// 
			// personalToolStripMenuItem
			// 
			this->personalToolStripMenuItem->Name = L"personalToolStripMenuItem";
			this->personalToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->personalToolStripMenuItem->Text = L"Personal";
			this->personalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::personalToolStripMenuItem_Click);
			// 
			// sensoresToolStripMenuItem
			// 
			this->sensoresToolStripMenuItem->Name = L"sensoresToolStripMenuItem";
			this->sensoresToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->sensoresToolStripMenuItem->Text = L"Sensores";
			this->sensoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::sensoresToolStripMenuItem_Click);
			// 
			// herramientasToolStripMenuItem
			// 
			this->herramientasToolStripMenuItem->Name = L"herramientasToolStripMenuItem";
			this->herramientasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->herramientasToolStripMenuItem->Text = L"Herramientas";
			this->herramientasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::herramientasToolStripMenuItem_Click);
			// 
			// farmacosToolStripMenuItem
			// 
			this->farmacosToolStripMenuItem->Name = L"farmacosToolStripMenuItem";
			this->farmacosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->farmacosToolStripMenuItem->Text = L"Farmacos";
			this->farmacosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::farmacosToolStripMenuItem_Click);
			// 
			// comederosToolStripMenuItem
			// 
			this->comederosToolStripMenuItem->Name = L"comederosToolStripMenuItem";
			this->comederosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->comederosToolStripMenuItem->Text = L"Comederos";
			this->comederosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::comederosToolStripMenuItem_Click);
			// 
			// alimentosToolStripMenuItem
			// 
			this->alimentosToolStripMenuItem->Name = L"alimentosToolStripMenuItem";
			this->alimentosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->alimentosToolStripMenuItem->Text = L"Alimentos";
			this->alimentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::alimentosToolStripMenuItem_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(470, 74);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(193, 65);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Sensores";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(470, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(193, 65);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Herramientas";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(470, 269);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(193, 65);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Farmacos";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(88, 361);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(193, 65);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Comederos";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(470, 361);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(193, 65);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Alimentos";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmMenu_Ingreso::button8_Click);
			// 
			// frmMenu_Ingreso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 548);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"frmMenu_Ingreso";
			this->Text = L"frmMenu_Ingreso";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMant_Elementos_Almacen^ ventanaMant_Elementos_Almacen = gcnew frmMant_Elementos_Almacen();
		ventanaMant_Elementos_Almacen->Show();
		//this->Hide();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		frmpersonal^ ventanaPersonal = gcnew frmpersonal();
		ventanaPersonal->Show();
		//this->Hide();

	}
	private: System::Void areaDeAnimalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantAreaDeAnimales^ ventanaMantAreaDeAnimales = gcnew frmMantAreaDeAnimales();
		ventanaMantAreaDeAnimales->Show();
	}
private: System::Void almacenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMant_Almacen^ ventanaMant_Almacen = gcnew frmMant_Almacen();
	ventanaMant_Almacen->Show();
	//this->Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	frmAreaDeAnimales^ ventanaAreaDeAnimales = gcnew frmAreaDeAnimales();
	ventanaAreaDeAnimales->Show();
}
private: System::Void personalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMant_Personal^ ventanaMant_Personal = gcnew frmMant_Personal();
	ventanaMant_Personal->Show();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantSensores^ ventana = gcnew frmMantSensores();
	ventana->Show();
}
private: System::Void sensoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantSensores^ ventana = gcnew frmMantSensores();
	ventana->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMant_Herramientas^ ventana = gcnew frmMant_Herramientas();
	ventana->Show();
}
private: System::Void herramientasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMant_Herramientas^ ventana = gcnew frmMant_Herramientas();
	ventana->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMant_Farmacos^ ventana = gcnew frmMant_Farmacos();
	ventana->Show();
}
private: System::Void farmacosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMant_Farmacos^ ventana = gcnew frmMant_Farmacos();
	ventana->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantComederos^ ventana = gcnew frmMantComederos();
	ventana->Show();
}
private: System::Void comederosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantComederos^ ventana = gcnew frmMantComederos();
	ventana->Show();
}

private: System::Void alimentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMant_Alimentos^ ventana = gcnew frmMant_Alimentos();
	ventana->Show();

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMant_Alimentos^ ventana = gcnew frmMant_Alimentos();
	ventana->Show();
}
};
}
