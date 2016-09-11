#pragma once

#include <string>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include "tVector.h"

using namespace std;
#include "tMatrix.h"
#include "tVector.h"
#include "tPoly.h"
#include "globals.h"
#include <chrono>
#include <random>

#include "Main.h"



namespace OurLab {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
       #pragma region Components defs
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::ProgressBar^  progressBar3;
	private: System::Windows::Forms::ProgressBar^  progressBar4;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TrackBar^  trackBar1;

private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label18;




	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma endregion
       #pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			this->groupBox7->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(398, 163);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вибірка";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(330, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(330, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(6, 42);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(86, 20);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 45, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Розмір вибірки:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Вихідний файл:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Вхідний файл:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(318, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"D:\\Archive\\7 semester\\Systems Analysis\\Lab2\\our_lab2\\out.txt";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(318, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"D:\\Archive\\7 semester\\Systems Analysis\\Lab2\\our_lab2\\inp.txt";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(416, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(129, 131);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Вид поліномів";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 88);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(67, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Лаггера";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(77, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Лежандра";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ерміта";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(77, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Чебишева";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Controls->Add(this->radioButton7);
			this->groupBox3->Controls->Add(this->radioButton8);
			this->groupBox3->Location = System::Drawing::Point(35, 130);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(120, 131);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Вид поліномів";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 104);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(67, 17);
			this->radioButton5->TabIndex = 3;
			this->radioButton5->Text = L"Лаггера";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 76);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(77, 17);
			this->radioButton6->TabIndex = 2;
			this->radioButton6->Text = L"Лежандра";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(6, 46);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(59, 17);
			this->radioButton7->TabIndex = 1;
			this->radioButton7->Text = L"Ерміта";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Checked = true;
			this->radioButton8->Location = System::Drawing::Point(6, 19);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(77, 17);
			this->radioButton8->TabIndex = 0;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Чебишева";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton11);
			this->groupBox4->Controls->Add(this->radioButton12);
			this->groupBox4->Location = System::Drawing::Point(703, 149);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(145, 72);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ваги ЦФ";
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(6, 46);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(91, 17);
			this->radioButton11->TabIndex = 1;
			this->radioButton11->Text = L"(Min + Max)/2";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Checked = true;
			this->radioButton12->Location = System::Drawing::Point(6, 19);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(139, 17);
			this->radioButton12->TabIndex = 0;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Нормовані значення Y";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->numericUpDown5);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->numericUpDown4);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->groupBox3);
			this->groupBox5->Controls->Add(this->numericUpDown3);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->numericUpDown2);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Location = System::Drawing::Point(551, 12);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(145, 131);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Розмірності векторів";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(46, 106);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(51, 20);
			this->numericUpDown5->TabIndex = 12;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Y:";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(46, 80);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(51, 20);
			this->numericUpDown4->TabIndex = 10;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"X3:";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(46, 50);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(51, 20);
			this->numericUpDown3->TabIndex = 8;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"X2:";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(46, 24);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(51, 20);
			this->numericUpDown2->TabIndex = 6;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"X1:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->numericUpDown7);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->numericUpDown8);
			this->groupBox6->Controls->Add(this->label10);
			this->groupBox6->Controls->Add(this->numericUpDown9);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Location = System::Drawing::Point(703, 23);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(129, 110);
			this->groupBox6->TabIndex = 13;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Степені поліномів";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(69, 80);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(51, 20);
			this->numericUpDown7->TabIndex = 10;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"При X3:";
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(69, 50);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(51, 20);
			this->numericUpDown8->TabIndex = 8;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 52);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 13);
			this->label10->TabIndex = 7;
			this->label10->Text = L"При X2:";
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(69, 24);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(51, 20);
			this->numericUpDown9->TabIndex = 6;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 26);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"При X1:";
			this->label11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::label11_Paint);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(18, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Розрахувати";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton10);
			this->groupBox7->Controls->Add(this->radioButton9);
			this->groupBox7->Location = System::Drawing::Point(551, 149);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(129, 72);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Обчислення λ ";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(6, 47);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(107, 17);
			this->radioButton10->TabIndex = 2;
			this->radioButton10->Text = L"Окремі системи";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Checked = true;
			this->radioButton9->Location = System::Drawing::Point(6, 21);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(97, 17);
			this->radioButton9->TabIndex = 1;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Одна система";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 315);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(182, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Результати у текстовому форматі:";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(125, 214);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(285, 19);
			this->progressBar1->TabIndex = 18;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(125, 240);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(285, 19);
			this->progressBar2->TabIndex = 19;
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(125, 265);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(285, 19);
			this->progressBar3->TabIndex = 20;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(125, 290);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(285, 19);
			this->progressBar4->TabIndex = 21;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Controls->Add(this->tabPage10);
			this->tabControl1->Location = System::Drawing::Point(15, 331);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(839, 341);
			this->tabControl1->TabIndex = 22;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(831, 315);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"X початкові";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(11, 18);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(802, 286);
			this->textBox3->TabIndex = 16;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(831, 315);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Y початкові";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(14, 14);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(802, 286);
			this->textBox4->TabIndex = 17;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(831, 315);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"X нормовані";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(14, 14);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(802, 286);
			this->textBox5->TabIndex = 17;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->textBox6);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(831, 315);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Матриця B";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(14, 14);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox6->Size = System::Drawing::Size(802, 286);
			this->textBox6->TabIndex = 17;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->textBox7);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(831, 315);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"λ";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(14, 14);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox7->Size = System::Drawing::Size(802, 286);
			this->textBox7->TabIndex = 17;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->textBox8);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(831, 315);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"a";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(14, 14);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox8->Size = System::Drawing::Size(802, 286);
			this->textBox8->TabIndex = 17;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->textBox9);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(831, 315);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"c";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(14, 14);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox9->Size = System::Drawing::Size(802, 286);
			this->textBox9->TabIndex = 17;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->textBox10);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(831, 315);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"PSI";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(14, 14);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox10->Size = System::Drawing::Size(802, 286);
			this->textBox10->TabIndex = 18;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->textBox11);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(831, 315);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"PHI";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(14, 14);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox11->Size = System::Drawing::Size(802, 286);
			this->textBox11->TabIndex = 18;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->textBox12);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Size = System::Drawing::Size(831, 315);
			this->tabPage10->TabIndex = 9;
			this->tabPage10->Text = L"Ф";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(14, 14);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox12->Size = System::Drawing::Size(802, 286);
			this->textBox12->TabIndex = 18;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(416, 217);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(416, 243);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 24;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(416, 269);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(416, 294);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 26;
			this->label15->Text = L"label15";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 250);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 34);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Графіки/Числові дані";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->checkBox1);
			this->groupBox8->Controls->Add(this->label25);
			this->groupBox8->Controls->Add(this->label24);
			this->groupBox8->Controls->Add(this->chart1);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->button5);
			this->groupBox8->Controls->Add(this->trackBar1);
			this->groupBox8->Location = System::Drawing::Point(12, 315);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(847, 357);
			this->groupBox8->TabIndex = 28;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Графік";
			this->groupBox8->Enter += gcnew System::EventHandler(this, &MyForm::groupBox8_Enter);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(16, 195);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(149, 17);
			this->checkBox1->TabIndex = 48;
			this->checkBox1->Text = L"У нормованому вигляді:";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(15, 158);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 13);
			this->label25->TabIndex = 47;
			this->label25->Text = L"label25";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(15, 136);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(123, 13);
			this->label24->TabIndex = 46;
			this->label24->Text = L"Чебишівська нев\'язка:";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(187, 20);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::OliveDrab;
			series1->Legend = L"Legend1";
			series1->Name = L"Оригінал";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Navy;
			series2->Legend = L"Legend1";
			series2->Name = L"Оцінка";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Red;
			series3->Legend = L"Legend1";
			series3->Name = L"Відхилення";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(670, 322);
			this->chart1->TabIndex = 42;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(142, 20);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 41;
			this->label16->Text = L"1";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(13, 19);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(130, 13);
			this->label17->TabIndex = 40;
			this->label17->Text = L"Номер цільової функції: ";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(16, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 38;
			this->button5->Text = L"Побудувати";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(13, 45);
			this->trackBar1->Maximum = 4;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(168, 45);
			this->trackBar1->TabIndex = 39;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label18);
			this->groupBox9->Controls->Add(this->label23);
			this->groupBox9->Controls->Add(this->label22);
			this->groupBox9->Controls->Add(this->label21);
			this->groupBox9->Controls->Add(this->label20);
			this->groupBox9->Controls->Add(this->label19);
			this->groupBox9->Location = System::Drawing::Point(551, 227);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(297, 90);
			this->groupBox9->TabIndex = 36;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Поточні нев\'язки";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(50, 71);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(44, 13);
			this->label23->TabIndex = 40;
			this->label23->Text = L"Cheb c:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(50, 46);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 13);
			this->label22->TabIndex = 39;
			this->label22->Text = L"Cheb a:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(22, 24);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(72, 13);
			this->label21->TabIndex = 38;
			this->label21->Text = L"Cheb lambda:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(100, 71);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 13);
			this->label20->TabIndex = 37;
			this->label20->Text = L"label20";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(100, 46);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 36;
			this->label19->Text = L"label19";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(100, 24);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 41;
			this->label18->Text = L"label18";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 685);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->progressBar4);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторна робота №2: відновлення функціональних залежностей в адитивній формі";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: static tVector *X = 0;
	    public: static tVector *Y = 0;
	    public: static tVector *XX = 0;
	    public: static tVector *B = 0;
	    public: static int q0;
	    public: static int dim1;
	    public: static int dim2;
	    public: static int dim3;
	    public: static int p1;
	    public: static int p2;
	    public: static int p3;
	    public: static int dimY;
		public: static tVector *c;
		public: static tVector *a;
		public: static tVector *lambda;
		public: static int type;
		public: static tVector *cc;
		public: static tVector *aa;
		public: static tVector *lambdalambda;

	   private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	   {
					label12->Text = "";
					label13->Text = "";
					label14->Text = "";
					label15->Text = "";

					label18->Text = "";
					label19->Text = "";
					label20->Text = "";

					button4->Enabled = false;
					
					groupBox8->Visible = false;
	   }

	   private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	   {
		     openFileDialog1->ShowDialog();
		     textBox1->Text = openFileDialog1->FileName;
	   }

       private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
       {
			 openFileDialog1->ShowDialog();
			 textBox2->Text = openFileDialog1->FileName;
       }

	   private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	   {
					button3->Enabled = false;
					button4->Enabled = false;
					std::string filename = toS(textBox1->Text);
					q0 = (int) numericUpDown1->Value;
					dim1 = (int) numericUpDown2->Value;
					dim2 = (int) numericUpDown3->Value;
					dim3 = (int) numericUpDown4->Value;
					dimY = (int) numericUpDown5->Value;

					p1 = (int) numericUpDown9->Value + 1;
					p2 = (int) numericUpDown8->Value + 1;
					p3 = (int) numericUpDown7->Value + 1;
					trackBar1->Maximum = dimY;
					bool single_system = radioButton9->Checked;
					bool b_norm_average = radioButton11->Checked;

					type;
					if (radioButton8->Checked)
						type = 0;
					if (radioButton7->Checked)
						type = 1;
					if (radioButton6->Checked)
						type = 2;
					if (radioButton5->Checked)
						type = 3;
						
					FillPoly(p1, p2, p3, type);
					//groupBox1->Text += toM(Polynom(0, 2).str("x"));

					X = new tVector[q0];
					Y = new tVector[q0];
					XX = new tVector[q0];
					B = new tVector[q0];

					Read_X_Y(filename, X, Y, dim1, dim2, dim3, dimY, q0);
					normalizeX(X, XX, q0, dim1, dim2, dim3);
					normalizeYtoB(Y, B, q0, dimY);
					if (b_norm_average)
					   normalizeYtoB_average(B, B, q0, dimY);

					textBox3->Clear();
					textBox4->Clear();
					textBox5->Clear();
					textBox6->Clear();
					for (int q = 0; q < q0; q++)
					{
						textBox3->Text += toM(X[q].toStr()) + "\r\n";
						textBox4->Text += toM(Y[q].toStr()) + "\r\n";
						textBox5->Text += toM(XX[q].toStr()) + "\r\n";
						textBox6->Text += toM(B[q].toStr()) + "\r\n";
					}
					textBox7->Clear();
					textBox8->Clear();
					textBox9->Clear();
					textBox10->Clear();
					textBox11->Clear();
					textBox12->Clear();

					progressBar1->Value = 0;
					progressBar2->Value = 0;
					progressBar3->Value = 0;
					progressBar4->Value = 0;

					label12->Text = "";
					label13->Text = "";
					label14->Text = "";
					label15->Text = "";

					cc = new tVector[4];
					aa = new tVector[4];
					lambdalambda = new tVector[4];

					for (int i = 0; i < dimY; i++)
					{
						auto begin = std::chrono::high_resolution_clock::now();
						auto PB = progressBar1;
						switch (i)
						{
							case 0:{ PB = progressBar1; break; }
							case 1:{ PB = progressBar2; break; }
							case 2:{ PB = progressBar3; break; }
							case 3:{ PB = progressBar4; break; }
						}
						PB->Value = 0; PB->Update();
						Application::DoEvents();
						lambda = new tVector(dim1 * p1 + dim2 * p2 + dim3 * p3);
						if (single_system)
							*lambda = get_lambda(i, B, XX, type, p1, p2, p3, dim1, dim2, dim3, q0);
						else
							*lambda = get_lambda_break_down(i, B, XX, type, p1, p2, p3, dim1, dim2, dim3, q0);
						label18->Text = devLam.ToString();
						Application::DoEvents();
						lambdalambda[i] = *lambda;
						PB->Value = 40; PB->Update();
						Application::DoEvents();
						textBox7->Text += "Цільова функція №" + (i+1).ToString() + "\r\n";
						textBox7->Text += toM("lambda: " + lambda->toStr() + "\r\n\r\n\r\n");
						textBox7->Text += "__________________________________" + "\r\n\r\n";
						a = new tVector(dim1 + dim2 + dim3);
						*a = get_a_vec(i, B, XX, *lambda, p1, p2, p3, dim1, dim2, dim3, q0, type);
						label19->Text = deva.ToString();
						aa[i] = *a;
						PB->Value = 70; PB->Update();
						Application::DoEvents();
						textBox8->Text += "Цільова функція №" + (i + 1).ToString() + "\r\n";
						textBox8->Text += "a: " + toM(a->toStr()) + "\r\n\r\n\r\n";
						textBox8->Text += "__________________________________" + "\r\n\r\n";
						c = new tVector(3);
						*c = get_c_vec(i, B, XX, *lambda, *a, p1, p2, p3, dim1, dim2, dim3, q0, type);
						label20->Text = devc.ToString();
						cc[i] = *c;
						PB->Value = 100; PB->Update();
						Application::DoEvents();
						textBox9->Text += "Цільова функція №" + (i + 1).ToString() + "\r\n";
						textBox9->Text += "c: " + toM(c->toStr()) + "\r\n\r\n\r\n";
						textBox9->Text += "__________________________________" + "\r\n\r\n";

						auto end = std::chrono::high_resolution_clock::now();
						auto time_str = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count().ToString() + " мс";
						auto LBL = label12;
						Application::DoEvents();
						switch (i)
						{
							case 0:{ LBL = label12; break; }
							case 1:{ LBL = label13; break; }
							case 2:{ LBL = label14; break; }
							case 3:{ LBL = label15; break; }
						}
						LBL->Text = time_str;
						Application::DoEvents();

						// Output PSI
						textBox10->Text += "Цільова функція №" + (i + 1).ToString() + "\r\n";
						// first vector
						for (int var_num = 0; var_num < dim1; var_num++)
							textBox10->Text += "PSI(x1" + (var_num + 1).ToString() + ") = " + 
						toM(PSI_poly(0, var_num, -1, XX, *lambda, p1, p2, p3, dim1, dim2, dim3, type).str("x1"+toS((var_num+1).ToString()))) + "\r\n\r\n";
						// second vector
						for (int var_num = 0; var_num < dim2; var_num++)
							textBox10->Text += "PSI(x2" + (var_num + 1).ToString() + ") = " +
							toM(PSI_poly(1, var_num, -1, XX, *lambda, p1, p2, p3, dim1, dim2, dim3, type).str("x2" + toS((var_num + 1).ToString()))) + "\r\n\r\n";
						// third vector
						for (int var_num = 0; var_num < dim3; var_num++)
							textBox10->Text += "PSI(x3" + (var_num + 1).ToString() + ") = " +
							toM(PSI_poly(2, var_num, -1, XX, *lambda, p1, p2, p3, dim1, dim2, dim3, type).str("x3" + toS((var_num + 1).ToString()))) + "\r\n\r\n";
						textBox10->Text += "__________________________________" + "\r\n\r\n";

						// Output PHI to textBox11
						textBox11 ->Text += "Цільова функція №" + (i + 1).ToString() + "\r\n";
						for (int Vec_num = 0; Vec_num < 3; Vec_num++)
						{
							textBox11->Text += "PHI(x" + (Vec_num + 1).ToString() + ") = " +
								toM(PHI_poly(Vec_num, -1, XX, *lambda, *a, p1, p2, p3, dim1, dim2, dim3, type)) + "\r\n\r\n";
						}
						textBox11->Text += "__________________________________" + "\r\n\r\n";

						// Output Ф to textBox12
						textBox12->Text += "Цільова функція №" + (i + 1).ToString() + "\r\n";
						textBox12->Text += "Ф(x1, x2, x3) = "  
							+ c->elem(0).ToString() + " * PHI(x1) + " 
							+ c->elem(1).ToString() + " * PHI(x2) + " 
							+ c->elem(2).ToString() + " * PHI(x3)" + "\r\n\r\n";

						std::string Poly_form;
						std::string Koef_form;
						std::string Norm_koef_form;

						F_poly(Poly_form, Koef_form, Norm_koef_form,
							*lambda, *a, *c, p1, p2, p3, dim1, dim2, dim3, type, -1, XX, X);

						textBox12->Text += "У формі поліномів з коефіцієнтами у нормованій формі: \r\n";
						textBox12->Text += "Ф(x1, x2, x3) = " + toM(Koef_form) + "\r\n\r\n";
						textBox12->Text += "У формі поліномів з коефіцієнтами у відновленій формі: \r\n";
						textBox12->Text += "Ф(x1, x2, x3) = " + toM(Norm_koef_form) + "\r\n\r\n";
						textBox12->Text += "У формі поліномів загального вигляду: \r\n";
						textBox12->Text += "Ф(x1, x2, x3) = " + toM(Poly_form) + "\r\n\r\n";

						textBox12->Text += "__________________________________" + "\r\n\r\n";
					}

					

					button3->Enabled = true;
					button4->Enabled = true;
					build_graph();
	   }
	   private: System::Void label11_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
	{
				 
	}
	   private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
       private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
       {
					groupBox8->Visible = !groupBox8->Visible;
       }
private: System::Void MyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
{
			
}
private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
}

		 void build_graph()
		 {
			 chart1->Series["Оригінал"]->Points->Clear();
			 chart1->Series["Оцінка"]->Points->Clear();
			 chart1->Series["Відхилення"]->Points->Clear();
			 int i = trackBar1->Value - 1;
			 double max_dev = 0;
			 double curr_dev;
			 double y_real, y_est, y_ret;
			 for (int q = 0; q < q0; q++)
			 {
				 y_real = B[q].elem(i);
				 y_est = F_eval(lambdalambda[i], aa[i], cc[i], p1, p2, p3, dim1, dim2, dim3, type, q, XX);
				 curr_dev = y_est - y_real;

				 if (checkBox1->Checked)
				 {
					 chart1->Series["Оригінал"]->Points->AddXY(q + 1, y_real);
					 chart1->Series["Оцінка"]->Points->AddXY(q + 1, y_est);
					 chart1->Series["Відхилення"]->Points->AddXY(q + 1, abs(curr_dev));
				 }
				 else // Denormalized
				 {
					 chart1->Series["Оригінал"]->Points->AddXY(q + 1, Y[q].elem(i));
					 if (y_real > 1e-3)
					 {
						 double k = y_est / y_real;
						 double k1 = y_est / curr_dev;
						 if ((abs(k) > 0.1) && (abs(k) < 10))
						 {
							 chart1->Series["Оцінка"]->Points->AddXY(q + 1, Y[q].elem(i) * k);

						 }
						 if ((abs(k1) > 0.1) && (abs(k1) < 10))
						 {
							 //chart1->Series["Відхилення"]->Points->AddXY(q + 1, abs(curr_dev) * k1);
						 }
					 }

				 }


				 curr_dev = abs(curr_dev);

				 if (curr_dev > max_dev)
					 max_dev = curr_dev;
			 }
			 label25->Text = (max_dev.ToString());
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 build_graph();
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) 
{
			 label16->Text = trackBar1->Value.ToString();
			 build_graph();
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
			 build_graph();
}
};

	

	
}
