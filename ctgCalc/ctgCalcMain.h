#pragma once
#include "ClassCtgCalc.h"
#include <math.h>

namespace ctgCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ctgCalcMain
	/// </summary>
	public ref class ctgCalcMain : public System::Windows::Forms::Form
	{
	public:
		ctgCalcMain(void)
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
		~ctgCalcMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_enter_recision;
	private: System::Windows::Forms::TextBox^ textBox_enter_x;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ result_label_arctg;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ result_label_sum;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ result_label_n;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ctgCalcMain::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_enter_recision = (gcnew System::Windows::Forms::TextBox());
			this->textBox_enter_x = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->result_label_arctg = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->result_label_sum = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->result_label_n = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(554, 106);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(45, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите точность 0<e<1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(353, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите аргумент Х";
			// 
			// textBox_enter_recision
			// 
			this->textBox_enter_recision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_enter_recision->Location = System::Drawing::Point(74, 162);
			this->textBox_enter_recision->Name = L"textBox_enter_recision";
			this->textBox_enter_recision->Size = System::Drawing::Size(105, 22);
			this->textBox_enter_recision->TabIndex = 3;
			this->textBox_enter_recision->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ctgCalcMain::textBox_enter_recision_KeyPress);
			// 
			// textBox_enter_x
			// 
			this->textBox_enter_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_enter_x->Location = System::Drawing::Point(370, 162);
			this->textBox_enter_x->Name = L"textBox_enter_x";
			this->textBox_enter_x->Size = System::Drawing::Size(105, 22);
			this->textBox_enter_x->TabIndex = 4;
			this->textBox_enter_x->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ctgCalcMain::textBox_enter_x_KeyPress);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(221, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 47);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ctgCalcMain::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(44, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Результат:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(44, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"arctg(x) =";
			// 
			// result_label_arctg
			// 
			this->result_label_arctg->AutoSize = true;
			this->result_label_arctg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label_arctg->ForeColor = System::Drawing::Color::Blue;
			this->result_label_arctg->Location = System::Drawing::Point(135, 269);
			this->result_label_arctg->Name = L"result_label_arctg";
			this->result_label_arctg->Size = System::Drawing::Size(19, 20);
			this->result_label_arctg->TabIndex = 8;
			this->result_label_arctg->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(44, 303);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Сумма ряда:";
			// 
			// result_label_sum
			// 
			this->result_label_sum->AutoSize = true;
			this->result_label_sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label_sum->ForeColor = System::Drawing::Color::Blue;
			this->result_label_sum->Location = System::Drawing::Point(165, 303);
			this->result_label_sum->Name = L"result_label_sum";
			this->result_label_sum->Size = System::Drawing::Size(19, 20);
			this->result_label_sum->TabIndex = 10;
			this->result_label_sum->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Blue;
			this->label8->Location = System::Drawing::Point(44, 336);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(228, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Количество членов ряда:";
			// 
			// result_label_n
			// 
			this->result_label_n->AutoSize = true;
			this->result_label_n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label_n->ForeColor = System::Drawing::Color::Blue;
			this->result_label_n->Location = System::Drawing::Point(278, 336);
			this->result_label_n->Name = L"result_label_n";
			this->result_label_n->Size = System::Drawing::Size(19, 20);
			this->result_label_n->TabIndex = 12;
			this->result_label_n->Text = L"0";
			// 
			// ctgCalcMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 375);
			this->Controls->Add(this->result_label_n);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->result_label_sum);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->result_label_arctg);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_enter_x);
			this->Controls->Add(this->textBox_enter_recision);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ctgCalcMain";
			this->Text = L"ctgCalcMain";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//входные переменные
		double enter_x;
		double enter_recision;

		
		
		enter_x = System::Convert::ToDouble(System::Convert::ToString(this->textBox_enter_x->Text));
		enter_recision = System::Convert::ToDouble(System::Convert::ToString(this->textBox_enter_recision->Text));

		if(fabs(enter_x) <= 1 && enter_recision < 1 && enter_recision>0)
		{
			//основной код решения
			ClassCtgCalc ctgcalc;

			ctgcalc.SET_X(enter_x);
			ctgcalc.SET_precision(enter_recision);
			ctgcalc.Calc();
			this->result_label_arctg->Text = System::Convert::ToString(ctgcalc.AtanX());
			this->result_label_sum->Text = System::Convert::ToString(ctgcalc.GET_result());
			this->result_label_n->Text = System::Convert::ToString(ctgcalc.GET_n());

			this->textBox_enter_x->BackColor = Color::White;
			this->textBox_enter_recision->BackColor = Color::White;
			
		}
		else
		{   //выполняется при вводе некорректных значений
			if(!(fabs(enter_x) <= 1))
			{
				this->textBox_enter_x->BackColor= Color::Red;
			}
			if( !(enter_recision < 1) ||  !(enter_recision > 0)  )
			{
				this->textBox_enter_recision->BackColor = Color::Red;
			}
			String^ msg = "Вы ввели некорректные значения";
			String^ caption = "Ошибка: ввод некорректных значений";
			MessageBox::Show(this, msg, caption, MessageBoxButtons::OK, MessageBoxIcon::Error);
			
		}
		
		
		
		
		
	}
private: System::Void textBox_enter_recision_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == '.' || e->KeyChar == 8)
	{
	}
	else
	{
		e->Handled = true;
	}

	if (this -> textBox_enter_recision ->Text ->Length > 0 &&  this -> textBox_enter_x -> Text -> Length > 0)
	{
		this->button1->Enabled = true;
	}
	else
	{
		this->button1->Enabled = false;
	}
	
	
}
private: System::Void textBox_enter_x_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == '.' || e->KeyChar == '-' || e->KeyChar == 8)
	{
		
	}
	else
	{
		e->Handled = true;
	}
	if (this->textBox_enter_recision->Text->Length > 0 && this->textBox_enter_x->Text->Length > 0)
	{
		this->button1->Enabled = true;
	}
	else
	{
		this->button1->Enabled = false;
	}
		
}
	
};
}
