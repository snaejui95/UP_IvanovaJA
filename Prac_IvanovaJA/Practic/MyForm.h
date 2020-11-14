#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <ctime>
#include "Sort.h"
#include "MyForm11.h"
using namespace std;

namespace Practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ������� ��� �� ����� ��������� label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 216);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������� ����";
			// 
			// ������� ��� �� ����� ��������� label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 230);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"���� � ����� �������: ";
			// 
			// ������� ��� �� ����� ��������� textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// ������� ��� �� ����� ��������� label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"�������";
			// 
			// ������� ��� �� ����� ��������� label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"���";
			// 
			// ������� ��� �� ����� ��������� textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// ������� ��� �� ����� ��������� label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(66, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"��������";
			// 
			// ������� ��� �� ����� ��������� textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(66, 121);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// ������� ��� �� ����� ��������� button1
			// 
			this->button1->Location = System::Drawing::Point(66, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 36);
			this->button1->TabIndex = 8;
			this->button1->Text = L"������ ���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ������� ��� ����� MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(249, 263);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	/*����� ���� � �������*/
		struct tm* date;
		char Current_date[100];
		const time_t timer = time(NULL);
		date = localtime(&timer);
		strftime(Current_date, 100, "%d.%m.%Y %H:%M:%S", date);
		System::String^ strCLR = gcnew System::String(Current_date);
		label2->Text += strCLR;
		//////////////////////
		randText();
	}
	   /*���� �����������*/
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "") MessageBox::Show("��������� ��� ����", "������",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			String^ str;
			str = "����� ����������\n" + textBox1->Text + " " + textBox2->Text + "\n" + textBox3->Text;
			MyForm1^ form = gcnew MyForm1;
			MessageBox::Show(str, "�����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			form->ShowDialog();
		}
	}
	   /*������ ����� ����� �������� ����� ����*/
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (Char::IsDigit (e->KeyChar)) e->Handled = true;
	if (Char::IsPunctuation(e->KeyChar)) e->Handled = true;
	if (Char::IsSymbol(e->KeyChar)) e->Handled = true;
	if (Char::IsLetter(e->KeyChar)) return;
}
	   /*������ ����� ����� �������� ����� ����*/
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (Char::IsDigit(e->KeyChar)) e->Handled = true;
	if (Char::IsPunctuation(e->KeyChar)) e->Handled = true;
	if (Char::IsSymbol(e->KeyChar)) e->Handled = true;
	if (Char::IsLetter(e->KeyChar)) return;
}
	   /*������ ����� ����� �������� ����� ����*/
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (Char::IsDigit(e->KeyChar)) e->Handled = true;
	if (Char::IsPunctuation(e->KeyChar)) e->Handled = true;
	if (Char::IsSymbol(e->KeyChar)) e->Handled = true;
	if (Char::IsLetter(e->KeyChar)) return;
}
};
}
