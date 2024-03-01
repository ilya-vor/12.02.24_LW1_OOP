#pragma once

namespace LW1OOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SecondaryForm
	/// </summary>
	public ref class SecondaryForm : public System::Windows::Forms::Form
	{
	public:
		int formVis = 300;
		int formShir = 300;
		SecondaryForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SecondaryForm()
		{
			if (components)
			{
		/// <summary>
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(0, formVis / 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(formShir, formVis/2);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Исчезни!";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SecondaryForm::button2_Click);
			SetMaxFontSize(this->button2);
			// 
			// label2
			// 
			this->label2->AutoSize = false;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(formShir, formVis / 2);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Никак!";
			this->label2->TextAlign = ContentAlignment::TopCenter;
			int mxfntsz2 = GetMaxFontSize(label2, label2->Text);
			this->label2->Font = gcnew System::Drawing::Font(label2->Font->FontFamily, mxfntsz2);
			SetMaxFontSize(this->label2);
			// 
			// SecondaryForm
			// 
			this->ClientSize = System::Drawing::Size(formShir, formVis);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Name = L"SecondaryForm";
			this->Text = L"Ответ:";
			this->SizeChanged += gcnew System::EventHandler(this, &SecondaryForm::SecondaryForm_SizeChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void SetMaxFontSize(Control^ control) {
			String^ text = control->Text;
			int maxsize = GetMaxFontSize(control, text);
			control->Font = gcnew System::Drawing::Font(control->Font->FontFamily, maxsize);
		}
		// Функция для получения максимального размера шрифта для текста, который помещается в Label
		int GetMaxFontSize(Control^ control, String^ text)
		{
			Graphics^ g = control->CreateGraphics();
			SizeF maxSize(control->Width * 0.8, control->Height);

			for (int fontSize = 72; fontSize > 1; fontSize--)
			{
				System::Drawing::Font^ font = gcnew System::Drawing::Font(control->Font->FontFamily, fontSize);
				SizeF textSize = g->MeasureString(text, font);

				if (textSize.Width <= maxSize.Width && textSize.Height <= maxSize.Height)
				{
					delete font;
					delete g;
					return fontSize;
				}

				delete font;
			}

			delete g;
			return 1;
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void SecondaryForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Size size = this->ClientSize;
		this->formShir = size.Width;
		this->formVis = size.Height;
		this->button2->Location = Point(0, formVis / 2);
		this->button2->Size = Drawing::Size(formShir, formVis / 2);
		this->label2->Size = Drawing::Size(formShir, formVis / 2);
		SetMaxFontSize(this->label2);
		SetMaxFontSize(this->button2);

	}
	};
}
