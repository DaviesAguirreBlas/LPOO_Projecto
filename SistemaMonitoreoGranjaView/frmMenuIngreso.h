#pragma once

#include "frmMantAreaDeAnimales.h"
#include "frmMant_Almacen.h"
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
	private: System::Windows::Forms::Button^ Botn_Personal;
	protected:

	private: System::Windows::Forms::Button^ Boton_AreaAnimal;
	protected:

	private: System::Windows::Forms::Button^ Boton_Almacen;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ almacenesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areaDeAnimalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personalToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ almacenesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ areaDeAnimalesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ personalToolStripMenuItem1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Botn_Personal = (gcnew System::Windows::Forms::Button());
			this->Boton_AreaAnimal = (gcnew System::Windows::Forms::Button());
			this->Boton_Almacen = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->areaDeAnimalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->areaDeAnimalesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personalToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Botn_Personal
			// 
			this->Botn_Personal->BackColor = System::Drawing::Color::Tomato;
			this->Botn_Personal->Location = System::Drawing::Point(82, 90);
			this->Botn_Personal->Name = L"Botn_Personal";
			this->Botn_Personal->Size = System::Drawing::Size(173, 101);
			this->Botn_Personal->TabIndex = 0;
			this->Botn_Personal->Text = L"Personal";
			this->Botn_Personal->UseVisualStyleBackColor = false;
			this->Botn_Personal->Click += gcnew System::EventHandler(this, &frmMenuIngreso::Botn_Personal_Click);
			// 
			// Boton_AreaAnimal
			// 
			this->Boton_AreaAnimal->BackColor = System::Drawing::Color::Tomato;
			this->Boton_AreaAnimal->Location = System::Drawing::Point(82, 210);
			this->Boton_AreaAnimal->Name = L"Boton_AreaAnimal";
			this->Boton_AreaAnimal->Size = System::Drawing::Size(173, 107);
			this->Boton_AreaAnimal->TabIndex = 1;
			this->Boton_AreaAnimal->Text = L"Área de Animales";
			this->Boton_AreaAnimal->UseVisualStyleBackColor = false;
			// 
			// Boton_Almacen
			// 
			this->Boton_Almacen->BackColor = System::Drawing::Color::Tomato;
			this->Boton_Almacen->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->Boton_Almacen->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Boton_Almacen->Location = System::Drawing::Point(387, 89);
			this->Boton_Almacen->Name = L"Boton_Almacen";
			this->Boton_Almacen->Size = System::Drawing::Size(240, 228);
			this->Boton_Almacen->TabIndex = 2;
			this->Boton_Almacen->Text = L"Almacén";
			this->Boton_Almacen->UseVisualStyleBackColor = false;
			this->Boton_Almacen->Click += gcnew System::EventHandler(this, &frmMenuIngreso::button3_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->mantenimientosToolStripMenuItem,
					this->almacenesToolStripMenuItem, this->areaDeAnimalesToolStripMenuItem, this->personalToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(167, 92);
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			// 
			// almacenesToolStripMenuItem
			// 
			this->almacenesToolStripMenuItem->Name = L"almacenesToolStripMenuItem";
			this->almacenesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->almacenesToolStripMenuItem->Text = L"Almacenes";
			// 
			// areaDeAnimalesToolStripMenuItem
			// 
			this->areaDeAnimalesToolStripMenuItem->Name = L"areaDeAnimalesToolStripMenuItem";
			this->areaDeAnimalesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->areaDeAnimalesToolStripMenuItem->Text = L"Area de Animales";
			// 
			// personalToolStripMenuItem
			// 
			this->personalToolStripMenuItem->Name = L"personalToolStripMenuItem";
			this->personalToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->personalToolStripMenuItem->Text = L"Personal";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(707, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->almacenesToolStripMenuItem1,
					this->areaDeAnimalesToolStripMenuItem1, this->personalToolStripMenuItem1
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// almacenesToolStripMenuItem1
			// 
			this->almacenesToolStripMenuItem1->Name = L"almacenesToolStripMenuItem1";
			this->almacenesToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->almacenesToolStripMenuItem1->Text = L"Almacenes";
			// 
			// areaDeAnimalesToolStripMenuItem1
			// 
			this->areaDeAnimalesToolStripMenuItem1->Name = L"areaDeAnimalesToolStripMenuItem1";
			this->areaDeAnimalesToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->areaDeAnimalesToolStripMenuItem1->Text = L"Area de Animales";
			// 
			// personalToolStripMenuItem1
			// 
			this->personalToolStripMenuItem1->Name = L"personalToolStripMenuItem1";
			this->personalToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->personalToolStripMenuItem1->Text = L"Personal";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(426, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// frmMenuIngreso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSalmon;
			this->ClientSize = System::Drawing::Size(707, 410);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->Boton_Almacen);
			this->Controls->Add(this->Boton_AreaAnimal);
			this->Controls->Add(this->Botn_Personal);
			this->Enabled = false;
			this->Font = (gcnew System::Drawing::Font(L"Leelawadee UI Semilight", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmMenuIngreso";
			this->Text = L"frmMenuIngreso";
			this->Load += gcnew System::EventHandler(this, &frmMenuIngreso::frmMenuIngreso_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMant_Almacen^ ventanaAlmacen = gcnew frmMant_Almacen();
		ventanaAlmacen->Show();
	}
	private: System::Void frmMenuIngreso_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Botn_Personal_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
