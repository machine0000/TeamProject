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
	public ref class Book_detail_form : public System::Windows::Forms::Form
	{
	public:
		Book_detail_form(void)
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
		~Book_detail_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ l_b_header;
	protected:

	private: System::Windows::Forms::Label^ l_b_copyright;

	protected:

	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ l_b_syousai;


	private: System::Windows::Forms::Label^ l_b_title;
	private: System::Windows::Forms::Label^ l_b_genre;
	private: System::Windows::Forms::Label^ l_b_company;
	private: System::Windows::Forms::Label^ l_b_author;
	private: System::Windows::Forms::Label^ l_b_t;
	private: System::Windows::Forms::Label^ l_b_j;
	private: System::Windows::Forms::Label^ l_b_c;
	private: System::Windows::Forms::Label^ l_b_a;










	private: System::Windows::Forms::Button^ b_b_back;

















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
			this->l_b_header = (gcnew System::Windows::Forms::Label());
			this->l_b_copyright = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->l_b_syousai = (gcnew System::Windows::Forms::Label());
			this->l_b_title = (gcnew System::Windows::Forms::Label());
			this->l_b_genre = (gcnew System::Windows::Forms::Label());
			this->l_b_company = (gcnew System::Windows::Forms::Label());
			this->l_b_author = (gcnew System::Windows::Forms::Label());
			this->l_b_t = (gcnew System::Windows::Forms::Label());
			this->l_b_j = (gcnew System::Windows::Forms::Label());
			this->l_b_c = (gcnew System::Windows::Forms::Label());
			this->l_b_a = (gcnew System::Windows::Forms::Label());
			this->b_b_back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// l_b_header
			// 
			this->l_b_header->BackColor = System::Drawing::Color::Peru;
			this->l_b_header->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_header->Location = System::Drawing::Point(1, -1);
			this->l_b_header->Name = L"l_b_header";
			this->l_b_header->Size = System::Drawing::Size(1282, 67);
			this->l_b_header->TabIndex = 0;
			this->l_b_header->Text = L"図書貸し出しシステム";
			this->l_b_header->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// l_b_copyright
			// 
			this->l_b_copyright->BackColor = System::Drawing::Color::Peru;
			this->l_b_copyright->Location = System::Drawing::Point(-4, 760);
			this->l_b_copyright->Name = L"l_b_copyright";
			this->l_b_copyright->Size = System::Drawing::Size(857, 43);
			this->l_b_copyright->TabIndex = 1;
			this->l_b_copyright->Text = L"Copyright(C)";
			this->l_b_copyright->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(213, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 15);
			this->label3->TabIndex = 2;
			// 
			// l_b_syousai
			// 
			this->l_b_syousai->AutoSize = true;
			this->l_b_syousai->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_syousai->Location = System::Drawing::Point(25, 84);
			this->l_b_syousai->Name = L"l_b_syousai";
			this->l_b_syousai->Size = System::Drawing::Size(89, 20);
			this->l_b_syousai->TabIndex = 4;
			this->l_b_syousai->Text = L"図書詳細";
			// 
			// l_b_title
			// 
			this->l_b_title->AccessibleDescription = L"";
			this->l_b_title->BackColor = System::Drawing::Color::White;
			this->l_b_title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_title->Location = System::Drawing::Point(216, 136);
			this->l_b_title->Name = L"l_b_title";
			this->l_b_title->Size = System::Drawing::Size(546, 235);
			this->l_b_title->TabIndex = 5;
			// 
			// l_b_genre
			// 
			this->l_b_genre->BackColor = System::Drawing::Color::White;
			this->l_b_genre->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_genre->Location = System::Drawing::Point(216, 409);
			this->l_b_genre->Name = L"l_b_genre";
			this->l_b_genre->Size = System::Drawing::Size(546, 51);
			this->l_b_genre->TabIndex = 6;
			// 
			// l_b_company
			// 
			this->l_b_company->BackColor = System::Drawing::Color::White;
			this->l_b_company->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_company->Location = System::Drawing::Point(219, 513);
			this->l_b_company->Name = L"l_b_company";
			this->l_b_company->Size = System::Drawing::Size(543, 49);
			this->l_b_company->TabIndex = 7;
			// 
			// l_b_author
			// 
			this->l_b_author->BackColor = System::Drawing::Color::White;
			this->l_b_author->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_author->Location = System::Drawing::Point(213, 610);
			this->l_b_author->Name = L"l_b_author";
			this->l_b_author->Size = System::Drawing::Size(549, 49);
			this->l_b_author->TabIndex = 8;
			// 
			// l_b_t
			// 
			this->l_b_t->AccessibleDescription = L"";
			this->l_b_t->AutoSize = true;
			this->l_b_t->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_t->Location = System::Drawing::Point(80, 145);
			this->l_b_t->Name = L"l_b_t";
			this->l_b_t->Size = System::Drawing::Size(67, 20);
			this->l_b_t->TabIndex = 9;
			this->l_b_t->Text = L"タイトル";
			// 
			// l_b_j
			// 
			this->l_b_j->AutoSize = true;
			this->l_b_j->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_j->Location = System::Drawing::Point(77, 418);
			this->l_b_j->Name = L"l_b_j";
			this->l_b_j->Size = System::Drawing::Size(70, 20);
			this->l_b_j->TabIndex = 10;
			this->l_b_j->Text = L"ジャンル";
			// 
			// l_b_c
			// 
			this->l_b_c->AutoSize = true;
			this->l_b_c->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_c->Location = System::Drawing::Point(77, 522);
			this->l_b_c->Name = L"l_b_c";
			this->l_b_c->Size = System::Drawing::Size(69, 20);
			this->l_b_c->TabIndex = 11;
			this->l_b_c->Text = L"出版社";
			// 
			// l_b_a
			// 
			this->l_b_a->AutoSize = true;
			this->l_b_a->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_b_a->Location = System::Drawing::Point(77, 619);
			this->l_b_a->Name = L"l_b_a";
			this->l_b_a->Size = System::Drawing::Size(49, 20);
			this->l_b_a->TabIndex = 12;
			this->l_b_a->Text = L"著者";
			// 
			// b_b_back
			// 
			this->b_b_back->Location = System::Drawing::Point(654, 690);
			this->b_b_back->Name = L"b_b_back";
			this->b_b_back->Size = System::Drawing::Size(153, 48);
			this->b_b_back->TabIndex = 13;
			this->b_b_back->Text = L"戻る";
			this->b_b_back->UseVisualStyleBackColor = true;
			this->b_b_back->Click += gcnew System::EventHandler(this, &Book_detail_form::b_b_back_Click);
			// 
			// Book_detail_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 803);
			this->Controls->Add(this->b_b_back);
			this->Controls->Add(this->l_b_title);
			this->Controls->Add(this->l_b_a);
			this->Controls->Add(this->l_b_c);
			this->Controls->Add(this->l_b_j);
			this->Controls->Add(this->l_b_t);
			this->Controls->Add(this->l_b_author);
			this->Controls->Add(this->l_b_company);
			this->Controls->Add(this->l_b_genre);
			this->Controls->Add(this->l_b_syousai);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->l_b_copyright);
			this->Controls->Add(this->l_b_header);
			this->Name = L"Book_detail_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"詳細";
			this->Load += gcnew System::EventHandler(this, &Book_detail_form::Book_detail_form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void b_b_back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void Book_detail_form_Load(System::Object^ sender, System::EventArgs^ e) {

	if (selectgenre == "ジャンルを選択") {
		l_b_title->Text = msclr::interop::marshal_as<System::String^>(lib[(page - 1)* 10 + lnum].title);
		l_b_genre->Text = msclr::interop::marshal_as<System::String^>(lib[(page - 1) * 10 + lnum].genre);
		l_b_company->Text = msclr::interop::marshal_as<System::String^>(lib[(page - 1) * 10 + lnum].pub);
		l_b_author->Text = msclr::interop::marshal_as<System::String^>(lib[(page - 1) * 10 + lnum].writer);
	}
	else {
		l_b_title->Text = msclr::interop::marshal_as<System::String^>(gen[(page - 1) * 10 + lnum].title);
		l_b_genre->Text = msclr::interop::marshal_as<System::String^>(gen[(page - 1) * 10 + lnum].genre);
		l_b_company->Text = msclr::interop::marshal_as<System::String^>(gen[(page - 1) * 10 + lnum].pub);
		l_b_author->Text = msclr::interop::marshal_as<System::String^>(gen[(page - 1) * 10 + lnum].writer);
	}

	//this->l_b_title->Text = "あああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああああ";

	if (l_b_title->Text->Length > 300) {
		this->Height = 800;
		b_b_back->Top = 680;
		l_b_copyright->Top = 727;
		l_b_author->Top = 620;
		l_b_a->Top = 625;
		l_b_company->Top = 550;
		l_b_c->Top = 555;
		l_b_genre->Top = 480;
		l_b_j->Top = 485;
		l_b_title->Height = 350;
	}
}
};
}
