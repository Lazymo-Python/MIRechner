#pragma once
#include <string>

namespace MIRechner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ calc;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ exit;
	protected:

	protected:


	private: System::Windows::Forms::Label^ plus;

	private: System::Windows::Forms::TextBox^ num1;
	private: System::Windows::Forms::TextBox^ num2;
	private: System::Windows::Forms::Label^ equal;
	private: System::Windows::Forms::Label^ sum;





	protected:





	protected:





	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->calc = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->equal = (gcnew System::Windows::Forms::Label());
			this->sum = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// calc
			// 
			this->calc->Location = System::Drawing::Point(58, 303);
			this->calc->Name = L"calc";
			this->calc->Size = System::Drawing::Size(75, 23);
			this->calc->TabIndex = 0;
			this->calc->Text = L"Calculate";
			this->calc->UseVisualStyleBackColor = true;
			this->calc->Click += gcnew System::EventHandler(this, &MainForm::calc_Click);
			// 
			// clear
			// 
			this->clear->Location = System::Drawing::Point(181, 303);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(75, 23);
			this->clear->TabIndex = 1;
			this->clear->Text = L"Clear";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MainForm::clear_Click);
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(300, 303);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(75, 23);
			this->exit->TabIndex = 2;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &MainForm::exit_Click);
			// 
			// plus
			// 
			this->plus->AutoSize = true;
			this->plus->Location = System::Drawing::Point(129, 126);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(13, 13);
			this->plus->TabIndex = 3;
			this->plus->Text = L"+";
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(12, 123);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(100, 20);
			this->num1->TabIndex = 4;
			this->num1->TextChanged += gcnew System::EventHandler(this, &MainForm::num1_TextChanged);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(181, 123);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(100, 20);
			this->num2->TabIndex = 5;
			this->num2->TextChanged += gcnew System::EventHandler(this, &MainForm::num2_TextChanged);
			// 
			// equal
			// 
			this->equal->AutoSize = true;
			this->equal->Location = System::Drawing::Point(297, 126);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(13, 13);
			this->equal->TabIndex = 6;
			this->equal->Text = L"=";
			// 
			// sum
			// 
			this->sum->AutoSize = true;
			this->sum->Location = System::Drawing::Point(368, 126);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(28, 13);
			this->sum->TabIndex = 7;
			this->sum->Text = L"Sum";
			this->sum->Click += gcnew System::EventHandler(this, &MainForm::sum_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 407);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->calc);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void calc_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nummer1;
	nummer1 = num1->Text;

	int number1 = Convert::ToInt32(nummer1);

	String^ nummer2;
	nummer2 = num2->Text;

	int number2 = Convert::ToInt32(nummer2);

	int summe = number1 + number2;
	String^ summand = Convert::ToString(summe);


	
	this->sum->Text = summand;
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->num1->Text = "";
	this->num2->Text = "";
	this->sum->Text = "";
}
private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void num2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void num1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	

	}
private: System::Void sum_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
};
}
