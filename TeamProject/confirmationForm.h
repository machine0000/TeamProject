#pragma once

#include <string>
#include <string.h>
#include <msclr/marshal_cppstd.h>
#include "completeForm.h"
#include <fstream>
#include "class.h"
using namespace std;
string Email = "";
string pass = "";
string Genre = "";
namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// confirmationForm の概要
	/// </summary>
	public ref class confirmationForm : public System::Windows::Forms::Form
	{
	public:
		confirmationForm(void)
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
		~confirmationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_confirmation_sing_up;
	protected:
	private: System::Windows::Forms::Label^ Label_confirmation;
	private: System::Windows::Forms::Label^ Label_confirmation_Email;
	private: System::Windows::Forms::Label^ Label_confirmation_password;
	private: System::Windows::Forms::Label^ Label_confirmation_Genre;
	private: System::Windows::Forms::TextBox^ TextBox_confirmation_Email;

	private: System::Windows::Forms::TextBox^ TextBox_confirmation_password;
	private: System::Windows::Forms::Button^ Button_return;
	private: System::Windows::Forms::Button^ Button_confirmation_sign_up;









	private: System::Windows::Forms::Label^ Label_confirmation_header;
	private: System::Windows::Forms::Label^ Label_confirmation_footer;
	private: System::Windows::Forms::ComboBox^ ComboBox_confirmation_Genre;




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
			this->Label_confirmation_sing_up = (gcnew System::Windows::Forms::Label());
			this->Label_confirmation = (gcnew System::Windows::Forms::Label());
			this->Label_confirmation_Email = (gcnew System::Windows::Forms::Label());
			this->Label_confirmation_password = (gcnew System::Windows::Forms::Label());
			this->Label_confirmation_Genre = (gcnew System::Windows::Forms::Label());
			this->TextBox_confirmation_Email = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_confirmation_password = (gcnew System::Windows::Forms::TextBox());
			this->Button_return = (gcnew System::Windows::Forms::Button());
			this->Button_confirmation_sign_up = (gcnew System::Windows::Forms::Button());
			this->Label_confirmation_header = (gcnew System::Windows::Forms::Label());
			this->Label_confirmation_footer = (gcnew System::Windows::Forms::Label());
			this->ComboBox_confirmation_Genre = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Label_confirmation_sing_up
			// 
			this->Label_confirmation_sing_up->AutoSize = true;
			this->Label_confirmation_sing_up->Location = System::Drawing::Point(130, 46);
			this->Label_confirmation_sing_up->Name = L"Label_confirmation_sing_up";
			this->Label_confirmation_sing_up->Size = System::Drawing::Size(127, 15);
			this->Label_confirmation_sing_up->TabIndex = 0;
			this->Label_confirmation_sing_up->Text = L"新規登録確認画面";
			// 
			// Label_confirmation
			// 
			this->Label_confirmation->AutoSize = true;
			this->Label_confirmation->Location = System::Drawing::Point(110, 80);
			this->Label_confirmation->Name = L"Label_confirmation";
			this->Label_confirmation->Size = System::Drawing::Size(162, 15);
			this->Label_confirmation->TabIndex = 1;
			this->Label_confirmation->Text = L"登録内容をご確認ください";
			// 
			// Label_confirmation_Email
			// 
			this->Label_confirmation_Email->AutoSize = true;
			this->Label_confirmation_Email->Location = System::Drawing::Point(73, 127);
			this->Label_confirmation_Email->Name = L"Label_confirmation_Email";
			this->Label_confirmation_Email->Size = System::Drawing::Size(85, 15);
			this->Label_confirmation_Email->TabIndex = 2;
			this->Label_confirmation_Email->Text = L"メールアドレス";
			// 
			// Label_confirmation_password
			// 
			this->Label_confirmation_password->AutoSize = true;
			this->Label_confirmation_password->Location = System::Drawing::Point(70, 171);
			this->Label_confirmation_password->Name = L"Label_confirmation_password";
			this->Label_confirmation_password->Size = System::Drawing::Size(64, 15);
			this->Label_confirmation_password->TabIndex = 3;
			this->Label_confirmation_password->Text = L"パスワード";
			// 
			// Label_confirmation_Genre
			// 
			this->Label_confirmation_Genre->AutoSize = true;
			this->Label_confirmation_Genre->Location = System::Drawing::Point(73, 218);
			this->Label_confirmation_Genre->Name = L"Label_confirmation_Genre";
			this->Label_confirmation_Genre->Size = System::Drawing::Size(137, 15);
			this->Label_confirmation_Genre->TabIndex = 4;
			this->Label_confirmation_Genre->Text = L"好きなジャンル（任意）";
			// 
			// TextBox_confirmation_Email
			// 
			this->TextBox_confirmation_Email->Enabled = false;
			this->TextBox_confirmation_Email->Location = System::Drawing::Point(236, 127);
			this->TextBox_confirmation_Email->Name = L"TextBox_confirmation_Email";
			this->TextBox_confirmation_Email->Size = System::Drawing::Size(100, 22);
			this->TextBox_confirmation_Email->TabIndex = 5;
			// 
			// TextBox_confirmation_password
			// 
			this->TextBox_confirmation_password->Enabled = false;
			this->TextBox_confirmation_password->Location = System::Drawing::Point(236, 171);
			this->TextBox_confirmation_password->Name = L"TextBox_confirmation_password";
			this->TextBox_confirmation_password->Size = System::Drawing::Size(100, 22);
			this->TextBox_confirmation_password->TabIndex = 6;
			// 
			// Button_return
			// 
			this->Button_return->Location = System::Drawing::Point(93, 275);
			this->Button_return->Name = L"Button_return";
			this->Button_return->Size = System::Drawing::Size(75, 23);
			this->Button_return->TabIndex = 8;
			this->Button_return->Text = L"戻る";
			this->Button_return->UseVisualStyleBackColor = true;
			this->Button_return->Click += gcnew System::EventHandler(this, &confirmationForm::Button_return_Click);
			// 
			// Button_confirmation_sign_up
			// 
			this->Button_confirmation_sign_up->Location = System::Drawing::Point(236, 275);
			this->Button_confirmation_sign_up->Name = L"Button_confirmation_sign_up";
			this->Button_confirmation_sign_up->Size = System::Drawing::Size(75, 23);
			this->Button_confirmation_sign_up->TabIndex = 9;
			this->Button_confirmation_sign_up->Text = L"登録";
			this->Button_confirmation_sign_up->UseVisualStyleBackColor = true;
			this->Button_confirmation_sign_up->Click += gcnew System::EventHandler(this, &confirmationForm::Button_confirmation_sign_up_Click);
			// 
			// Label_confirmation_header
			// 
			this->Label_confirmation_header->AutoSize = true;
			this->Label_confirmation_header->BackColor = System::Drawing::Color::Peru;
			this->Label_confirmation_header->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(128)));
			this->Label_confirmation_header->Location = System::Drawing::Point(0, 0);
			this->Label_confirmation_header->Name = L"Label_confirmation_header";
			this->Label_confirmation_header->Size = System::Drawing::Size(385, 28);
			this->Label_confirmation_header->TabIndex = 11;
			this->Label_confirmation_header->Text = L"図書貸し出しシステム　　　　　　　";
			// 
			// Label_confirmation_footer
			// 
			this->Label_confirmation_footer->AutoSize = true;
			this->Label_confirmation_footer->BackColor = System::Drawing::Color::Peru;
			this->Label_confirmation_footer->ForeColor = System::Drawing::Color::Black;
			this->Label_confirmation_footer->Location = System::Drawing::Point(2, 313);
			this->Label_confirmation_footer->Name = L"Label_confirmation_footer";
			this->Label_confirmation_footer->Size = System::Drawing::Size(395, 15);
			this->Label_confirmation_footer->TabIndex = 12;
			this->Label_confirmation_footer->Text = L"　　　　　　　　　　　　　　　　copyright　　　　　　　　　　　　　　　　　\r\n";
			// 
			// ComboBox_confirmation_Genre
			// 
			this->ComboBox_confirmation_Genre->Enabled = false;
			this->ComboBox_confirmation_Genre->FormattingEnabled = true;
			this->ComboBox_confirmation_Genre->Location = System::Drawing::Point(236, 218);
			this->ComboBox_confirmation_Genre->Name = L"ComboBox_confirmation_Genre";
			this->ComboBox_confirmation_Genre->Size = System::Drawing::Size(121, 23);
			this->ComboBox_confirmation_Genre->TabIndex = 13;
			// 
			// confirmationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 327);
			this->Controls->Add(this->ComboBox_confirmation_Genre);
			this->Controls->Add(this->Label_confirmation_footer);
			this->Controls->Add(this->Label_confirmation_header);
			this->Controls->Add(this->Button_confirmation_sign_up);
			this->Controls->Add(this->Button_return);
			this->Controls->Add(this->TextBox_confirmation_password);
			this->Controls->Add(this->TextBox_confirmation_Email);
			this->Controls->Add(this->Label_confirmation_Genre);
			this->Controls->Add(this->Label_confirmation_password);
			this->Controls->Add(this->Label_confirmation_Email);
			this->Controls->Add(this->Label_confirmation);
			this->Controls->Add(this->Label_confirmation_sing_up);
			this->Name = L"confirmationForm";
			this->Text = L"confirmationForm";
			this->Load += gcnew System::EventHandler(this, &confirmationForm::confirmationForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void confirmationForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->TextBox_confirmation_Email->Text = msclr::interop::marshal_as<System::String^>(Email);
	this->TextBox_confirmation_password->Text = msclr::interop::marshal_as<System::String^>(pass);
	this->ComboBox_confirmation_Genre->Text = msclr::interop::marshal_as<System::String^>(Genre);
}
private: System::Void Button_return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Button_confirmation_sign_up_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream ofs("user.csv");
	user[nummax].mail = Email;
	user[nummax].pass = pass;
	user[nummax].genre = Genre;
	for (int i = 0; i <= nummax; i++) {
	 ofs << user[i].mail << ',';
	ofs << user[i].pass << ',';
	ofs << user[i].genre << ',';
	ofs << user[i].lendname[0]<< ',';
	ofs << user[i].lendname[1] << ',';
	ofs << user[i].lendname[2] << ',';
	for (int j = 0; j < 3; j++) {	  
		ofs << to_string(user[i].rday[j].tm_year);
		ofs << to_string(user[i].rday[j].tm_mon);
		ofs << to_string(user[i].rday[j].tm_mday);
		ofs << to_string(user[i].rday[j].tm_hour);
		ofs << to_string(user[i].rday[j].tm_min);
		ofs << to_string(user[i].rday[j].tm_sec) << ',';
	}
	ofs << user[i].books << "\n";
}
	
	completeForm^ frm = gcnew completeForm();
	frm->Show();

	this->Close();
}
};
}
