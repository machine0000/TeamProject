#pragma once
#include "class.h"
#include <stdio.h>
#include <string.h>
#include <string>
#include <msclr/marshal_cppstd.h>

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// book_detail_form の概要
	/// </summary>
	public ref class book_detail_form : public System::Windows::Forms::Form
	{
	public:
		book_detail_form(void)
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
		~book_detail_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ l_d_header;
	private: System::Windows::Forms::Label^ l_d_copyright;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ l_d_syousai;
	private: System::Windows::Forms::Label^ l_d_title;
	private: System::Windows::Forms::Label^ l_d_genre;
	private: System::Windows::Forms::Label^ l_d_company;
	private: System::Windows::Forms::Label^ l_d_author;
	private: System::Windows::Forms::Label^ l_d_t;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ l_d_back;















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
			this->l_d_header = (gcnew System::Windows::Forms::Label());
			this->l_d_copyright = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->l_d_syousai = (gcnew System::Windows::Forms::Label());
			this->l_d_title = (gcnew System::Windows::Forms::Label());
			this->l_d_genre = (gcnew System::Windows::Forms::Label());
			this->l_d_company = (gcnew System::Windows::Forms::Label());
			this->l_d_author = (gcnew System::Windows::Forms::Label());
			this->l_d_t = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->l_d_back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// l_d_header
			// 
			this->l_d_header->BackColor = System::Drawing::Color::Peru;
			this->l_d_header->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_d_header->Location = System::Drawing::Point(1, -1);
			this->l_d_header->Name = L"l_d_header";
			this->l_d_header->Size = System::Drawing::Size(1282, 67);
			this->l_d_header->TabIndex = 0;
			this->l_d_header->Text = L"図書貸し出しシステム";
			this->l_d_header->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// l_d_copyright
			// 
			this->l_d_copyright->BackColor = System::Drawing::Color::Peru;
			this->l_d_copyright->Location = System::Drawing::Point(-4, 760);
			this->l_d_copyright->Name = L"l_d_copyright";
			this->l_d_copyright->Size = System::Drawing::Size(857, 43);
			this->l_d_copyright->TabIndex = 1;
			this->l_d_copyright->Text = L"Copyright(C)";
			this->l_d_copyright->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(213, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 15);
			this->label3->TabIndex = 2;
			// 
			// l_d_syousai
			// 
			this->l_d_syousai->AutoSize = true;
			this->l_d_syousai->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_d_syousai->Location = System::Drawing::Point(25, 84);
			this->l_d_syousai->Name = L"l_d_syousai";
			this->l_d_syousai->Size = System::Drawing::Size(89, 20);
			this->l_d_syousai->TabIndex = 4;
			this->l_d_syousai->Text = L"図書詳細";
			// 
			// l_d_title
			// 
			this->l_d_title->AccessibleDescription = L"";
			this->l_d_title->BackColor = System::Drawing::Color::White;
			this->l_d_title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_d_title->Location = System::Drawing::Point(216, 136);
			this->l_d_title->Name = L"l_d_title";
			this->l_d_title->Size = System::Drawing::Size(546, 235);
			this->l_d_title->TabIndex = 5;
			// 
			// l_d_genre
			// 
			this->l_d_genre->BackColor = System::Drawing::Color::White;
			this->l_d_genre->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_d_genre->Location = System::Drawing::Point(216, 409);
			this->l_d_genre->Name = L"l_d_genre";
			this->l_d_genre->Size = System::Drawing::Size(546, 51);
			this->l_d_genre->TabIndex = 6;
			// 
			// l_d_company
			// 
			this->l_d_company->BackColor = System::Drawing::Color::White;
			this->l_d_company->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_d_company->Location = System::Drawing::Point(219, 513);
			this->l_d_company->Name = L"l_d_company";
			this->l_d_company->Size = System::Drawing::Size(543, 49);
			this->l_d_company->TabIndex = 7;
			// 
			// l_d_author
			// 
			this->l_d_author->BackColor = System::Drawing::Color::White;
			this->l_d_author->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_d_author->Location = System::Drawing::Point(213, 610);
			this->l_d_author->Name = L"l_d_author";
			this->l_d_author->Size = System::Drawing::Size(549, 49);
			this->l_d_author->TabIndex = 8;
			// 
			// l_d_t
			// 
			this->l_d_t->AccessibleDescription = L"";
			this->l_d_t->AutoSize = true;
			this->l_d_t->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_d_t->Location = System::Drawing::Point(80, 145);
			this->l_d_t->Name = L"l_d_t";
			this->l_d_t->Size = System::Drawing::Size(67, 20);
			this->l_d_t->TabIndex = 9;
			this->l_d_t->Text = L"タイトル";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(77, 418);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"ジャンル";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(77, 522);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"出版社";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label6->Location = System::Drawing::Point(77, 619);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"著者";
			// 
			// l_d_back
			// 
			this->l_d_back->Location = System::Drawing::Point(713, 690);
			this->l_d_back->Name = L"l_d_back";
			this->l_d_back->Size = System::Drawing::Size(92, 40);
			this->l_d_back->TabIndex = 13;
			this->l_d_back->Text = L"戻る";
			this->l_d_back->UseVisualStyleBackColor = true;
			this->l_d_back->Click += gcnew System::EventHandler(this, &book_detail_form::l_d_back_Click);
			// 
			// book_detail_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 803);
			this->Controls->Add(this->l_d_title);
			this->Controls->Add(this->l_d_back);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->l_d_t);
			this->Controls->Add(this->l_d_author);
			this->Controls->Add(this->l_d_company);
			this->Controls->Add(this->l_d_genre);
			this->Controls->Add(this->l_d_syousai);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->l_d_copyright);
			this->Controls->Add(this->l_d_header);
			this->Name = L"book_detail_form";
			this->Text = L"詳細";
			this->Load += gcnew System::EventHandler(this, &book_detail_form::book_detail_form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void l_d_back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void book_detail_form_Load(System::Object^ sender, System::EventArgs^ e) {

	if (selectgenre == "ジャンルを選択") {
		l_d_title->Text = msclr::interop::marshal_as<System::String^>(lib[(page - 1)* 10 + lnum].title);
		l_d_genre->Text = msclr::interop::marshal_as<System::String^>(lib[(page - 1) * 10 + lnum].genre);
		l_d_company->Text = msclr::interop::marshal_as<System::String^>(lib[(page - 1) * 10 + lnum].pub);
		l_d_author->Text = msclr::interop::marshal_as<System::String^>(lib[(page - 1) * 10 + lnum].writer);
	}
	else {
		l_d_title->Text = msclr::interop::marshal_as<System::String^>(gen[(page - 1) * 10 + lnum].title);
		l_d_genre->Text = msclr::interop::marshal_as<System::String^>(gen[(page - 1) * 10 + lnum].genre);
		l_d_company->Text = msclr::interop::marshal_as<System::String^>(gen[(page - 1) * 10 + lnum].pub);
		l_d_author->Text = msclr::interop::marshal_as<System::String^>(gen[(page - 1) * 10 + lnum].writer);
	}

	//this->l_d_title->Text = "あああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああ";

	if (l_d_title->Text->Length > 300) {
		this->Height = 800;
		l_d_back->Top = 680;
		l_d_copyright->Top = 727;
		l_d_author->Top = 620;
		label6->Top = 625;
		l_d_company->Top = 550;
		label5->Top = 555;
		l_d_genre->Top = 480;
		label4->Top = 485;
		l_d_title->Height = 350;
	}
}
};
}
