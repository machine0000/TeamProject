#pragma once

#include <string.h>
#include <msclr/marshal_cppstd.h>
#include "confirmationForm.h"
#include <string>
#include "class.h"
#include "completeForm.h"

using namespace std;

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// signupForm の概要
	/// </summary>
	public ref class signupForm : public System::Windows::Forms::Form
	{
	public:
		signupForm(void)
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
		~signupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_sign_up;
	private: System::Windows::Forms::Label^ Label_Email;
	private: System::Windows::Forms::Label^ Label_password;
	private: System::Windows::Forms::Label^ Label_Genre;
	private: System::Windows::Forms::ComboBox^ comboBox_Genre;
	private: System::Windows::Forms::TextBox^ TextBox_Email;
	private: System::Windows::Forms::TextBox^ TextBox_password;

	protected:







	private: System::Windows::Forms::Button^ Button_sign_up;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Label_sign_up_error;
	private: System::Windows::Forms::Label^ Label_sign_up_error1;
	private: System::Windows::Forms::Label^ Label_sign_up_error2;



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
			this->Label_sign_up = (gcnew System::Windows::Forms::Label());
			this->Label_Email = (gcnew System::Windows::Forms::Label());
			this->Label_password = (gcnew System::Windows::Forms::Label());
			this->Label_Genre = (gcnew System::Windows::Forms::Label());
			this->comboBox_Genre = (gcnew System::Windows::Forms::ComboBox());
			this->TextBox_Email = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_password = (gcnew System::Windows::Forms::TextBox());
			this->Button_sign_up = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Label_sign_up_error = (gcnew System::Windows::Forms::Label());
			this->Label_sign_up_error1 = (gcnew System::Windows::Forms::Label());
			this->Label_sign_up_error2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Label_sign_up
			// 
			this->Label_sign_up->AutoSize = true;
			this->Label_sign_up->Location = System::Drawing::Point(147, 56);
			this->Label_sign_up->Name = L"Label_sign_up";
			this->Label_sign_up->Size = System::Drawing::Size(97, 15);
			this->Label_sign_up->TabIndex = 0;
			this->Label_sign_up->Text = L"新規登録画面";
			// 
			// Label_Email
			// 
			this->Label_Email->AutoSize = true;
			this->Label_Email->Location = System::Drawing::Point(70, 98);
			this->Label_Email->Name = L"Label_Email";
			this->Label_Email->Size = System::Drawing::Size(85, 15);
			this->Label_Email->TabIndex = 1;
			this->Label_Email->Text = L"メールアドレス";
			// 
			// Label_password
			// 
			this->Label_password->AutoSize = true;
			this->Label_password->Location = System::Drawing::Point(68, 156);
			this->Label_password->Name = L"Label_password";
			this->Label_password->Size = System::Drawing::Size(64, 15);
			this->Label_password->TabIndex = 2;
			this->Label_password->Text = L"パスワード";
			// 
			// Label_Genre
			// 
			this->Label_Genre->AutoSize = true;
			this->Label_Genre->Location = System::Drawing::Point(46, 208);
			this->Label_Genre->Name = L"Label_Genre";
			this->Label_Genre->Size = System::Drawing::Size(137, 15);
			this->Label_Genre->TabIndex = 3;
			this->Label_Genre->Text = L"好きなジャンル（任意）";
			// 
			// comboBox_Genre
			// 
			this->comboBox_Genre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Genre->FormattingEnabled = true;
			this->comboBox_Genre->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"社会", L"ミステリー", L"ファンタジー", L"エッセイ", L"歴史",
					L"ノンフィクション"
			});
			this->comboBox_Genre->Location = System::Drawing::Point(229, 205);
			this->comboBox_Genre->Name = L"comboBox_Genre";
			this->comboBox_Genre->Size = System::Drawing::Size(121, 23);
			this->comboBox_Genre->TabIndex = 4;
			// 
			// TextBox_Email
			// 
			this->TextBox_Email->Location = System::Drawing::Point(229, 98);
			this->TextBox_Email->Name = L"TextBox_Email";
			this->TextBox_Email->Size = System::Drawing::Size(100, 22);
			this->TextBox_Email->TabIndex = 5;
			// 
			// TextBox_password
			// 
			this->TextBox_password->Location = System::Drawing::Point(229, 153);
			this->TextBox_password->Name = L"TextBox_password";
			this->TextBox_password->Size = System::Drawing::Size(100, 22);
			this->TextBox_password->TabIndex = 6;
			// 
			// Button_sign_up
			// 
			this->Button_sign_up->Location = System::Drawing::Point(159, 249);
			this->Button_sign_up->Name = L"Button_sign_up";
			this->Button_sign_up->Size = System::Drawing::Size(75, 23);
			this->Button_sign_up->TabIndex = 7;
			this->Button_sign_up->Text = L"登録";
			this->Button_sign_up->UseVisualStyleBackColor = true;
			this->Button_sign_up->Click += gcnew System::EventHandler(this, &signupForm::Button_sign_up_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Peru;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(0, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(385, 28);
			this->label1->TabIndex = 8;
			this->label1->Text = L"図書貸し出しシステム　　　　　　　\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Peru;
			this->label2->Location = System::Drawing::Point(0, 311);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(385, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"　　　　　　　　　　　　　　　copyright　　　　　　　　　　　　　　　　　";
			this->label2->UseMnemonic = false;
			// 
			// Label_sign_up_error
			// 
			this->Label_sign_up_error->AutoSize = true;
			this->Label_sign_up_error->ForeColor = System::Drawing::Color::Red;
			this->Label_sign_up_error->Location = System::Drawing::Point(62, 275);
			this->Label_sign_up_error->Name = L"Label_sign_up_error";
			this->Label_sign_up_error->Size = System::Drawing::Size(267, 15);
			this->Label_sign_up_error->TabIndex = 10;
			this->Label_sign_up_error->Text = L"メールアドレスかパスワードが入力されてません\r\n";
			this->Label_sign_up_error->Visible = false;
			this->Label_sign_up_error->Click += gcnew System::EventHandler(this, &signupForm::Label_sign_up_error_Click);
			// 
			// Label_sign_up_error1
			// 
			this->Label_sign_up_error1->AutoSize = true;
			this->Label_sign_up_error1->ForeColor = System::Drawing::Color::Red;
			this->Label_sign_up_error1->Location = System::Drawing::Point(70, 275);
			this->Label_sign_up_error1->Name = L"Label_sign_up_error1";
			this->Label_sign_up_error1->Size = System::Drawing::Size(246, 15);
			this->Label_sign_up_error1->TabIndex = 11;
			this->Label_sign_up_error1->Text = L"すでにこのメールアドレスは使われています";
			this->Label_sign_up_error1->Visible = false;
			this->Label_sign_up_error1->Click += gcnew System::EventHandler(this, &signupForm::Label_sign_up_error1_Click);
			// 
			// Label_sign_up_error2
			// 
			this->Label_sign_up_error2->AutoSize = true;
			this->Label_sign_up_error2->ForeColor = System::Drawing::Color::Red;
			this->Label_sign_up_error2->Location = System::Drawing::Point(17, 275);
			this->Label_sign_up_error2->Name = L"Label_sign_up_error2";
			this->Label_sign_up_error2->Size = System::Drawing::Size(340, 15);
			this->Label_sign_up_error2->TabIndex = 12;
			this->Label_sign_up_error2->Text = L"８文字以上１６文字以内の英数文字のみでお願いします";
			this->Label_sign_up_error2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(307, 15);
			this->label3->TabIndex = 13;
			this->label3->Text = L"(8文字以上16文字以内の英数字でお願いします）";
			// 
			// signupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 325);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Label_sign_up_error2);
			this->Controls->Add(this->Label_sign_up_error1);
			this->Controls->Add(this->Label_sign_up_error);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Button_sign_up);
			this->Controls->Add(this->TextBox_password);
			this->Controls->Add(this->TextBox_Email);
			this->Controls->Add(this->comboBox_Genre);
			this->Controls->Add(this->Label_Genre);
			this->Controls->Add(this->Label_password);
			this->Controls->Add(this->Label_Email);
			this->Controls->Add(this->Label_sign_up);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"signupForm";
			this->Text = L"signupForm";
			this->Load += gcnew System::EventHandler(this, &signupForm::signupForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		private: System::Void Label_sign_up_error_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void Button_sign_up_Click(System::Object^ sender, System::EventArgs^ e) {
			pass = msclr::interop::marshal_as<std::string>(TextBox_password->Text);
			Email = msclr::interop::marshal_as<std::string>(TextBox_Email->Text);
			Genre = msclr::interop::marshal_as<std::string>(comboBox_Genre->Text);
			size_t Pass = pass.length();
			int space1 = pass.find(" ");
			int space2 = Email.find(" ");
			int check = 0;
			for (int i = 0; i < usermax; i++) {
				if (Email == user[i].mail) {
					check = 1;
					break;
				}
			}
			this->Label_sign_up_error->Visible = false;
			this->Label_sign_up_error1->Visible = false;
			this->Label_sign_up_error2->Visible = false;

			if (TextBox_Email->Text == "" || TextBox_password->Text == "" ) {
				this->Label_sign_up_error->Visible = true;
			}
			else if (check == 1) {
				this->Label_sign_up_error1->Visible = true;
			}
			else if (Pass >= 17 || Pass <= 7 || space1 != std::string::npos || space2 != std::string::npos) {
				this->Label_sign_up_error2->Visible = true;
			}
			else {
				this->Label_sign_up_error->Visible = false;
				this->Label_sign_up_error1->Visible = false;
				this->Label_sign_up_error2->Visible = false;
				confirmationForm^ frma = gcnew confirmationForm();
				frma->FormClosed += gcnew FormClosedEventHandler(this, &signupForm::Close);
				frma->ShowDialog();
			}
		}
		private: void signupForm::Close(Object^ sender, FormClosedEventArgs^ e) {
			if (close == 1) {
				this->Visible = false;
				//completeForm^ frm = gcnew completeForm();
				//frm->Show();
			}
		}
		private: System::Void Button_confirmation_sign_up_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
private: System::Void Label_sign_up_error1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void signupForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = true;
	this->TextBox_Email-> Text = "";
	this->TextBox_password->Text = "";
}
};
}
