#pragma once
#include "memento.h"


namespace memento_patternx_o_game {

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(43, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 66);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(124, 71);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 66);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(205, 71);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 66);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(43, 143);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 66);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(124, 143);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 66);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(205, 143);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 66);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(43, 215);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 66);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(124, 215);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 66);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(205, 215);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 66);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(188, 339);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(92, 45);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Undo";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 396);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

		game* game_;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		game_ = new game();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->client_step(0, 0);
	step();
}

		 public: void step()
		 {
			 board();
			 int g = game_->game_over();
			 switch (g)
			 {
			 case 1:
			 {
				 MessageBox::Show("you win!"); break;
			 }
			 case 2:
			 {
				 MessageBox::Show("you loose!"); break;
			 }
			 case 0:
			 {
				 MessageBox::Show("no winner!"); break;
			 }
			 }
			 if (g != -1) return;
			 game_->comp_step();
			 board();
			 g = game_->game_over();
			 switch (g)
			 {
			 case 1:
			 {
				 MessageBox::Show("you win!"); break;
			 }
			 case 2:
			 {
				 MessageBox::Show("you loose!"); break;
			 }
			 case 0:
			 {
				 MessageBox::Show("no winner!"); break;
			 }
			 }
		 }

		 public: void board()
		 {
			 int **cur = game_->get_game();
			 switch (cur[0][0])
			 {
			 case 0:
			 {
				 button1->Text = ""; button1->Enabled = true; break;
			 }
			 case 1:
			 {
				 button1->Text = "X"; button1->Enabled = false; break;
			 }
			 case 2:
			 {
				 button1->Text = "O"; button1->Enabled = false; break;
			 }
			 }


			 switch (cur[0][1])
			 {
			 case 0:
			 {
				 button2->Text = ""; button2->Enabled = true; break;
			 }
			 case 1:
			 {
				 button2->Text = "X"; button2->Enabled = false; break;
			 }
			 case 2:
			 {
				 button2->Text = "O"; button2->Enabled = false; break;
			 }
			 }

			 switch (cur[0][2])
			 {
			 case 0:
			 {
				 button3->Text = ""; button3->Enabled = true; break;
			 }
			 case 1:
			 {
				 button3->Text = "X"; button3->Enabled = false; break;
			 }
			 case 2:
			 {
				 button3->Text = "O"; button3->Enabled = false; break;
			 }
			 }


			 switch (cur[1][0])
			 {
			 case 0:
			 {
				 button4->Text = ""; button4->Enabled = true; break;
			 }
			 case 1:
			 {
				 button4->Text = "X"; button4->Enabled = false; break;
			 }
			 case 2:
			 {
				 button4->Text = "O"; button4->Enabled = false; break;
			 }
			 }


			 switch (cur[1][1])
			 {
			 case 0:
			 {
				 button5->Text = ""; button5->Enabled = true; break;
			 }
			 case 1:
			 {
				 button5->Text = "X"; button5->Enabled = false; break;
			 }
			 case 2:
			 {
				 button5->Text = "O"; button5->Enabled = false; break;
			 }
			 }

			 switch (cur[1][2])
			 {
			 case 0:
			 {
				 button6->Text = ""; button6->Enabled = true; break;
			 }
			 case 1:
			 {
				 button6->Text = "X"; button6->Enabled = false; break;
			 }
			 case 2:
			 {
				 button6->Text = "O"; button6->Enabled = false; break;
			 }
			 }




			 switch (cur[2][0])
			 {
			 case 0:
			 {
				 button7->Text = ""; button7->Enabled = true; break;
			 }
			 case 1:
			 {
				 button7->Text = "X"; button7->Enabled = false; break;
			 }
			 case 2:
			 {
				 button7->Text = "O"; button7->Enabled = false; break;
			 }
			 }


			 switch (cur[2][1])
			 {
			 case 0:
			 {
				 button8->Text = ""; button8->Enabled = true; break;
			 }
			 case 1:
			 {
				 button8->Text = "X"; button8->Enabled = false; break;
			 }
			 case 2:
			 {
				 button8->Text = "O"; button8->Enabled = false; break;
			 }
			 }

			 switch (cur[2][2])
			 {
			 case 0:
			 {
				 button9->Text = ""; button9->Enabled = true; break;
			 }
			 case 1:
			 {
				 button9->Text = "X"; button9->Enabled = false; break;
			 }
			 case 2:
			 {
				 button9->Text = "O"; button9->Enabled = false; break;
			 }
			 }
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->client_step(0, 1);
	step();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->client_step(0, 2);
	step();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->client_step(1, 0);
	step();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->client_step(1, 1);
	step();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->client_step(1, 2);
	step();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->client_step(2, 0);
	step();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->client_step(2, 1);
	step();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->client_step(2, 2);
	step();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
{
	game_->undo();
	board();
}
};
}
