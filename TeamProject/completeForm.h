#pragma once

#include "sign up Form.h"

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// completeForm の概要
	/// </summary>
	public ref class completeForm : public System::Windows::Forms::Form
	{
	public:
		completeForm(void)
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
		~completeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_complete;
	protected:
	private: System::Windows::Forms::Button^ Button_complete_return;
	private: System::Windows::Forms::Label^ Label_confirmation_header;
	private: System::Windows::Forms::Label^ Label_confirmation_footer;


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
			this->Label_complete = (gcnew System::Windows::Forms::Label());
			this->Button_complete_return = (gcnew System::Windows::Forms::Button());
			this->Label_confirmation_header = (gcnew System::Windows::Forms::Label());
			this->Label_confirmation_footer = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Label_complete
			// 
			this->Label_complete->AutoSize = true;
			this->Label_complete->Location = System::Drawing::Point(141, 107);
			this->Label_complete->Name = L"Label_complete";
			this->Label_complete->Size = System::Drawing::Size(97, 15);
			this->Label_complete->TabIndex = 0;
			this->Label_complete->Text = L"新規登録完了";
			// 
			// Button_complete_return
			// 
			this->Button_complete_return->BackColor = System::Drawing::SystemColors::Control;
			this->Button_complete_return->Location = System::Drawing::Point(123, 195);
			this->Button_complete_return->Name = L"Button_complete_return";
			this->Button_complete_return->Size = System::Drawing::Size(142, 23);
			this->Button_complete_return->TabIndex = 1;
			this->Button_complete_return->Text = L"ログイン画面に戻る";
			this->Button_complete_return->UseVisualStyleBackColor = false;
			this->Button_complete_return->Click += gcnew System::EventHandler(this, &completeForm::Button_complete_return_Click);
			// 
			// Label_confirmation_header
			// 
			this->Label_confirmation_header->AutoSize = true;
			this->Label_confirmation_header->BackColor = System::Drawing::Color::Peru;
			this->Label_confirmation_header->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(128)));
			this->Label_confirmation_header->Location = System::Drawing::Point(-1, 0);
			this->Label_confirmation_header->Name = L"Label_confirmation_header";
			this->Label_confirmation_header->Size = System::Drawing::Size(394, 28);
			this->Label_confirmation_header->TabIndex = 2;
			this->Label_confirmation_header->Text = L"図書貸し出しシステム　　　　　　　 ";
			this->Label_confirmation_header->Click += gcnew System::EventHandler(this, &completeForm::Label_confirmation_header_Click);
			// 
			// Label_confirmation_footer
			// 
			this->Label_confirmation_footer->AutoSize = true;
			this->Label_confirmation_footer->BackColor = System::Drawing::Color::Peru;
			this->Label_confirmation_footer->Location = System::Drawing::Point(-2, 320);
			this->Label_confirmation_footer->Name = L"Label_confirmation_footer";
			this->Label_confirmation_footer->Size = System::Drawing::Size(395, 15);
			this->Label_confirmation_footer->TabIndex = 3;
			this->Label_confirmation_footer->Text = L"　　　　　　　　　　　　　　　　copyright　　　　　　　　　　　　　　　　　";
			// 
			// completeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 335);
			this->Controls->Add(this->Label_confirmation_footer);
			this->Controls->Add(this->Label_confirmation_header);
			this->Controls->Add(this->Button_complete_return);
			this->Controls->Add(this->Label_complete);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"completeForm";
			this->Text = L"completeForm";
			this->Load += gcnew System::EventHandler(this, &completeForm::completeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label_confirmation_header_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Button_complete_return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void completeForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
