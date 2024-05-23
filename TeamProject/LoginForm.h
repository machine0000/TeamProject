#pragma once
//#include "SingupForm.h"
#include "ShowForm.h"
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "class.h"

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// LoginForm の概要
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ l_lo_header;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ l_l_mail;
	private: System::Windows::Forms::Label^ l_l_password;
	private: System::Windows::Forms::Label^ l_l_error1;
	private: System::Windows::Forms::Label^ l_l_error2;






	private: System::Windows::Forms::Button^ b_l_login;



	private: System::Windows::Forms::Button^ b_l_singup;
	private: System::Windows::Forms::TextBox^ t_l_mail;


	private: System::Windows::Forms::TextBox^ t_l_password;
	private: System::Windows::Forms::Button^ b_l_check;



	private: System::Windows::Forms::Label^ l_lo_copyright;





	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->l_lo_header = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->l_l_mail = (gcnew System::Windows::Forms::Label());
			this->l_l_password = (gcnew System::Windows::Forms::Label());
			this->l_l_error1 = (gcnew System::Windows::Forms::Label());
			this->l_l_error2 = (gcnew System::Windows::Forms::Label());
			this->b_l_login = (gcnew System::Windows::Forms::Button());
			this->b_l_singup = (gcnew System::Windows::Forms::Button());
			this->t_l_mail = (gcnew System::Windows::Forms::TextBox());
			this->t_l_password = (gcnew System::Windows::Forms::TextBox());
			this->b_l_check = (gcnew System::Windows::Forms::Button());
			this->l_lo_copyright = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// l_lo_header
			// 
			this->l_lo_header->AutoSize = true;
			this->l_lo_header->BackColor = System::Drawing::Color::Peru;
			this->l_lo_header->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_lo_header->Location = System::Drawing::Point(-4, -1);
			this->l_lo_header->Name = L"l_lo_header";
			this->l_lo_header->Size = System::Drawing::Size(931, 40);
			this->l_lo_header->TabIndex = 0;
			this->l_lo_header->Text = L"  図書貸し出しシステム　　　　　　　　　　　　　　　　　　　";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(100, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(335, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"※登録をしていない方は新規登録ボタンを押してください";
			// 
			// l_l_mail
			// 
			this->l_l_mail->AutoSize = true;
			this->l_l_mail->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_l_mail->Location = System::Drawing::Point(61, 178);
			this->l_l_mail->Name = L"l_l_mail";
			this->l_l_mail->Size = System::Drawing::Size(121, 20);
			this->l_l_mail->TabIndex = 2;
			this->l_l_mail->Text = L"メールアドレス";
			// 
			// l_l_password
			// 
			this->l_l_password->AutoSize = true;
			this->l_l_password->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_l_password->Location = System::Drawing::Point(91, 208);
			this->l_l_password->Name = L"l_l_password";
			this->l_l_password->Size = System::Drawing::Size(91, 20);
			this->l_l_password->TabIndex = 3;
			this->l_l_password->Text = L"パスワード";
			// 
			// l_l_error1
			// 
			this->l_l_error1->AutoSize = true;
			this->l_l_error1->ForeColor = System::Drawing::Color::Red;
			this->l_l_error1->Location = System::Drawing::Point(141, 243);
			this->l_l_error1->Name = L"l_l_error1";
			this->l_l_error1->Size = System::Drawing::Size(294, 15);
			this->l_l_error1->TabIndex = 4;
			this->l_l_error1->Text = L"メールアドレスもしくはパスワードが間違っています。";
			this->l_l_error1->Visible = false;
			// 
			// l_l_error2
			// 
			this->l_l_error2->AutoSize = true;
			this->l_l_error2->ForeColor = System::Drawing::Color::Red;
			this->l_l_error2->Location = System::Drawing::Point(141, 258);
			this->l_l_error2->Name = L"l_l_error2";
			this->l_l_error2->Size = System::Drawing::Size(260, 15);
			this->l_l_error2->TabIndex = 5;
			this->l_l_error2->Text = L"メールアドレス、パスワードは必須項目です。";
			this->l_l_error2->Visible = false;
			// 
			// b_l_login
			// 
			this->b_l_login->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_l_login->Location = System::Drawing::Point(220, 290);
			this->b_l_login->Name = L"b_l_login";
			this->b_l_login->Size = System::Drawing::Size(97, 29);
			this->b_l_login->TabIndex = 8;
			this->b_l_login->Text = L"ログイン";
			this->b_l_login->UseVisualStyleBackColor = true;
			this->b_l_login->Click += gcnew System::EventHandler(this, &LoginForm::b_l_login_Click);
			// 
			// b_l_singup
			// 
			this->b_l_singup->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->b_l_singup->Location = System::Drawing::Point(441, 51);
			this->b_l_singup->Name = L"b_l_singup";
			this->b_l_singup->Size = System::Drawing::Size(80, 40);
			this->b_l_singup->TabIndex = 9;
			this->b_l_singup->Text = L"新規登録";
			this->b_l_singup->UseVisualStyleBackColor = true;
			this->b_l_singup->Click += gcnew System::EventHandler(this, &LoginForm::b_l_singup_Click);
			// 
			// t_l_mail
			// 
			this->t_l_mail->Location = System::Drawing::Point(187, 178);
			this->t_l_mail->Name = L"t_l_mail";
			this->t_l_mail->Size = System::Drawing::Size(197, 22);
			this->t_l_mail->TabIndex = 10;
			// 
			// t_l_password
			// 
			this->t_l_password->Location = System::Drawing::Point(187, 206);
			this->t_l_password->Name = L"t_l_password";
			this->t_l_password->PasswordChar = '*';
			this->t_l_password->Size = System::Drawing::Size(197, 22);
			this->t_l_password->TabIndex = 11;
			// 
			// b_l_check
			// 
			this->b_l_check->Location = System::Drawing::Point(390, 208);
			this->b_l_check->Name = L"b_l_check";
			this->b_l_check->Size = System::Drawing::Size(27, 23);
			this->b_l_check->TabIndex = 12;
			this->b_l_check->Text = L"👁\r\n";
			this->b_l_check->UseVisualStyleBackColor = true;
			this->b_l_check->Click += gcnew System::EventHandler(this, &LoginForm::b_l_check_Click);
			// 
			// l_lo_copyright
			// 
			this->l_lo_copyright->AutoSize = true;
			this->l_lo_copyright->BackColor = System::Drawing::Color::Peru;
			this->l_lo_copyright->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_lo_copyright->Location = System::Drawing::Point(0, 447);
			this->l_lo_copyright->Name = L"l_lo_copyright";
			this->l_lo_copyright->Size = System::Drawing::Size(757, 15);
			this->l_lo_copyright->TabIndex = 13;
			this->l_lo_copyright->Text = L"　　　　　　　　　　　　　　　　　　　　　　　Copyright(C)　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 460);
			this->Controls->Add(this->b_l_check);
			this->Controls->Add(this->t_l_password);
			this->Controls->Add(this->t_l_mail);
			this->Controls->Add(this->b_l_singup);
			this->Controls->Add(this->b_l_login);
			this->Controls->Add(this->l_l_error2);
			this->Controls->Add(this->l_l_error1);
			this->Controls->Add(this->l_l_password);
			this->Controls->Add(this->l_l_mail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->l_lo_header);
			this->Controls->Add(this->l_lo_copyright);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void b_l_singup_Click(System::Object^ sender, System::EventArgs^ e) {   //新規登録画面へ遷移
		/*SingupForm^ frm = gcnew SingupForm();*/
		/*frm->ShowDialog;*/
	}

	private: System::Void b_l_login_Click(System::Object^ sender, System::EventArgs^ e) {   //ログイン処理を実行し、一覧画面へ遷移



		/*if (t_l_mail->Text != "" || t_l_password->Text != "") {
			this->l_l_error2->Visible = true;
		}
		else if (t_l_mail->Text != user.mail || t_l_password->Text != user.pass) {
			this->l_l_error1->Visible = true;
		}
		else if (t_l_mail->Text == user.mail && t_l_password == user.pass) {
			ShowForm^ frm = gcnew ShowForm();
			frm->ShowDialog;
		}*/
	}


	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {   //ユーザーファイルを読み混み
		
		std::string str_buf;
		std::string str_conma_buf;
		// 読み込むcsvファイルを開く(std::ifstreamのコンストラクタで開く)
		std::ifstream ifs("user.csv");
		// getline関数で1行ずつ読み込む(読み込んだ内容はstr_bufに格納)
		while (getline(ifs, str_buf)) {
			//「,」区切りごとにデータを読み込むためにistringstream型にする
			istringstream i_stream(str_buf);
			// １列目
			// 「,」区切りごとにデータを読み込む
			getline(i_stream, str_conma_buf, ',');
			// 読み込んだデータをクラスに格納
			user.mail = str_conma_buf;
			// ２列目
			getline(i_stream, str_conma_buf, ',');
			user.pass = str_conma_buf;
			//クラスの中身の表示
			cout << user.mail << " " << user.pass << " " << endl;

			/*string str = user.mail;
			MessageBox::Show(msclr::interop::marshal_as<System::String^>(user.mail));*/
		}
		ifs.close();
	
	}
	private: System::Void b_l_check_Click(System::Object^ sender, System::EventArgs^ e) {
		this->t_l_password->PasswordChar = '\0';
	}
};
}
