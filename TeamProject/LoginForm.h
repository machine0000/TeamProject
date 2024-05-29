#pragma once
#include "sign up Form.h"
#include "ShowForm.h"
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "class.h"
#include "ManagementForm.h"


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

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ l_l_mail;
	private: System::Windows::Forms::Label^ l_l_password;
	private: System::Windows::Forms::Label^ l_l_error1;
	private: System::Windows::Forms::Label^ l_l_error2;
	private: System::Windows::Forms::Label^ l_l_error3;
	private: System::Windows::Forms::Label^ l_l_Cpyright;


	protected:

	protected:







	private: System::Windows::Forms::Button^ b_l_signup;
	private: System::Windows::Forms::Button^ b_l_login;



	private: System::Windows::Forms::TextBox^ t_l_mail;
	private: System::Windows::Forms::TextBox^ t_l_password;
	private: System::Windows::Forms::Button^ b_lo_check;





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
			this->l_lo_header = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->l_l_mail = (gcnew System::Windows::Forms::Label());
			this->l_l_password = (gcnew System::Windows::Forms::Label());
			this->l_l_error1 = (gcnew System::Windows::Forms::Label());
			this->l_l_error2 = (gcnew System::Windows::Forms::Label());
			this->l_l_error3 = (gcnew System::Windows::Forms::Label());
			this->l_l_Cpyright = (gcnew System::Windows::Forms::Label());
			this->b_l_signup = (gcnew System::Windows::Forms::Button());
			this->b_l_login = (gcnew System::Windows::Forms::Button());
			this->t_l_mail = (gcnew System::Windows::Forms::TextBox());
			this->t_l_password = (gcnew System::Windows::Forms::TextBox());
			this->b_lo_check = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// l_lo_header
			// 
			this->l_lo_header->AutoSize = true;
			this->l_lo_header->BackColor = System::Drawing::Color::Peru;
			this->l_lo_header->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->l_lo_header->Location = System::Drawing::Point(-18, 5);
			this->l_lo_header->Name = L"l_lo_header";
			this->l_lo_header->Size = System::Drawing::Size(629, 33);
			this->l_lo_header->TabIndex = 0;
			this->l_lo_header->Text = L"　図書貸し出しシステム　　　　　　　　　　　　　　";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(320, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"登録をしていない方は新規登録ボタンを押してください";
			// 
			// l_l_mail
			// 
			this->l_l_mail->AutoSize = true;
			this->l_l_mail->Location = System::Drawing::Point(113, 163);
			this->l_l_mail->Name = L"l_l_mail";
			this->l_l_mail->Size = System::Drawing::Size(85, 15);
			this->l_l_mail->TabIndex = 2;
			this->l_l_mail->Text = L"メールアドレス";
			// 
			// l_l_password
			// 
			this->l_l_password->AutoSize = true;
			this->l_l_password->Location = System::Drawing::Point(134, 197);
			this->l_l_password->Name = L"l_l_password";
			this->l_l_password->Size = System::Drawing::Size(64, 15);
			this->l_l_password->TabIndex = 3;
			this->l_l_password->Text = L"パスワード";
			// 
			// l_l_error1
			// 
			this->l_l_error1->AutoSize = true;
			this->l_l_error1->ForeColor = System::Drawing::Color::Red;
			this->l_l_error1->Location = System::Drawing::Point(155, 230);
			this->l_l_error1->Name = L"l_l_error1";
			this->l_l_error1->Size = System::Drawing::Size(249, 15);
			this->l_l_error1->TabIndex = 4;
			this->l_l_error1->Text = L"メールアドレスとパスワードは必須項目です";
			this->l_l_error1->Visible = false;
			// 
			// l_l_error2
			// 
			this->l_l_error2->AutoSize = true;
			this->l_l_error2->ForeColor = System::Drawing::Color::Red;
			this->l_l_error2->Location = System::Drawing::Point(155, 245);
			this->l_l_error2->Name = L"l_l_error2";
			this->l_l_error2->Size = System::Drawing::Size(391, 15);
			this->l_l_error2->TabIndex = 5;
			this->l_l_error2->Text = L"パスワードは８文字以上１６文字以内の英数字で入力してください";
			this->l_l_error2->Visible = false;
			// 
			// l_l_error3
			// 
			this->l_l_error3->AutoSize = true;
			this->l_l_error3->ForeColor = System::Drawing::Color::Red;
			this->l_l_error3->Location = System::Drawing::Point(155, 260);
			this->l_l_error3->Name = L"l_l_error3";
			this->l_l_error3->Size = System::Drawing::Size(287, 15);
			this->l_l_error3->TabIndex = 6;
			this->l_l_error3->Text = L"メールアドレス、またはパスワードが間違っています";
			this->l_l_error3->Visible = false;
			// 
			// l_l_Cpyright
			// 
			this->l_l_Cpyright->AutoSize = true;
			this->l_l_Cpyright->BackColor = System::Drawing::Color::Peru;
			this->l_l_Cpyright->Location = System::Drawing::Point(-31, 373);
			this->l_l_Cpyright->Name = L"l_l_Cpyright";
			this->l_l_Cpyright->Size = System::Drawing::Size(619, 15);
			this->l_l_Cpyright->TabIndex = 7;
			this->l_l_Cpyright->Text = L"　　　　　　　　　　　　　　　　　　　　　　　　　　　Cpyright(C)　　　　　　　　　　　　　　　　　　　　　　　　　　　";
			// 
			// b_l_signup
			// 
			this->b_l_signup->Location = System::Drawing::Point(475, 42);
			this->b_l_signup->Name = L"b_l_signup";
			this->b_l_signup->Size = System::Drawing::Size(81, 35);
			this->b_l_signup->TabIndex = 8;
			this->b_l_signup->Text = L"新規登録";
			this->b_l_signup->UseVisualStyleBackColor = true;
			this->b_l_signup->Click += gcnew System::EventHandler(this, &LoginForm::b_l_signup_Click);
			// 
			// b_l_login
			// 
			this->b_l_login->Location = System::Drawing::Point(230, 292);
			this->b_l_login->Name = L"b_l_login";
			this->b_l_login->Size = System::Drawing::Size(96, 30);
			this->b_l_login->TabIndex = 9;
			this->b_l_login->Text = L"ログイン";
			this->b_l_login->UseVisualStyleBackColor = true;
			this->b_l_login->Click += gcnew System::EventHandler(this, &LoginForm::b_l_login_Click);
			// 
			// t_l_mail
			// 
			this->t_l_mail->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->t_l_mail->Location = System::Drawing::Point(204, 160);
			this->t_l_mail->Name = L"t_l_mail";
			this->t_l_mail->Size = System::Drawing::Size(138, 22);
			this->t_l_mail->TabIndex = 10;
			// 
			// t_l_password
			// 
			this->t_l_password->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->t_l_password->Location = System::Drawing::Point(204, 194);
			this->t_l_password->Name = L"t_l_password";
			this->t_l_password->PasswordChar = '*';
			this->t_l_password->Size = System::Drawing::Size(138, 22);
			this->t_l_password->TabIndex = 11;
			// 
			// b_lo_check
			// 
			this->b_lo_check->Location = System::Drawing::Point(348, 194);
			this->b_lo_check->Name = L"b_lo_check";
			this->b_lo_check->Size = System::Drawing::Size(54, 23);
			this->b_lo_check->TabIndex = 12;
			this->b_lo_check->Text = L"確認";
			this->b_lo_check->UseVisualStyleBackColor = true;
			this->b_lo_check->Click += gcnew System::EventHandler(this, &LoginForm::b_lo_check_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(568, 387);
			this->Controls->Add(this->b_lo_check);
			this->Controls->Add(this->t_l_password);
			this->Controls->Add(this->t_l_mail);
			this->Controls->Add(this->b_l_login);
			this->Controls->Add(this->b_l_signup);
			this->Controls->Add(this->l_l_Cpyright);
			this->Controls->Add(this->l_l_error3);
			this->Controls->Add(this->l_l_error2);
			this->Controls->Add(this->l_l_error1);
			this->Controls->Add(this->l_l_password);
			this->Controls->Add(this->l_l_mail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->l_lo_header);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void b_l_signup_Click(System::Object^ sender, System::EventArgs^ e) {   //新規登録画面へ遷移
			signupForm^ frm = gcnew signupForm();
			frm->ShowDialog();
		}

	private: System::Void b_l_login_Click(System::Object^ sender, System::EventArgs^ e) {   //ログイン処理を実行
		this->l_l_error1->Visible = false;
		this->l_l_error2->Visible = false;
		this->l_l_error3->Visible = false;
		for (int i = 0; i < usermax; i++) {
			pass = msclr::interop::marshal_as<std::string>(t_l_password->Text);
			size_t Password = pass.length();
			if (t_l_mail->Text == "kanri" && t_l_password->Text == "abcd1234") {   //管理者画面に遷移
				ManagementForm^ frm = gcnew ManagementForm();
				frm->ShowDialog();
				break;
			}
			else if (t_l_mail->Text == "" || t_l_password->Text == "") {   //エラー文１
				this->l_l_error1->Visible = true;
				break;
			}
			else if (Password <= 7 || Password >= 17) {  //エラー文２
				this->l_l_error2->Visible = true;
				break;
			}
			else if (t_l_mail->Text != msclr::interop::marshal_as<System::String^>(user[i].mail) || t_l_password->Text != msclr::interop::marshal_as<System::String^>(user[i].pass)) {   //エラー文３
				this->l_l_error3->Visible = true;
			}
			else if (t_l_mail->Text == msclr::interop::marshal_as<System::String^>(user[i].mail) && t_l_password->Text == msclr::interop::marshal_as<System::String^>(user[i].pass)) {   //一覧画面に遷移
				usernum = i;

				ShowForm^ frma = gcnew ShowForm();
				frma->FormClosed += gcnew FormClosedEventHandler(this, &LoginForm::Close);
				frma->Show();
				LoginForm::Visible = false;
			}
		}
	}
		  private:void LoginForm::Close(Object^ sender, FormClosedEventArgs^ e) {
			 LoginForm::Close();
		  }
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {   

		
		

	}
	private: System::Void b_lo_check_Click(System::Object^ sender, System::EventArgs^ e) {   //確認ボタン（パスワードを表示）
		this->t_l_password->PasswordChar = '\0';
	}


	private: System::Void LoginForm_Load_1(System::Object^ sender, System::EventArgs^ e) {   //ユーザーファイル読み込み・クラスに格納
		std::string str_buf;
		std::string str_conma_buf;
		// 読み込むcsvファイルを開く(std::ifstreamのコンストラクタで開く)
		std::ifstream ifs("user.csv");
		// getline関数で1行ずつ読み込む(読み込んだ内容はstr_bufに格納)
		for (usermax = -1; getline(ifs, str_buf); usermax++) {
			if (usermax >= 0)
			{
				//「,」区切りごとにデータを読み込むためにistringstream型にする
				istringstream i_stream(str_buf);
				// １列目
				// 「,」区切りごとにデータを読み込む
				getline(i_stream, str_conma_buf, ',');
				// 読み込んだデータをクラスに格納
				user[usermax].mail = str_conma_buf;
				// ２列目
				getline(i_stream, str_conma_buf, ',');
				user[usermax].pass = str_conma_buf;
				//	// 3列目
				getline(i_stream, str_conma_buf, ',');
				user[usermax].genre = str_conma_buf;
				// 4~6列目
				for (int j = 0; j < 3; j++) {
					getline(i_stream, str_conma_buf, ',');
					user[usermax].lendname[j] = str_conma_buf;
				}
				string time;
				// 7~9列目
				struct tm tm;
				for (int j = 0; j < 3; j++) {
					getline(i_stream, str_conma_buf, ',');
					if (str_conma_buf != "") {
						//年
						time = str_conma_buf.substr(0, 4);
						tm.tm_year = stoi(time)-1900;
						//月
						time = str_conma_buf.substr(4, 2);
						tm.tm_mon = stoi(time);
						//日
						time = str_conma_buf.substr(6, 2);
						tm.tm_mday = stoi(time);
						//時
						time = str_conma_buf.substr(8, 2);
						tm.tm_hour = stoi(time);
						//分
						time = str_conma_buf.substr(10, 2);
						tm.tm_min = stoi(time);
						//秒
						time = str_conma_buf.substr(12, 2);
						tm.tm_sec = stoi(time);
						time_t timep = mktime(&tm);
						user[usermax].rday[j] = localtime(&timep);
					}
				}
				//１０列目
				getline(i_stream, str_conma_buf, ',');
				user[usermax].books = stoi(str_conma_buf);
			}
		}
		ifs.close();
	}
};
}
