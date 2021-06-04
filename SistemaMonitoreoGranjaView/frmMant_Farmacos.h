#pragma once
#include "frmRegistraFarmaco.h"

namespace SistemaMonitoreoGranjaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMant_Farmacos
	/// </summary>
	public ref class frmMant_Farmacos : public System::Windows::Forms::Form
	{
	public:
		frmMant_Farmacos(void)
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
		~frmMant_Farmacos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha_Vencimiento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripción;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button3;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha_Vencimiento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripción = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Nombre,
					this->Cantidad, this->Fecha_Vencimiento, this->Descripción
			});
			this->dataGridView1->Location = System::Drawing::Point(76, 266);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(592, 152);
			this->dataGridView1->TabIndex = 16;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->Name = L"Cantidad";
			// 
			// Fecha_Vencimiento
			// 
			this->Fecha_Vencimiento->HeaderText = L"Fecha_Vencimiento";
			this->Fecha_Vencimiento->Name = L"Fecha_Vencimiento";
			this->Fecha_Vencimiento->Width = 120;
			// 
			// Descripción
			// 
			this->Descripción->HeaderText = L"Descripción";
			this->Descripción->Name = L"Descripción";
			this->Descripción->Width = 180;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Location = System::Drawing::Point(76, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(592, 125);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(431, 55);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 21);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Nombre";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(54, 55);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(168, 21);
			this->comboBox2->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(346, 181);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 30);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMant_Farmacos::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(449, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 30);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(556, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 30);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// frmMant_Farmacos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(744, 459);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmMant_Farmacos";
			this->Text = L"frmMant_Farmacos";
			this->Load += gcnew System::EventHandler(this, &frmMant_Farmacos::frmMant_Farmacos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMant_Farmacos_Load(System::Object^ sender, System::EventArgs^ e) {


	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	frmRegistraFarmaco^ ventanaegistraFarmaco = gcnew frmRegistraFarmaco();
	ventanaegistraFarmaco->ShowDialog();

}
};
}
