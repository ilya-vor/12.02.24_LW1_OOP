#pragma once
#include <cstdlib>
#include "SecondaryForm.h"

namespace LW1OOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		List<Button^>^ buttonlist = gcnew List<Button^>();
		List<Point>^ points = gcnew List<Point>();
		int x1;
		int y1;
		int cntFig = 0;
		int deleteButtonsFlag;
		int mouseDown;
		int cntCheks = 0;
		bool isDrawing;
		Point lastPoint;
		Graphics^ g;
		Graphics^ g1;
		Pen^ p;
		List<Point>^ savedPoints = gcnew List<Point>();
		Random^ rand = gcnew Random();
		ToolTip^ tooltip = gcnew ToolTip();
		Point tooltipPoint;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ какToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ такToolStripMenuItem;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::ComponentModel::IContainer^ components;

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


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->какToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->такToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(222, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"Создание кнопок по нажатию";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton10);
			this->groupBox1->Controls->Add(this->radioButton9);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(259, 316);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Функции";
			this->groupBox1->MouseEnter += gcnew System::EventHandler(this, &MyForm::groupBox1_MouseEnter);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(6, 255);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(63, 20);
			this->radioButton10->TabIndex = 9;
			this->radioButton10->Text = L"Timer";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton10_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(6, 229);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(84, 20);
			this->radioButton9->TabIndex = 8;
			this->radioButton9->Text = L"TrackBar";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton9_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(265, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 69);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(6, 203);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(131, 20);
			this->radioButton8->TabIndex = 7;
			this->radioButton8->Text = L"FlowLayoutPanel";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(6, 177);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(167, 20);
			this->radioButton7->TabIndex = 6;
			this->radioButton7->Text = L"ComboBox и ImageList";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(6, 151);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(196, 20);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->Text = L"ContexMenu и MessageBox";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 125);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(247, 20);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->Text = L"Поменять цвет фона приложения";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 99);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(155, 20);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->Text = L"Посчитать возраст";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 73);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(179, 20);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"CheckBox и ProgressBar";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 47);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(100, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Рисовашка";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 308);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(259, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Удалить все кнопки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 503);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(277, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 300);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton14);
			this->groupBox2->Controls->Add(this->radioButton13);
			this->groupBox2->Controls->Add(this->radioButton12);
			this->groupBox2->Controls->Add(this->radioButton11);
			this->groupBox2->Location = System::Drawing::Point(277, 319);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 126);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Кисти";
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(7, 100);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(130, 20);
			this->radioButton14->TabIndex = 3;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"Прямоугольник";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(7, 74);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(58, 20);
			this->radioButton13->TabIndex = 2;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"Круг";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(7, 48);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(84, 20);
			this->radioButton12->TabIndex = 1;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Отрезок";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(7, 22);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(65, 20);
			this->radioButton11->TabIndex = 0;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Кисть";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(277, 451);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Очистить холст";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->progressBar1);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Location = System::Drawing::Point(277, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 200);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"CheckBox";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Вы выбрали 0 чекбоксов";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 21);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(95, 20);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox123_CheckedChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(6, 99);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(188, 23);
			this->progressBar1->TabIndex = 3;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(6, 47);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(95, 20);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox123_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(6, 73);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(95, 20);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox123_CheckedChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(6, 21);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->CloseUp += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_CloseUp);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите дату рождения";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dateTimePicker1);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Location = System::Drawing::Point(277, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(214, 100);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Калькулятор возраста";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(277, 256);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(255, 46);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Поменять цвет фона приложения";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->какToolStripMenuItem,
					this->такToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(239, 52);
			// 
			// какToolStripMenuItem
			// 
			this->какToolStripMenuItem->Name = L"какToolStripMenuItem";
			this->какToolStripMenuItem->Size = System::Drawing::Size(238, 24);
			this->какToolStripMenuItem->Text = L"как\? (messageBox)";
			this->какToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::какToolStripMenuItem_Click);
			// 
			// такToolStripMenuItem
			// 
			this->такToolStripMenuItem->Name = L"такToolStripMenuItem";
			this->такToolStripMenuItem->Size = System::Drawing::Size(238, 24);
			this->такToolStripMenuItem->Text = L"как\? (еще одна форма)";
			this->такToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::такToolStripMenuItem_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth32Bit;
			this->imageList1->ImageSize = System::Drawing::Size(256, 256);
			Image^ image1 = Image::FromFile(L"C:\\Users\\ILYA\\source\\repos\\LW1 OOP v1\\1.jpg");
			this->imageList1->Images->Add(image1);
			Image^ image2 = Image::FromFile(L"C:\\Users\\ILYA\\source\\repos\\LW1 OOP v1\\2.png");
			this->imageList1->Images->Add(image2);
			Image^ image3 = Image::FromFile(L"C:\\Users\\ILYA\\source\\repos\\LW1 OOP v1\\3.png");
			this->imageList1->Images->Add(image3);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(277, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 300);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->SizeMode = PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox2_MouseLeave);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox2_MouseMove);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Кот", L"Пес", L"Белка" });
			this->comboBox1->Location = System::Drawing::Point(278, 320);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(300, 24);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->Text = L"Тыкни на стрелочку! Она там! --->";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->button7);
			this->flowLayoutPanel1->Controls->Add(this->button8);
			this->flowLayoutPanel1->Controls->Add(this->button9);
			this->flowLayoutPanel1->Controls->Add(this->button10);
			this->flowLayoutPanel1->Location = System::Drawing::Point(276, 202);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(195, 100);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(3, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5678910_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(84, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 1;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button5678910_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(3, 32);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 2;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button5678910_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(84, 32);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 3;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button5678910_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(3, 61);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 4;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button5678910_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(84, 61);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 5;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button5678910_Click);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(6, 185);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(250, 56);
			this->trackBar2->TabIndex = 4;
			this->trackBar2->Value = 5;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar_Scroll);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->trackBar1);
			this->groupBox5->Controls->Add(this->trackBar2);
			this->groupBox5->Location = System::Drawing::Point(277, 68);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(258, 234);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"groupBox5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(83, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Ширина окна";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Высота окна";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(6, 21);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->Size = System::Drawing::Size(56, 167);
			this->trackBar1->TabIndex = 5;
			this->trackBar1->Value = 5;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar_Scroll);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(6, 21);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(188, 23);
			this->progressBar2->TabIndex = 3;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Controls->Add(this->progressBar2);
			this->groupBox6->Location = System::Drawing::Point(277, 202);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(200, 100);
			this->groupBox6->TabIndex = 4;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"groupBox6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 47);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 4;
			this->label7->Text = L"label7";
			// 
			// MyForm
			// 
			this->Resize += gcnew EventHandler(this, &MyForm::MyForm_Resize);
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 528);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//
		// Использую ту крутую штуку из лекций
		//
		ref class Shape {
		public:
			int x, y;
			Shape() : x(0), y(0) {}
			Shape(int x, int y) : x(x), y(y) {}
			virtual void draw(Graphics^ g, Pen^ p) {};
		};

		ref class Circle : public Shape {
		public:
			int r;
			Circle() : r(0) {}
			Circle(int x, int y, int r) : r(r) {
				this->x = x;
				this->y = y;
			}
			void draw(Graphics^ g, Pen^ p) override {
				g->DrawEllipse(p, this->x - r, this->y - r,
					r + r, r + r);
			}
		};

		ref class Rect : public Shape {
		public:
			int a, b;
			Rect() : a(0), b(0) {}
			Rect(int x, int y, int a, int b) : a(a), b(b) {
				this->x = x;
				this->y = y;
			}
			void draw(Graphics^ g, Pen^ p) override {
				g->DrawRectangle(p, x, y, a, b);
			}
		};


	public:
		List<Shape^>^ shapesList = gcnew List<Shape^>();
	//
	// Создание кнопок по нажатию
	//
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label1->Text = "CLICK!";
		if (this->radioButton1->Checked) {
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button1->Location = System::Drawing::Point(e->X, e->Y);
			this->button1->Text = L"New button";
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			if (this->deleteButtonsFlag == 0) {
				this->Controls->Add(this->button2);
				deleteButtonsFlag = 1;
			}
			this->Controls->Add(this->button1);
			this->buttonlist->Add(this->button1);

		}
		if (radioButton6->Checked) {
			this->contextMenuStrip1->Show();
			this->contextMenuStrip1->Location = MousePosition;
		}
	}
	// Обработчик для новых кнопок
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ sndbtn = (Button^)sender;
		int red = rand->Next(256); // От 0 до 255 
		int green = rand->Next(256); // От 0 до 255
		int blue = rand->Next(256); // От 0 до 255
		Color randomColor = Color::FromArgb(red, green, blue);
		sndbtn->BackColor = randomColor;
	}
	// Удаление кнопок
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		for each (Button ^ button in buttonlist) {
			delete button;
		}
		this->Controls->Remove(this->button2);
		deleteButtonsFlag = 0;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == false) {
			for each (Button ^ button in buttonlist) {
				delete button;
			}
			this->Controls->Remove(this->button2);
			deleteButtonsFlag = 0;
		}
	}
	//
	// Рисовашка
	//
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		cntFig = 0;
		this->shapesList->Clear();
		if (this->radioButton2->Checked) {
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button3);
			g = this->pictureBox1->CreateGraphics();
			p = gcnew Pen(Color::Blue, 1.0f);
		}
		else {
			this->Controls->Remove(this->pictureBox1);
			this->Controls->Remove(this->groupBox2);
			this->Controls->Remove(this->button3);
		}
	}
	// Очищаю список точек и сохраняю первую точку
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->points->Clear();
		this->points->Add(e->Location);
	}
	// При двежении мыши накапливаем точки и рисуем по ним кривую
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (radioButton11->Checked) {
			if (e->Button == System::Windows::Forms::MouseButtons::Left) {
				this->points->Add(e->Location);
				g->DrawLines(p, points->ToArray());
			}
		}
	}
	// Если мы рисуем фигуру, то рисуем ее при отпускании мыши по двум точкам
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (radioButton12->Checked) {
			Point pt2 = Point(e->X, e->Y);
			g->DrawLine(p, points[0], pt2);
		}
		if (radioButton13->Checked) {
			double r = pow(pow(points[0].X - e->X, 2) + pow(points[0].Y - e->Y, 2), 0.5);
			shapesList->Add(gcnew Circle(points[0].X, points[0].Y, r));
			shapesList[cntFig]->draw(g, p);
			cntFig++;
		}
		if (radioButton14->Checked) {
			shapesList->Add(gcnew Rect(points[0].X, points[0].Y, e->X - points[0].X, e->Y - points[0].Y));
			shapesList[cntFig]->draw(g, p);
			cntFig++;
		}
	}
	// Это обработчик кнопки очистка холста
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBox1->Invalidate();
		this->shapesList->Clear();
		cntFig = 0;
	}
	// Сохранение изображения PictureBox при закрытии и загрузка при разворачивании
	private: System::Void MyForm_Resize(Object^ sender, EventArgs^ e)
    {
		if (radioButton2->Checked) {
			if (this->WindowState == FormWindowState::Minimized)
			{
				/*
				// Сохраняем содержимое PictureBox в изображение Bitmap
				pictureBox1->DrawToBitmap(savedBitmap, pictureBox1->ClientRectangle);
				ShowBitmap(savedBitmap);
				*/
			}
			else if (this->WindowState == FormWindowState::Normal)
			{
				// Если приложение развернуто, загружаем сохраненное изображение обратно в PictureBox
				/*
				if (savedBitmap != nullptr)
				{
					pictureBox1->Image = savedBitmap;
				}
				*/
			}
		}
    }
		void ShowBitmap(Bitmap^ bitmap)
	{
		Form^ viewForm = gcnew Form();
		PictureBox^ pictureBox = gcnew PictureBox();
		pictureBox->Dock = DockStyle::Fill;
		pictureBox->Image = bitmap;
		pictureBox->SizeMode = PictureBoxSizeMode::Zoom;
		viewForm->Controls->Add(pictureBox);
		viewForm->ShowDialog();
	}
	//
	// Функции, которые мне были нужны
	//
	private:
		// Это для корня
		float lambda(float x, float y) {
			return x * x - y;
		}
		// Это расстояние между двумя точками
		int dist(int x1,int y1,int x2,int y2) {
			int res = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);
			return res;
		}
		// Это для поиска корня и возведения в квадрат
		int pow(int x, float st) {
			int res;
			if (st == 0) {
				res = 1;
			}
			else if (st > 0 && st < 1) {
				if (st == 0.5) {
					int x0 = 0;
					int x1 = 1e10;
					int eps = 1;
					if (lambda(x0, x) * lambda(x1, x) < 0) {
						int x2;
						while ((x1 - x0) > eps) {
							x2 = (x1 + x0) / 2;
							if (lambda(x2, x) == 0) {
								x1 = x2;
								break;
							}
							if (lambda(x2, x) * lambda(x1, x) < 0) {
								x0 = x2;
							}
							else {
								x1 = x2;
							}
						}
					}
					return x1;
				}
				else {
					exit(EXIT_FAILURE); //crush
					return 0; 
				}
			}
			else if (st >= 1) {
				res = x;
				for (int i = 1; i < st; i++) {
					res = res * res;
				}
			}
			else {
				res = 1 / pow(x, -1 * st);
			}
			return res;
		}
		// Это функция для подсчета активированных чекбоксов
		void cntCheckbox(){
			cntCheks = this->checkBox1->Checked;
			cntCheks += this->checkBox2->Checked;
			cntCheks += this->checkBox3->Checked;
			if (cntCheks != 1) {
				this->label2->Text = String::Format("Вы выбрали {0} чекбоксов", cntCheks);
			}
			else {
				this->label2->Text = "Вы выбрали 1 чекбокс";
			}
			this->progressBar1->Value = cntCheks * 33 + 1;
		}

	//
	// Чекбоксы и прогрессбар
	//
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton3->Checked) {
			this->Controls->Add(this->groupBox3);
		}
		else {
			this->Controls->Remove(this->groupBox3);
		}
	}
	// Я раньше думал что у каждого чекбокса свой обработчик, 
	// но потом узнал что можно сделать один обработчик на все чекбоксы
	private: System::Void checkBox123_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		cntCheckbox();
	}
	//
	// Калькулятор возраста
	//
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton4->Checked) {
			this->Controls->Add(this->groupBox4);
		}
		else {
			this->Controls->Remove(this->groupBox4);
		}
	}
	// Обработчик события завершения выбора даты
	private: System::Void dateTimePicker1_CloseUp(System::Object^ sender, System::EventArgs^ e) {
		DateTime birthday = this->dateTimePicker1->Value;
		DateTime currentDate = DateTime::Now;
		TimeSpan age = currentDate - birthday;
		int years = (int)(age.Days / 365.25);
		this->label3->Text = String::Format("{0} полных лет", years);
	}
	//
	// Приветствие
	//
	// Обработчик запуска формы
	private: System::Void MyForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
		DateTime currentTime = DateTime::Now;
		int currentHour = currentTime.Hour;
		if (currentHour >= 6 && currentHour < 12) {
			this->label4->Text = "Доброе утро!";
		}
		else if (currentHour >= 12 && currentHour < 18) {
			this->label4->Text = "Добрый день!";
		}
		else {
			this->label4->Text = "Добрый вечер!";
		}
		this->Controls->Add(this->label4);
		// По умолчанию почему то включался второй radioButton
		// и интерфейсы перекрывали друг друга
		this->radioButton2->AutoCheck = false;
		this->radioButton2->Checked = false;
		this->radioButton2->AutoCheck = true;
	}
	// Скрытие приветствия при наведении на меню функций
	private: System::Void groupBox1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Remove(this->label4);
	}

	//
	// Поменять цвет фона приложения
	//
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton5->Checked) {
			this->Controls->Add(button4);
		}
		else {
			this->Controls->Remove(button4);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ColorDialog^ colorDialog = gcnew ColorDialog();
		colorDialog->AllowFullOpen = true;
		colorDialog->ShowHelp = true;
		colorDialog->Color = this->BackColor;

		if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->BackColor = colorDialog->Color;
		}
		delete colorDialog;
	}
	// 
	// ContexMenu и MessageBox
	//
	private: System::Void какToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::MessageBox::Show(L"Никак!", L"Ответ:", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void такToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SecondaryForm^ secondaryForm = gcnew SecondaryForm();
		secondaryForm->Show();
	}
    //
	// comboBox и imageList
	//
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton7->Checked) {
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->comboBox1);
		}
		else {
			this->Controls->Remove(this->pictureBox2);
			this->Controls->Remove(this->comboBox1);
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (this->comboBox1->SelectedIndex)
		{
		case 0:
			this->pictureBox2->Image = this->imageList1->Images[0];
			break;
		case 1:
			this->pictureBox2->Image = this->imageList1->Images[1];
			break;
		case 2:
			this->pictureBox2->Image = this->imageList1->Images[2];
			break;
		default:
			break;
		}
	}

	private: System::Void pictureBox2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Point clientMousePos = this->PointToClient(Control::MousePosition);
		switch (this->comboBox1->SelectedIndex)
		{
		case -1:
			this->tooltip->Show(L"ТЫКНИ НА СТРЕЛОЧКУ!", this, clientMousePos.X + 20, clientMousePos.Y + 40);
			break;
		case 0:
			this->tooltip->Show(L"Это крутой кот!", this, clientMousePos.X + 20, clientMousePos.Y + 40);
			break;
		case 1:
			this->tooltip->Show(L"Это добрый пёсик!", this, clientMousePos.X + 20, clientMousePos.Y + 40);
			break;
		case 2:
			this->tooltip->Show(L"Это злая белка!", this, clientMousePos.X + 20, clientMousePos.Y + 40);
			break;
		default:
			break;
		}
	}
	private: System::Void pictureBox2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->tooltip->Hide(this);
	}
	//
	//   flowLayoutPanel1
	//
	private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton8->Checked) {
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->button7);
			this->flowLayoutPanel1->Controls->Add(this->button8);
			this->flowLayoutPanel1->Controls->Add(this->button9);
			this->flowLayoutPanel1->Controls->Add(this->button10);
			this->Controls->Add(this->flowLayoutPanel1);
		}
		else {
			this->Controls->Remove(this->flowLayoutPanel1);
		}
	}
	private: System::Void button5678910_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ sndbtn = (Button^)sender;
		this->flowLayoutPanel1->Controls->Remove(sndbtn);
	}
	//
	// TrackBar
	//
	private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton9->Checked) {
			this->Controls->Add(this->groupBox5);
		}
		else {
			this->Controls->Remove(this->groupBox5);
		}
	}
	private: System::Void trackBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		this->Size = System::Drawing::Size(this->trackBar2->Value * 100 + 4 * 192, this->trackBar1->Value * 50 + 4 * 108);
	}
	//
	// Timer
	//
	private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton10->Checked) {
			this->progressBar2->Value = 0;
			this->timer1->Enabled = true;
			this->Controls->Add(this->groupBox6);
		}
		else{
			this->timer1->Enabled = false;
			this->Controls->Remove(this->groupBox6);
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar2->Value += 1;
		this->label7->Text = String::Format("Прошло {0} миллисекунд", this->progressBar2->Value);
		if (this->progressBar2->Value == 100) {
			this->timer1->Enabled = false;
		}
	}
};
}
