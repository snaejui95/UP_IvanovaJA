#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <ctime>
#include <string>
#include <algorithm>
#include <thread>
#include "Sort.h"
using namespace std;

namespace Practic {

	/*Подсчёт количества цифр и помещения их в массив*/
	static int* ch1 = new int[100];
	static int kolNumber[10][10];

	static void kolNum(int n, int c) {
		int val;
		for (int i = 0; i < 10; i++)
		{
			val = count(ch1 + c, ch1 + 10 + c, i);
			kolNumber[n][i] = val;
		}
	}

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Изначальный массив:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(13, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(259, 48);
			this->dataGridView1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Количество цифр:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(13, 135);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(119, 150);
			this->dataGridView2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Вывести на экран содержимое файла";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(12, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 36);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Вывести количество цифр";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(140, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 343);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		/*Создаём 10 потоков*/
		label3->Text = "Цифры в файле\nбыли заменены на *\n\n(Расчёт количества\nцифр произведён\nс помощью потоков)";
		int sum[10];
		thread th1(kolNum, 0, 0);
		thread th2(kolNum, 1, 10);
		thread th3(kolNum, 2, 20);
		thread th4(kolNum, 3, 30);
		thread th5(kolNum, 4, 40);
		thread th6(kolNum, 5, 50);
		thread th7(kolNum, 6, 60);
		thread th8(kolNum, 7, 70);
		thread th9(kolNum, 8, 80);
		thread th10(kolNum, 9, 90);
		th1.join();
		th2.join();
		th3.join();
		th4.join();
		th5.join();
		th6.join();
		th7.join();
		th8.join();
		th9.join();
		th10.join();
		/*Цикл считает сумму цифр*/
		for (int i = 0; i < 10; i++) {
			sum[i] = 0;
			for (int j = 0; j < 10; j++) {
				sum[i] += kolNumber[j][i];
			}
		}
		dataGridView2->ColumnCount = 1;
		dataGridView2->RowCount = 10;
		/*Вывод на экран*/
		for (int i = 0; i < 10; i++) {
			dataGridView2->Rows[i]->HeaderCell->Value = System::Convert::ToString(i);
			dataGridView2->Rows[i]->Cells[0]->Value = sum[i];
		}
		swapToStars();
	}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	label3->Text = "";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Чтение из файла и вывод на экран*/
	FILE* f;
	char* ch = new char[100];
	char* buffer = new char[1];
	f = fopen("textSample.txt", "r");
	fgets(ch, 100, f);
	dataGridView1->ColumnCount = 100;
	for (int i = 0; i < 100; i++) { 
		buffer[0] = ch[i];
		ch1[i] = atoi(buffer);
		dataGridView1->Rows[0]->Cells[i]->Value = atoi(buffer);
	}
	button2->Enabled = true;
}
};
}
