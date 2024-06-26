#pragma once
#include "class.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <chrono>
#include <ctime>


namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// LendForm の概要
	/// </summary>
	public ref class LendForm : public System::Windows::Forms::Form
	{
	public:
		LendForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~LendForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ l_b_return;
	protected:

	private: System::Windows::Forms::Label^ l_l_title;

	private: System::Windows::Forms::Label^ l_l_lendbook1;


	private: System::Windows::Forms::Label^ l_l_returnday1;
	private: System::Windows::Forms::Label^ l_l_booktitle2;
	private: System::Windows::Forms::Label^ l_l_booktitle3;
	private: System::Windows::Forms::Label^ l_l_returnday2;
	private: System::Windows::Forms::Label^ l_l_returnday3;
	private: System::Windows::Forms::Label^ l_l_day1;

	private: System::Windows::Forms::Label^ l_l_lendbook2;
	private: System::Windows::Forms::Label^ l_l_day2;


	private: System::Windows::Forms::Label^ l_l_lendbook3;
	private: System::Windows::Forms::Label^ l_l_day3;
	private: System::Windows::Forms::Label^ le_l_copyright;


	private: System::Windows::Forms::Label^ l_l_booktitle1;
	private: System::Windows::Forms::Label^ le_l_header;
	private: System::Windows::Forms::Label^ l_l_not;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;







	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->l_b_return = (gcnew System::Windows::Forms::Button());
			this->l_l_title = (gcnew System::Windows::Forms::Label());
			this->l_l_lendbook1 = (gcnew System::Windows::Forms::Label());
			this->l_l_returnday1 = (gcnew System::Windows::Forms::Label());
			this->l_l_booktitle2 = (gcnew System::Windows::Forms::Label());
			this->l_l_booktitle3 = (gcnew System::Windows::Forms::Label());
			this->l_l_returnday2 = (gcnew System::Windows::Forms::Label());
			this->l_l_returnday3 = (gcnew System::Windows::Forms::Label());
			this->l_l_day1 = (gcnew System::Windows::Forms::Label());
			this->l_l_lendbook2 = (gcnew System::Windows::Forms::Label());
			this->l_l_day2 = (gcnew System::Windows::Forms::Label());
			this->l_l_lendbook3 = (gcnew System::Windows::Forms::Label());
			this->l_l_day3 = (gcnew System::Windows::Forms::Label());
			this->le_l_copyright = (gcnew System::Windows::Forms::Label());
			this->l_l_booktitle1 = (gcnew System::Windows::Forms::Label());
			this->le_l_header = (gcnew System::Windows::Forms::Label());
			this->l_l_not = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// l_b_return
			// 
			this->l_b_return->Location = System::Drawing::Point(225, 368);
			this->l_b_return->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->l_b_return->Name = L"l_b_return";
			this->l_b_return->Size = System::Drawing::Size(100, 29);
			this->l_b_return->TabIndex = 0;
			this->l_b_return->Text = L"戻る";
			this->l_b_return->UseVisualStyleBackColor = true;
			this->l_b_return->Click += gcnew System::EventHandler(this, &LendForm::l_b_return_Click);
			// 
			// l_l_title
			// 
			this->l_l_title->AutoSize = true;
			this->l_l_title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_l_title->Location = System::Drawing::Point(16, 71);
			this->l_l_title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_title->Name = L"l_l_title";
			this->l_l_title->Size = System::Drawing::Size(213, 20);
			this->l_l_title->TabIndex = 1;
			this->l_l_title->Text = L"図書の貸し出し状況確認";
			this->l_l_title->Click += gcnew System::EventHandler(this, &LendForm::label1_Click);
			// 
			// l_l_lendbook1
			// 
			this->l_l_lendbook1->AutoSize = true;
			this->l_l_lendbook1->Location = System::Drawing::Point(211, 121);
			this->l_l_lendbook1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_lendbook1->Name = L"l_l_lendbook1";
			this->l_l_lendbook1->Size = System::Drawing::Size(21, 15);
			this->l_l_lendbook1->TabIndex = 3;
			this->l_l_lendbook1->Text = L"aa";
			// 
			// l_l_returnday1
			// 
			this->l_l_returnday1->AutoSize = true;
			this->l_l_returnday1->Location = System::Drawing::Point(99, 158);
			this->l_l_returnday1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_returnday1->Name = L"l_l_returnday1";
			this->l_l_returnday1->Size = System::Drawing::Size(60, 15);
			this->l_l_returnday1->TabIndex = 4;
			this->l_l_returnday1->Text = L"返却日：";
			this->l_l_returnday1->Visible = false;
			// 
			// l_l_booktitle2
			// 
			this->l_l_booktitle2->AutoSize = true;
			this->l_l_booktitle2->Location = System::Drawing::Point(71, 205);
			this->l_l_booktitle2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_booktitle2->Name = L"l_l_booktitle2";
			this->l_l_booktitle2->Size = System::Drawing::Size(86, 15);
			this->l_l_booktitle2->TabIndex = 5;
			this->l_l_booktitle2->Text = L"本のタイトル：";
			this->l_l_booktitle2->Visible = false;
			// 
			// l_l_booktitle3
			// 
			this->l_l_booktitle3->AutoSize = true;
			this->l_l_booktitle3->Location = System::Drawing::Point(71, 290);
			this->l_l_booktitle3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_booktitle3->Name = L"l_l_booktitle3";
			this->l_l_booktitle3->Size = System::Drawing::Size(86, 15);
			this->l_l_booktitle3->TabIndex = 6;
			this->l_l_booktitle3->Text = L"本のタイトル：";
			this->l_l_booktitle3->Visible = false;
			// 
			// l_l_returnday2
			// 
			this->l_l_returnday2->AutoSize = true;
			this->l_l_returnday2->Location = System::Drawing::Point(99, 240);
			this->l_l_returnday2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_returnday2->Name = L"l_l_returnday2";
			this->l_l_returnday2->Size = System::Drawing::Size(60, 15);
			this->l_l_returnday2->TabIndex = 7;
			this->l_l_returnday2->Text = L"返却日：";
			this->l_l_returnday2->Visible = false;
			// 
			// l_l_returnday3
			// 
			this->l_l_returnday3->AutoSize = true;
			this->l_l_returnday3->Location = System::Drawing::Point(99, 320);
			this->l_l_returnday3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_returnday3->Name = L"l_l_returnday3";
			this->l_l_returnday3->Size = System::Drawing::Size(60, 15);
			this->l_l_returnday3->TabIndex = 8;
			this->l_l_returnday3->Text = L"返却日：";
			this->l_l_returnday3->Visible = false;
			// 
			// l_l_day1
			// 
			this->l_l_day1->AutoSize = true;
			this->l_l_day1->Location = System::Drawing::Point(211, 158);
			this->l_l_day1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_day1->Name = L"l_l_day1";
			this->l_l_day1->Size = System::Drawing::Size(28, 15);
			this->l_l_day1->TabIndex = 9;
			this->l_l_day1->Text = L"aaa";
			// 
			// l_l_lendbook2
			// 
			this->l_l_lendbook2->AutoSize = true;
			this->l_l_lendbook2->Location = System::Drawing::Point(211, 205);
			this->l_l_lendbook2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_lendbook2->Name = L"l_l_lendbook2";
			this->l_l_lendbook2->Size = System::Drawing::Size(28, 15);
			this->l_l_lendbook2->TabIndex = 10;
			this->l_l_lendbook2->Text = L"aaa";
			// 
			// l_l_day2
			// 
			this->l_l_day2->AutoSize = true;
			this->l_l_day2->Location = System::Drawing::Point(211, 240);
			this->l_l_day2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_day2->Name = L"l_l_day2";
			this->l_l_day2->Size = System::Drawing::Size(21, 15);
			this->l_l_day2->TabIndex = 11;
			this->l_l_day2->Text = L"aa";
			// 
			// l_l_lendbook3
			// 
			this->l_l_lendbook3->AutoSize = true;
			this->l_l_lendbook3->Location = System::Drawing::Point(211, 290);
			this->l_l_lendbook3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_lendbook3->Name = L"l_l_lendbook3";
			this->l_l_lendbook3->Size = System::Drawing::Size(21, 15);
			this->l_l_lendbook3->TabIndex = 12;
			this->l_l_lendbook3->Text = L"aa";
			// 
			// l_l_day3
			// 
			this->l_l_day3->AutoSize = true;
			this->l_l_day3->Location = System::Drawing::Point(211, 320);
			this->l_l_day3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_day3->Name = L"l_l_day3";
			this->l_l_day3->Size = System::Drawing::Size(21, 15);
			this->l_l_day3->TabIndex = 13;
			this->l_l_day3->Text = L"aa";
			// 
			// le_l_copyright
			// 
			this->le_l_copyright->BackColor = System::Drawing::Color::Peru;
			this->le_l_copyright->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->le_l_copyright->Location = System::Drawing::Point(-1, 421);
			this->le_l_copyright->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->le_l_copyright->Name = L"le_l_copyright";
			this->le_l_copyright->Size = System::Drawing::Size(568, 34);
			this->le_l_copyright->TabIndex = 15;
			this->le_l_copyright->Text = L"copyright";
			this->le_l_copyright->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_l_booktitle1
			// 
			this->l_l_booktitle1->AutoSize = true;
			this->l_l_booktitle1->Location = System::Drawing::Point(71, 121);
			this->l_l_booktitle1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_booktitle1->Name = L"l_l_booktitle1";
			this->l_l_booktitle1->Size = System::Drawing::Size(86, 15);
			this->l_l_booktitle1->TabIndex = 2;
			this->l_l_booktitle1->Text = L"本のタイトル：";
			this->l_l_booktitle1->Visible = false;
			// 
			// le_l_header
			// 
			this->le_l_header->BackColor = System::Drawing::Color::Peru;
			this->le_l_header->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->le_l_header->Location = System::Drawing::Point(-4, 0);
			this->le_l_header->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->le_l_header->Name = L"le_l_header";
			this->le_l_header->Size = System::Drawing::Size(571, 55);
			this->le_l_header->TabIndex = 17;
			this->le_l_header->Text = L"図書貸し出しシステム";
			this->le_l_header->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// l_l_not
			// 
			this->l_l_not->AutoSize = true;
			this->l_l_not->Location = System::Drawing::Point(177, 225);
			this->l_l_not->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->l_l_not->Name = L"l_l_not";
			this->l_l_not->Size = System::Drawing::Size(151, 15);
			this->l_l_not->TabIndex = 18;
			this->l_l_not->Text = L"借りている本はありません";
			this->l_l_not->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(193, 172);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 15);
			this->label1->TabIndex = 19;
			this->label1->Text = L"返却日を過ぎています";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(193, 275);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 15);
			this->label2->TabIndex = 20;
			this->label2->Text = L"返却日を過ぎています";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(193, 349);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 15);
			this->label3->TabIndex = 21;
			this->label3->Text = L"返却日を過ぎています";
			this->label3->Visible = false;
			// 
			// LendForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 454);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->l_l_not);
			this->Controls->Add(this->le_l_header);
			this->Controls->Add(this->le_l_copyright);
			this->Controls->Add(this->l_l_day3);
			this->Controls->Add(this->l_l_lendbook3);
			this->Controls->Add(this->l_l_day2);
			this->Controls->Add(this->l_l_lendbook2);
			this->Controls->Add(this->l_l_day1);
			this->Controls->Add(this->l_l_returnday3);
			this->Controls->Add(this->l_l_returnday2);
			this->Controls->Add(this->l_l_booktitle3);
			this->Controls->Add(this->l_l_booktitle2);
			this->Controls->Add(this->l_l_returnday1);
			this->Controls->Add(this->l_l_lendbook1);
			this->Controls->Add(this->l_l_booktitle1);
			this->Controls->Add(this->l_l_title);
			this->Controls->Add(this->l_b_return);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LendForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LendForm";
			this->Load += gcnew System::EventHandler(this, &LendForm::LendForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//labelを初期化する関数
		 void Reset() {
			this->l_l_booktitle1->Visible = false;
			this->l_l_returnday1->Visible = false;
			this->l_l_lendbook1->Text = "";
			this->l_l_day1->Text = "";
			this->label1->Visible = false;
			this->l_l_booktitle2->Visible = false;
			this->l_l_returnday2->Visible = false;
			this->l_l_lendbook2->Text = "";
			this->l_l_day2->Text = "";
			this->label2->Visible = false;
			this->l_l_booktitle3->Visible = false;
			this->l_l_returnday3->Visible = false;
			this->l_l_lendbook3->Text = "";
			this->l_l_day3->Text = "";
			this->label3->Visible = false;
			this->l_l_not->Visible = false;
		}

		 //tm型をstring型に変換する関数
		 string Day(int d) {
			
			 
			 char buffer[80];
			 strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &user[usernum].rday[d]);
			 string datetimeString(buffer);
			 return datetimeString;
		 }

		 //借りている冊数に応じてlabelに値を入れ表示する関数
	void Showbookday(int booknum) {
		time_t t = time(nullptr);
		tm* now = localtime(&t);
		string day;
		switch (booknum) {
		case 3:
			this->l_l_booktitle3->Visible = true;
			this->l_l_returnday3->Visible = true;
			this->l_l_lendbook3->Text = msclr::interop::marshal_as<System::String^>(user[usernum].lendname[2]);
			this->l_l_day3->Text = msclr::interop::marshal_as<System::String^>(day = Day(2));
			if (mktime(now) > mktime(&user[usernum].rday[2])) {
				this->label3->Visible = true;
			}
		case 2:
			this->l_l_booktitle2->Visible = true;
			this->l_l_returnday2->Visible = true;
			this->l_l_lendbook2->Text = msclr::interop::marshal_as<System::String^>(user[usernum].lendname[1]);
			this->l_l_day2->Text = msclr::interop::marshal_as<System::String^>(day = Day(1));
			if (mktime(now) > mktime(&user[usernum].rday[1])) {
				this->label2->Visible = true;
			}
		case 1:
			this->l_l_booktitle1->Visible = true;
			this->l_l_returnday1->Visible = true;
			this->l_l_lendbook1->Text = msclr::interop::marshal_as<System::String^>(user[usernum].lendname[0]);
			this->l_l_day1->Text = msclr::interop::marshal_as<System::String^>(day = Day(0));
			if (mktime(now) > mktime(&user[usernum].rday[0])) {
				this->label1->Visible = true;
			}
			break;
		default :
			this->l_l_not->Visible = true;
			break;
		}
	}

	
	private: System::Void LendForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		Reset();
		Showbookday(user[usernum].books);
	}

	private: System::Void l_b_return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}



};
}
