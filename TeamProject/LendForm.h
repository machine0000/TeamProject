#pragma once
//#include "class.h"
#include <msclr/marshal_cppstd.h>


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
			this->SuspendLayout();
			// 
			// l_b_return
			// 
			this->l_b_return->Location = System::Drawing::Point(169, 294);
			this->l_b_return->Name = L"l_b_return";
			this->l_b_return->Size = System::Drawing::Size(75, 23);
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
			this->l_l_title->Location = System::Drawing::Point(12, 57);
			this->l_l_title->Name = L"l_l_title";
			this->l_l_title->Size = System::Drawing::Size(172, 16);
			this->l_l_title->TabIndex = 1;
			this->l_l_title->Text = L"図書の貸し出し状況確認";
			this->l_l_title->Click += gcnew System::EventHandler(this, &LendForm::label1_Click);
			// 
			// l_l_lendbook1
			// 
			this->l_l_lendbook1->AutoSize = true;
			this->l_l_lendbook1->Location = System::Drawing::Point(158, 97);
			this->l_l_lendbook1->Name = L"l_l_lendbook1";
			this->l_l_lendbook1->Size = System::Drawing::Size(0, 12);
			this->l_l_lendbook1->TabIndex = 3;
			// 
			// l_l_returnday1
			// 
			this->l_l_returnday1->AutoSize = true;
			this->l_l_returnday1->Location = System::Drawing::Point(74, 126);
			this->l_l_returnday1->Name = L"l_l_returnday1";
			this->l_l_returnday1->Size = System::Drawing::Size(47, 12);
			this->l_l_returnday1->TabIndex = 4;
			this->l_l_returnday1->Text = L"返却日：";
			this->l_l_returnday1->Visible = false;
			// 
			// l_l_booktitle2
			// 
			this->l_l_booktitle2->AutoSize = true;
			this->l_l_booktitle2->Location = System::Drawing::Point(53, 164);
			this->l_l_booktitle2->Name = L"l_l_booktitle2";
			this->l_l_booktitle2->Size = System::Drawing::Size(68, 12);
			this->l_l_booktitle2->TabIndex = 5;
			this->l_l_booktitle2->Text = L"本のタイトル：";
			this->l_l_booktitle2->Visible = false;
			// 
			// l_l_booktitle3
			// 
			this->l_l_booktitle3->AutoSize = true;
			this->l_l_booktitle3->Location = System::Drawing::Point(53, 232);
			this->l_l_booktitle3->Name = L"l_l_booktitle3";
			this->l_l_booktitle3->Size = System::Drawing::Size(68, 12);
			this->l_l_booktitle3->TabIndex = 6;
			this->l_l_booktitle3->Text = L"本のタイトル：";
			this->l_l_booktitle3->Visible = false;
			// 
			// l_l_returnday2
			// 
			this->l_l_returnday2->AutoSize = true;
			this->l_l_returnday2->Location = System::Drawing::Point(74, 192);
			this->l_l_returnday2->Name = L"l_l_returnday2";
			this->l_l_returnday2->Size = System::Drawing::Size(47, 12);
			this->l_l_returnday2->TabIndex = 7;
			this->l_l_returnday2->Text = L"返却日：";
			this->l_l_returnday2->Visible = false;
			// 
			// l_l_returnday3
			// 
			this->l_l_returnday3->AutoSize = true;
			this->l_l_returnday3->Location = System::Drawing::Point(74, 256);
			this->l_l_returnday3->Name = L"l_l_returnday3";
			this->l_l_returnday3->Size = System::Drawing::Size(47, 12);
			this->l_l_returnday3->TabIndex = 8;
			this->l_l_returnday3->Text = L"返却日：";
			this->l_l_returnday3->Visible = false;
			// 
			// l_l_day1
			// 
			this->l_l_day1->AutoSize = true;
			this->l_l_day1->Location = System::Drawing::Point(158, 164);
			this->l_l_day1->Name = L"l_l_day1";
			this->l_l_day1->Size = System::Drawing::Size(0, 12);
			this->l_l_day1->TabIndex = 9;
			// 
			// l_l_lendbook2
			// 
			this->l_l_lendbook2->AutoSize = true;
			this->l_l_lendbook2->Location = System::Drawing::Point(158, 126);
			this->l_l_lendbook2->Name = L"l_l_lendbook2";
			this->l_l_lendbook2->Size = System::Drawing::Size(0, 12);
			this->l_l_lendbook2->TabIndex = 10;
			// 
			// l_l_day2
			// 
			this->l_l_day2->AutoSize = true;
			this->l_l_day2->Location = System::Drawing::Point(158, 192);
			this->l_l_day2->Name = L"l_l_day2";
			this->l_l_day2->Size = System::Drawing::Size(0, 12);
			this->l_l_day2->TabIndex = 11;
			// 
			// l_l_lendbook3
			// 
			this->l_l_lendbook3->AutoSize = true;
			this->l_l_lendbook3->Location = System::Drawing::Point(158, 232);
			this->l_l_lendbook3->Name = L"l_l_lendbook3";
			this->l_l_lendbook3->Size = System::Drawing::Size(0, 12);
			this->l_l_lendbook3->TabIndex = 12;
			// 
			// l_l_day3
			// 
			this->l_l_day3->AutoSize = true;
			this->l_l_day3->Location = System::Drawing::Point(158, 256);
			this->l_l_day3->Name = L"l_l_day3";
			this->l_l_day3->Size = System::Drawing::Size(0, 12);
			this->l_l_day3->TabIndex = 13;
			// 
			// le_l_copyright
			// 
			this->le_l_copyright->BackColor = System::Drawing::Color::Peru;
			this->le_l_copyright->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->le_l_copyright->Location = System::Drawing::Point(-1, 337);
			this->le_l_copyright->Name = L"le_l_copyright";
			this->le_l_copyright->Size = System::Drawing::Size(426, 27);
			this->le_l_copyright->TabIndex = 15;
			this->le_l_copyright->Text = L"copyright";
			this->le_l_copyright->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_l_booktitle1
			// 
			this->l_l_booktitle1->AutoSize = true;
			this->l_l_booktitle1->Location = System::Drawing::Point(53, 97);
			this->l_l_booktitle1->Name = L"l_l_booktitle1";
			this->l_l_booktitle1->Size = System::Drawing::Size(68, 12);
			this->l_l_booktitle1->TabIndex = 2;
			this->l_l_booktitle1->Text = L"本のタイトル：";
			this->l_l_booktitle1->Visible = false;
			// 
			// le_l_header
			// 
			this->le_l_header->BackColor = System::Drawing::Color::Peru;
			this->le_l_header->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->le_l_header->Location = System::Drawing::Point(-3, 0);
			this->le_l_header->Name = L"le_l_header";
			this->le_l_header->Size = System::Drawing::Size(428, 44);
			this->le_l_header->TabIndex = 17;
			this->le_l_header->Text = L"図書貸し出しシステム";
			this->le_l_header->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// l_l_not
			// 
			this->l_l_not->AutoSize = true;
			this->l_l_not->Location = System::Drawing::Point(133, 180);
			this->l_l_not->Name = L"l_l_not";
			this->l_l_not->Size = System::Drawing::Size(122, 12);
			this->l_l_not->TabIndex = 18;
			this->l_l_not->Text = L"借りている本はありません";
			this->l_l_not->Visible = false;
			// 
			// LendForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 363);
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
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LendForm";
			this->Text = L"LendForm";
			this->Load += gcnew System::EventHandler(this, &LendForm::LendForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Reset() {//labelを初期化する関数
			this->l_l_booktitle1->Visible = false;
			this->l_l_returnday1->Visible = false;
			this->l_l_lendbook1->Text = "";
			this->l_l_day1->Text = "";
			this->l_l_booktitle2->Visible = false;
			this->l_l_returnday2->Visible = false;
			this->l_l_lendbook2->Text = "";
			this->l_l_day2->Text = "";
			this->l_l_booktitle3->Visible = false;
			this->l_l_returnday3->Visible = false;
			this->l_l_lendbook3->Text = "";
			this->l_l_day3->Text = "";
			this->l_l_not->Visible = false;
		}

	private: System::Void Showbookday(int booknum) {//借りている冊数に応じてlabelに値を入れ表示する関数
		switch (booknum) {
		case 3:
			this->l_l_booktitle3->Visible = true;
			this->l_l_returnday3->Visible = true;
			//this->l_l_lendbook3->Text = msclr::interop::marshal_as<System::String^>(user.lib[2]);
			//this->l_l_day3->Text = msclr::interop::marshal_as<System::String^>(user.rday[2]);
		case 2:
			this->l_l_booktitle2->Visible = true;
			this->l_l_returnday2->Visible = true;
			//this->l_l_lendbook2->Text = msclr::interop::marshal_as<System::String^>(user.lib[1]);
			//this->l_l_day2->Text = msclr::interop::marshal_as<System::String^>(user.rday[1]);
		case 1:
			this->l_l_booktitle1->Visible = true;
			this->l_l_returnday1->Visible = true;
			//this->l_l_lendbook1->Text = msclr::interop::marshal_as<System::String^>(user.lib[0]);
			//this->l_l_day1->Text = msclr::interop::marshal_as<System::String^>(user.rday[0]);
			break;
		default :
			this->l_l_not->Visible = true;
			break;
		}
	}

	
	private: System::Void LendForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Reset();
		//Showbookday(user.count);
	}

	private: System::Void l_b_return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}



};
}
