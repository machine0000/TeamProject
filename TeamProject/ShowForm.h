#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "class.h"
using namespace std;

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ShowForm の概要
	/// </summary>
	public ref class ShowForm : public System::Windows::Forms::Form
	{
	public:
		ShowForm(void)
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
		~ShowForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ l_s_header;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ t_s_recommendbook;
	private: System::Windows::Forms::TextBox^ t_s_recommend;


	private: System::Windows::Forms::ComboBox^ c_s_genre;

	private: System::Windows::Forms::Button^ b_s_search;

	private: System::Windows::Forms::Label^ l_s_page;

	private: System::Windows::Forms::Label^ l_s_book1;
	private: System::Windows::Forms::Label^ l_s_bar1;




	private: System::Windows::Forms::Button^ b_s_lend1;

	private: System::Windows::Forms::Label^ ll_s_detailform2;
	private: System::Windows::Forms::Button^ b_s_lend2;
	private: System::Windows::Forms::Label^ l_s_bar2;





	private: System::Windows::Forms::Label^ l_s_book2;
	private: System::Windows::Forms::Label^ ll_s_detailform3;
	private: System::Windows::Forms::Button^ b_s_lend3;
	private: System::Windows::Forms::Label^ l_s_bar3;





	private: System::Windows::Forms::Label^ l_s_book3;
	private: System::Windows::Forms::Label^ ll_s_detailform4;
	private: System::Windows::Forms::Button^ b_s_lend4;
	private: System::Windows::Forms::Label^ l_s_bar4;





	private: System::Windows::Forms::Label^ l_s_book4;
	private: System::Windows::Forms::Label^ ll_s_detailform5;
	private: System::Windows::Forms::Button^ b_s_lend5;
	private: System::Windows::Forms::Label^ l_s_bar5;





	private: System::Windows::Forms::Label^ l_s_book5;
	private: System::Windows::Forms::Label^ ll_s_detailform6;
	private: System::Windows::Forms::Button^ b_s_lend6;
	private: System::Windows::Forms::Label^ l_s_bar6;






	private: System::Windows::Forms::Label^ l_s_book6;
	private: System::Windows::Forms::Label^ ll_s_detailform7;
	private: System::Windows::Forms::Button^ b_s_lend7;
	private: System::Windows::Forms::Label^ l_s_bar7;






	private: System::Windows::Forms::Label^ l_s_book7;
	private: System::Windows::Forms::Label^ ll_s_detailform8;
	private: System::Windows::Forms::Button^ b_s_lend8;
private: System::Windows::Forms::Label^ l_s_bar8;





	private: System::Windows::Forms::Label^ l_s_book8;
	private: System::Windows::Forms::Label^ ll_s_detailform9;
	private: System::Windows::Forms::Button^ b_s_lend9;
private: System::Windows::Forms::Label^ l_s_bar9;





	private: System::Windows::Forms::Label^ l_s_book9;
	private: System::Windows::Forms::Label^ ll_s_detailform10;
	private: System::Windows::Forms::Button^ b_s_lend10;
private: System::Windows::Forms::Label^ l_s_bar10;





	private: System::Windows::Forms::Label^ l_s_book10;
	private: System::Windows::Forms::Label^ ll_s_detailform1;


	private: System::Windows::Forms::Button^ b_s_next;

	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Button^ b_s_previous;

	private: System::Windows::Forms::TextBox^ t_s_choicepage;
private: System::Windows::Forms::Button^ b_s_lendform;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;



	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->l_s_header = (gcnew System::Windows::Forms::Label());
			this->t_s_recommendbook = (gcnew System::Windows::Forms::TextBox());
			this->t_s_recommend = (gcnew System::Windows::Forms::TextBox());
			this->c_s_genre = (gcnew System::Windows::Forms::ComboBox());
			this->b_s_search = (gcnew System::Windows::Forms::Button());
			this->l_s_page = (gcnew System::Windows::Forms::Label());
			this->l_s_book1 = (gcnew System::Windows::Forms::Label());
			this->l_s_bar1 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend1 = (gcnew System::Windows::Forms::Button());
			this->ll_s_detailform2 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend2 = (gcnew System::Windows::Forms::Button());
			this->l_s_bar2 = (gcnew System::Windows::Forms::Label());
			this->l_s_book2 = (gcnew System::Windows::Forms::Label());
			this->ll_s_detailform3 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend3 = (gcnew System::Windows::Forms::Button());
			this->l_s_bar3 = (gcnew System::Windows::Forms::Label());
			this->l_s_book3 = (gcnew System::Windows::Forms::Label());
			this->ll_s_detailform4 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend4 = (gcnew System::Windows::Forms::Button());
			this->l_s_bar4 = (gcnew System::Windows::Forms::Label());
			this->l_s_book4 = (gcnew System::Windows::Forms::Label());
			this->ll_s_detailform5 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend5 = (gcnew System::Windows::Forms::Button());
			this->l_s_bar5 = (gcnew System::Windows::Forms::Label());
			this->l_s_book5 = (gcnew System::Windows::Forms::Label());
			this->ll_s_detailform6 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend6 = (gcnew System::Windows::Forms::Button());
			this->l_s_bar6 = (gcnew System::Windows::Forms::Label());
			this->l_s_book6 = (gcnew System::Windows::Forms::Label());
			this->ll_s_detailform7 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend7 = (gcnew System::Windows::Forms::Button());
			this->l_s_bar7 = (gcnew System::Windows::Forms::Label());
			this->l_s_book7 = (gcnew System::Windows::Forms::Label());
			this->ll_s_detailform8 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend8 = (gcnew System::Windows::Forms::Button());
			this->l_s_bar8 = (gcnew System::Windows::Forms::Label());
			this->l_s_book8 = (gcnew System::Windows::Forms::Label());
			this->ll_s_detailform9 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend9 = (gcnew System::Windows::Forms::Button());
			this->l_s_bar9 = (gcnew System::Windows::Forms::Label());
			this->l_s_book9 = (gcnew System::Windows::Forms::Label());
			this->ll_s_detailform10 = (gcnew System::Windows::Forms::Label());
			this->b_s_lend10 = (gcnew System::Windows::Forms::Button());
			this->l_s_bar10 = (gcnew System::Windows::Forms::Label());
			this->l_s_book10 = (gcnew System::Windows::Forms::Label());
			this->ll_s_detailform1 = (gcnew System::Windows::Forms::Label());
			this->b_s_next = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->b_s_previous = (gcnew System::Windows::Forms::Button());
			this->t_s_choicepage = (gcnew System::Windows::Forms::TextBox());
			this->b_s_lendform = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// l_s_header
			// 
			this->l_s_header->BackColor = System::Drawing::Color::Peru;
			this->l_s_header->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24));
			this->l_s_header->Location = System::Drawing::Point(-2, 0);
			this->l_s_header->Name = L"l_s_header";
			this->l_s_header->Size = System::Drawing::Size(571, 40);
			this->l_s_header->TabIndex = 0;
			this->l_s_header->Text = L"図書貸し出しシステム";
			// 
			// t_s_recommendbook
			// 
			this->t_s_recommendbook->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->t_s_recommendbook->Location = System::Drawing::Point(24, 87);
			this->t_s_recommendbook->Multiline = true;
			this->t_s_recommendbook->Name = L"t_s_recommendbook";
			this->t_s_recommendbook->Size = System::Drawing::Size(325, 81);
			this->t_s_recommendbook->TabIndex = 1;
			// 
			// t_s_recommend
			// 
			this->t_s_recommend->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->t_s_recommend->Location = System::Drawing::Point(25, 60);
			this->t_s_recommend->Name = L"t_s_recommend";
			this->t_s_recommend->Size = System::Drawing::Size(150, 27);
			this->t_s_recommend->TabIndex = 2;
			this->t_s_recommend->Text = L"おすすめ";
			this->t_s_recommend->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// c_s_genre
			// 
			this->c_s_genre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->c_s_genre->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->c_s_genre->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"ジャンルを選択", L"社会", L"ミステリー", L"ファンタジー", L"エッセイ",
					L"歴史", L"ノンフィクション"
			});
			this->c_s_genre->Location = System::Drawing::Point(25, 180);
			this->c_s_genre->Name = L"c_s_genre";
			this->c_s_genre->Size = System::Drawing::Size(350, 28);
			this->c_s_genre->TabIndex = 3;
			// 
			// b_s_search
			// 
			this->b_s_search->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->b_s_search->Location = System::Drawing::Point(411, 180);
			this->b_s_search->Name = L"b_s_search";
			this->b_s_search->Size = System::Drawing::Size(75, 28);
			this->b_s_search->TabIndex = 4;
			this->b_s_search->Text = L"検索";
			this->b_s_search->UseVisualStyleBackColor = true;
			this->b_s_search->Click += gcnew System::EventHandler(this, &ShowForm::b_s_search_Click);
			// 
			// l_s_page
			// 
			this->l_s_page->AutoSize = true;
			this->l_s_page->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_page->Location = System::Drawing::Point(20, 220);
			this->l_s_page->Name = L"l_s_page";
			this->l_s_page->Size = System::Drawing::Size(92, 20);
			this->l_s_page->TabIndex = 5;
			this->l_s_page->Text = L"１ページ目";
			// 
			// l_s_book1
			// 
			this->l_s_book1->AutoSize = true;
			this->l_s_book1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book1->Location = System::Drawing::Point(25, 275);
			this->l_s_book1->Name = L"l_s_book1";
			this->l_s_book1->Size = System::Drawing::Size(109, 20);
			this->l_s_book1->TabIndex = 7;
			this->l_s_book1->Text = L"　１．書籍名";
			// 
			// l_s_bar1
			// 
			this->l_s_bar1->BackColor = System::Drawing::Color::Black;
			this->l_s_bar1->Location = System::Drawing::Point(26, 295);
			this->l_s_bar1->Name = L"l_s_bar1";
			this->l_s_bar1->Size = System::Drawing::Size(370, 1);
			this->l_s_bar1->TabIndex = 8;
			// 
			// b_s_lend1
			// 
			this->b_s_lend1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend1->Location = System::Drawing::Point(400, 271);
			this->b_s_lend1->Name = L"b_s_lend1";
			this->b_s_lend1->Size = System::Drawing::Size(102, 28);
			this->b_s_lend1->TabIndex = 9;
			this->b_s_lend1->Text = L"貸し出し";
			this->b_s_lend1->UseVisualStyleBackColor = true;
			// 
			// ll_s_detailform2
			// 
			this->ll_s_detailform2->AutoSize = true;
			this->ll_s_detailform2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform2->Location = System::Drawing::Point(345, 309);
			this->ll_s_detailform2->Name = L"ll_s_detailform2";
			this->ll_s_detailform2->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform2->TabIndex = 14;
			this->ll_s_detailform2->Text = L"詳細";
			// 
			// b_s_lend2
			// 
			this->b_s_lend2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend2->Location = System::Drawing::Point(400, 305);
			this->b_s_lend2->Name = L"b_s_lend2";
			this->b_s_lend2->Size = System::Drawing::Size(102, 28);
			this->b_s_lend2->TabIndex = 13;
			this->b_s_lend2->Text = L"貸し出し";
			this->b_s_lend2->UseVisualStyleBackColor = true;
			// 
			// l_s_bar2
			// 
			this->l_s_bar2->BackColor = System::Drawing::Color::Black;
			this->l_s_bar2->Location = System::Drawing::Point(26, 329);
			this->l_s_bar2->Name = L"l_s_bar2";
			this->l_s_bar2->Size = System::Drawing::Size(370, 1);
			this->l_s_bar2->TabIndex = 12;
			// 
			// l_s_book2
			// 
			this->l_s_book2->AutoSize = true;
			this->l_s_book2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book2->Location = System::Drawing::Point(25, 309);
			this->l_s_book2->Name = L"l_s_book2";
			this->l_s_book2->Size = System::Drawing::Size(109, 20);
			this->l_s_book2->TabIndex = 11;
			this->l_s_book2->Text = L"　２．書籍名";
			// 
			// ll_s_detailform3
			// 
			this->ll_s_detailform3->AutoSize = true;
			this->ll_s_detailform3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform3->Location = System::Drawing::Point(345, 343);
			this->ll_s_detailform3->Name = L"ll_s_detailform3";
			this->ll_s_detailform3->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform3->TabIndex = 18;
			this->ll_s_detailform3->Text = L"詳細";
			// 
			// b_s_lend3
			// 
			this->b_s_lend3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend3->Location = System::Drawing::Point(400, 339);
			this->b_s_lend3->Name = L"b_s_lend3";
			this->b_s_lend3->Size = System::Drawing::Size(102, 28);
			this->b_s_lend3->TabIndex = 17;
			this->b_s_lend3->Text = L"貸し出し";
			this->b_s_lend3->UseVisualStyleBackColor = true;
			// 
			// l_s_bar3
			// 
			this->l_s_bar3->BackColor = System::Drawing::Color::Black;
			this->l_s_bar3->Location = System::Drawing::Point(26, 363);
			this->l_s_bar3->Name = L"l_s_bar3";
			this->l_s_bar3->Size = System::Drawing::Size(370, 1);
			this->l_s_bar3->TabIndex = 16;
			// 
			// l_s_book3
			// 
			this->l_s_book3->AutoSize = true;
			this->l_s_book3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book3->Location = System::Drawing::Point(25, 343);
			this->l_s_book3->Name = L"l_s_book3";
			this->l_s_book3->Size = System::Drawing::Size(109, 20);
			this->l_s_book3->TabIndex = 15;
			this->l_s_book3->Text = L"　３．書籍名";
			// 
			// ll_s_detailform4
			// 
			this->ll_s_detailform4->AutoSize = true;
			this->ll_s_detailform4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform4->Location = System::Drawing::Point(345, 377);
			this->ll_s_detailform4->Name = L"ll_s_detailform4";
			this->ll_s_detailform4->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform4->TabIndex = 22;
			this->ll_s_detailform4->Text = L"詳細";
			// 
			// b_s_lend4
			// 
			this->b_s_lend4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend4->Location = System::Drawing::Point(400, 373);
			this->b_s_lend4->Name = L"b_s_lend4";
			this->b_s_lend4->Size = System::Drawing::Size(102, 28);
			this->b_s_lend4->TabIndex = 21;
			this->b_s_lend4->Text = L"貸し出し";
			this->b_s_lend4->UseVisualStyleBackColor = true;
			// 
			// l_s_bar4
			// 
			this->l_s_bar4->BackColor = System::Drawing::Color::Black;
			this->l_s_bar4->Location = System::Drawing::Point(26, 397);
			this->l_s_bar4->Name = L"l_s_bar4";
			this->l_s_bar4->Size = System::Drawing::Size(370, 1);
			this->l_s_bar4->TabIndex = 20;
			// 
			// l_s_book4
			// 
			this->l_s_book4->AutoSize = true;
			this->l_s_book4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book4->Location = System::Drawing::Point(25, 377);
			this->l_s_book4->Name = L"l_s_book4";
			this->l_s_book4->Size = System::Drawing::Size(109, 20);
			this->l_s_book4->TabIndex = 19;
			this->l_s_book4->Text = L"　４．書籍名";
			// 
			// ll_s_detailform5
			// 
			this->ll_s_detailform5->AutoSize = true;
			this->ll_s_detailform5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform5->Location = System::Drawing::Point(345, 411);
			this->ll_s_detailform5->Name = L"ll_s_detailform5";
			this->ll_s_detailform5->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform5->TabIndex = 26;
			this->ll_s_detailform5->Text = L"詳細";
			// 
			// b_s_lend5
			// 
			this->b_s_lend5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend5->Location = System::Drawing::Point(400, 407);
			this->b_s_lend5->Name = L"b_s_lend5";
			this->b_s_lend5->Size = System::Drawing::Size(102, 28);
			this->b_s_lend5->TabIndex = 25;
			this->b_s_lend5->Text = L"貸し出し";
			this->b_s_lend5->UseVisualStyleBackColor = true;
			// 
			// l_s_bar5
			// 
			this->l_s_bar5->BackColor = System::Drawing::Color::Black;
			this->l_s_bar5->Location = System::Drawing::Point(26, 431);
			this->l_s_bar5->Name = L"l_s_bar5";
			this->l_s_bar5->Size = System::Drawing::Size(370, 1);
			this->l_s_bar5->TabIndex = 24;
			// 
			// l_s_book5
			// 
			this->l_s_book5->AutoSize = true;
			this->l_s_book5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book5->Location = System::Drawing::Point(25, 411);
			this->l_s_book5->Name = L"l_s_book5";
			this->l_s_book5->Size = System::Drawing::Size(109, 20);
			this->l_s_book5->TabIndex = 23;
			this->l_s_book5->Text = L"　５．書籍名";
			// 
			// ll_s_detailform6
			// 
			this->ll_s_detailform6->AutoSize = true;
			this->ll_s_detailform6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform6->Location = System::Drawing::Point(345, 445);
			this->ll_s_detailform6->Name = L"ll_s_detailform6";
			this->ll_s_detailform6->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform6->TabIndex = 30;
			this->ll_s_detailform6->Text = L"詳細";
			// 
			// b_s_lend6
			// 
			this->b_s_lend6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend6->Location = System::Drawing::Point(400, 441);
			this->b_s_lend6->Name = L"b_s_lend6";
			this->b_s_lend6->Size = System::Drawing::Size(102, 28);
			this->b_s_lend6->TabIndex = 29;
			this->b_s_lend6->Text = L"貸し出し";
			this->b_s_lend6->UseVisualStyleBackColor = true;
			// 
			// l_s_bar6
			// 
			this->l_s_bar6->BackColor = System::Drawing::Color::Black;
			this->l_s_bar6->Location = System::Drawing::Point(26, 465);
			this->l_s_bar6->Name = L"l_s_bar6";
			this->l_s_bar6->Size = System::Drawing::Size(370, 1);
			this->l_s_bar6->TabIndex = 28;
			// 
			// l_s_book6
			// 
			this->l_s_book6->AutoSize = true;
			this->l_s_book6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book6->Location = System::Drawing::Point(25, 445);
			this->l_s_book6->Name = L"l_s_book6";
			this->l_s_book6->Size = System::Drawing::Size(109, 20);
			this->l_s_book6->TabIndex = 27;
			this->l_s_book6->Text = L"　６．書籍名";
			// 
			// ll_s_detailform7
			// 
			this->ll_s_detailform7->AutoSize = true;
			this->ll_s_detailform7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform7->Location = System::Drawing::Point(345, 479);
			this->ll_s_detailform7->Name = L"ll_s_detailform7";
			this->ll_s_detailform7->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform7->TabIndex = 34;
			this->ll_s_detailform7->Text = L"詳細";
			// 
			// b_s_lend7
			// 
			this->b_s_lend7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend7->Location = System::Drawing::Point(400, 475);
			this->b_s_lend7->Name = L"b_s_lend7";
			this->b_s_lend7->Size = System::Drawing::Size(102, 28);
			this->b_s_lend7->TabIndex = 33;
			this->b_s_lend7->Text = L"貸し出し";
			this->b_s_lend7->UseVisualStyleBackColor = true;
			// 
			// l_s_bar7
			// 
			this->l_s_bar7->BackColor = System::Drawing::Color::Black;
			this->l_s_bar7->Location = System::Drawing::Point(26, 499);
			this->l_s_bar7->Name = L"l_s_bar7";
			this->l_s_bar7->Size = System::Drawing::Size(370, 1);
			this->l_s_bar7->TabIndex = 32;
			// 
			// l_s_book7
			// 
			this->l_s_book7->AutoSize = true;
			this->l_s_book7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book7->Location = System::Drawing::Point(25, 479);
			this->l_s_book7->Name = L"l_s_book7";
			this->l_s_book7->Size = System::Drawing::Size(109, 20);
			this->l_s_book7->TabIndex = 31;
			this->l_s_book7->Text = L"　７．書籍名";
			// 
			// ll_s_detailform8
			// 
			this->ll_s_detailform8->AutoSize = true;
			this->ll_s_detailform8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform8->Location = System::Drawing::Point(345, 513);
			this->ll_s_detailform8->Name = L"ll_s_detailform8";
			this->ll_s_detailform8->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform8->TabIndex = 38;
			this->ll_s_detailform8->Text = L"詳細";
			// 
			// b_s_lend8
			// 
			this->b_s_lend8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend8->Location = System::Drawing::Point(400, 509);
			this->b_s_lend8->Name = L"b_s_lend8";
			this->b_s_lend8->Size = System::Drawing::Size(102, 28);
			this->b_s_lend8->TabIndex = 37;
			this->b_s_lend8->Text = L"貸し出し";
			this->b_s_lend8->UseVisualStyleBackColor = true;
			// 
			// l_s_bar8
			// 
			this->l_s_bar8->BackColor = System::Drawing::Color::Black;
			this->l_s_bar8->Location = System::Drawing::Point(26, 533);
			this->l_s_bar8->Name = L"l_s_bar8";
			this->l_s_bar8->Size = System::Drawing::Size(370, 1);
			this->l_s_bar8->TabIndex = 36;
			// 
			// l_s_book8
			// 
			this->l_s_book8->AutoSize = true;
			this->l_s_book8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book8->Location = System::Drawing::Point(25, 513);
			this->l_s_book8->Name = L"l_s_book8";
			this->l_s_book8->Size = System::Drawing::Size(109, 20);
			this->l_s_book8->TabIndex = 35;
			this->l_s_book8->Text = L"　８．書籍名";
			// 
			// ll_s_detailform9
			// 
			this->ll_s_detailform9->AutoSize = true;
			this->ll_s_detailform9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform9->Location = System::Drawing::Point(345, 547);
			this->ll_s_detailform9->Name = L"ll_s_detailform9";
			this->ll_s_detailform9->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform9->TabIndex = 42;
			this->ll_s_detailform9->Text = L"詳細";
			// 
			// b_s_lend9
			// 
			this->b_s_lend9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend9->Location = System::Drawing::Point(400, 543);
			this->b_s_lend9->Name = L"b_s_lend9";
			this->b_s_lend9->Size = System::Drawing::Size(102, 28);
			this->b_s_lend9->TabIndex = 41;
			this->b_s_lend9->Text = L"貸し出し";
			this->b_s_lend9->UseVisualStyleBackColor = true;
			// 
			// l_s_bar9
			// 
			this->l_s_bar9->BackColor = System::Drawing::Color::Black;
			this->l_s_bar9->Location = System::Drawing::Point(26, 567);
			this->l_s_bar9->Name = L"l_s_bar9";
			this->l_s_bar9->Size = System::Drawing::Size(370, 1);
			this->l_s_bar9->TabIndex = 40;
			// 
			// l_s_book9
			// 
			this->l_s_book9->AutoSize = true;
			this->l_s_book9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book9->Location = System::Drawing::Point(25, 547);
			this->l_s_book9->Name = L"l_s_book9";
			this->l_s_book9->Size = System::Drawing::Size(109, 20);
			this->l_s_book9->TabIndex = 39;
			this->l_s_book9->Text = L"　９．書籍名";
			// 
			// ll_s_detailform10
			// 
			this->ll_s_detailform10->AutoSize = true;
			this->ll_s_detailform10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform10->Location = System::Drawing::Point(345, 581);
			this->ll_s_detailform10->Name = L"ll_s_detailform10";
			this->ll_s_detailform10->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform10->TabIndex = 46;
			this->ll_s_detailform10->Text = L"詳細";
			// 
			// b_s_lend10
			// 
			this->b_s_lend10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend10->Location = System::Drawing::Point(400, 577);
			this->b_s_lend10->Name = L"b_s_lend10";
			this->b_s_lend10->Size = System::Drawing::Size(102, 28);
			this->b_s_lend10->TabIndex = 45;
			this->b_s_lend10->Text = L"貸し出し";
			this->b_s_lend10->UseVisualStyleBackColor = true;
			// 
			// l_s_bar10
			// 
			this->l_s_bar10->BackColor = System::Drawing::Color::Black;
			this->l_s_bar10->Location = System::Drawing::Point(26, 601);
			this->l_s_bar10->Name = L"l_s_bar10";
			this->l_s_bar10->Size = System::Drawing::Size(370, 1);
			this->l_s_bar10->TabIndex = 44;
			// 
			// l_s_book10
			// 
			this->l_s_book10->AutoSize = true;
			this->l_s_book10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book10->Location = System::Drawing::Point(25, 581);
			this->l_s_book10->Name = L"l_s_book10";
			this->l_s_book10->Size = System::Drawing::Size(110, 20);
			this->l_s_book10->TabIndex = 43;
			this->l_s_book10->Text = L"１０．書籍名";
			// 
			// ll_s_detailform1
			// 
			this->ll_s_detailform1->AutoSize = true;
			this->ll_s_detailform1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform1->Location = System::Drawing::Point(345, 275);
			this->ll_s_detailform1->Name = L"ll_s_detailform1";
			this->ll_s_detailform1->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform1->TabIndex = 47;
			this->ll_s_detailform1->Text = L"詳細";
			// 
			// b_s_next
			// 
			this->b_s_next->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->b_s_next->Location = System::Drawing::Point(334, 660);
			this->b_s_next->Name = L"b_s_next";
			this->b_s_next->Size = System::Drawing::Size(60, 40);
			this->b_s_next->TabIndex = 48;
			this->b_s_next->Text = L"次";
			this->b_s_next->UseVisualStyleBackColor = true;
			this->b_s_next->Click += gcnew System::EventHandler(this, &ShowForm::b_s_next_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label33->Location = System::Drawing::Point(250, 670);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(58, 20);
			this->label33->TabIndex = 50;
			this->label33->Text = L"ページ";
			// 
			// b_s_previous
			// 
			this->b_s_previous->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->b_s_previous->Location = System::Drawing::Point(115, 660);
			this->b_s_previous->Name = L"b_s_previous";
			this->b_s_previous->Size = System::Drawing::Size(60, 40);
			this->b_s_previous->TabIndex = 51;
			this->b_s_previous->Text = L"前";
			this->b_s_previous->UseVisualStyleBackColor = true;
			this->b_s_previous->Click += gcnew System::EventHandler(this, &ShowForm::b_s_previous_Click);
			// 
			// t_s_choicepage
			// 
			this->t_s_choicepage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->t_s_choicepage->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20));
			this->t_s_choicepage->Location = System::Drawing::Point(200, 660);
			this->t_s_choicepage->MaxLength = 2;
			this->t_s_choicepage->Name = L"t_s_choicepage";
			this->t_s_choicepage->Size = System::Drawing::Size(40, 41);
			this->t_s_choicepage->TabIndex = 52;
			this->t_s_choicepage->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ShowForm::t_s_choicepage_KeyPress);
			// 
			// b_s_lendform
			// 
			this->b_s_lendform->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->b_s_lendform->Location = System::Drawing::Point(352, 214);
			this->b_s_lendform->Name = L"b_s_lendform";
			this->b_s_lendform->Size = System::Drawing::Size(150, 35);
			this->b_s_lendform->TabIndex = 53;
			this->b_s_lendform->Text = L"貸し出し詳細";
			this->b_s_lendform->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Peru;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9));
			this->label1->Location = System::Drawing::Point(-2, 734);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(571, 20);
			this->label1->TabIndex = 54;
			this->label1->Text = L"copyright(C)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24));
			this->label2->Location = System::Drawing::Point(20, 620);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(480, 20);
			this->label2->TabIndex = 55;
			// 
			// ShowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 753);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->b_s_lendform);
			this->Controls->Add(this->t_s_choicepage);
			this->Controls->Add(this->b_s_previous);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->b_s_next);
			this->Controls->Add(this->ll_s_detailform1);
			this->Controls->Add(this->ll_s_detailform10);
			this->Controls->Add(this->b_s_lend10);
			this->Controls->Add(this->l_s_bar10);
			this->Controls->Add(this->l_s_book10);
			this->Controls->Add(this->ll_s_detailform9);
			this->Controls->Add(this->b_s_lend9);
			this->Controls->Add(this->l_s_bar9);
			this->Controls->Add(this->l_s_book9);
			this->Controls->Add(this->ll_s_detailform8);
			this->Controls->Add(this->b_s_lend8);
			this->Controls->Add(this->l_s_bar8);
			this->Controls->Add(this->l_s_book8);
			this->Controls->Add(this->ll_s_detailform7);
			this->Controls->Add(this->b_s_lend7);
			this->Controls->Add(this->l_s_bar7);
			this->Controls->Add(this->l_s_book7);
			this->Controls->Add(this->ll_s_detailform6);
			this->Controls->Add(this->b_s_lend6);
			this->Controls->Add(this->l_s_bar6);
			this->Controls->Add(this->l_s_book6);
			this->Controls->Add(this->ll_s_detailform5);
			this->Controls->Add(this->b_s_lend5);
			this->Controls->Add(this->l_s_bar5);
			this->Controls->Add(this->l_s_book5);
			this->Controls->Add(this->ll_s_detailform4);
			this->Controls->Add(this->b_s_lend4);
			this->Controls->Add(this->l_s_bar4);
			this->Controls->Add(this->l_s_book4);
			this->Controls->Add(this->ll_s_detailform3);
			this->Controls->Add(this->b_s_lend3);
			this->Controls->Add(this->l_s_bar3);
			this->Controls->Add(this->l_s_book3);
			this->Controls->Add(this->ll_s_detailform2);
			this->Controls->Add(this->b_s_lend2);
			this->Controls->Add(this->l_s_bar2);
			this->Controls->Add(this->l_s_book2);
			this->Controls->Add(this->b_s_lend1);
			this->Controls->Add(this->l_s_bar1);
			this->Controls->Add(this->l_s_book1);
			this->Controls->Add(this->l_s_page);
			this->Controls->Add(this->b_s_search);
			this->Controls->Add(this->c_s_genre);
			this->Controls->Add(this->t_s_recommend);
			this->Controls->Add(this->t_s_recommendbook);
			this->Controls->Add(this->l_s_header);
			this->Name = L"ShowForm";
			this->Text = L"貸し出し";
			this->Load += gcnew System::EventHandler(this, &ShowForm::ShowForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: int choice = 1;
		private: int pagemax;

		private: void showBook(int num) {
			//ページ変更
			l_s_page->Text = msclr::interop::marshal_as<System::String^>(to_string(num)) + "ページ目";
			page = num;

//未実装			//図書一覧変更
			//ジャンル未選択
			if (selectgenre == "選択されたジャンル") {
				//　１番目の表示
				l_s_book1->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10].title);
				//　２番目の表示
				if(lib[(num - 1) * 10 + 1].title != ""){
					l_s_book2->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 1].title);
				}
				else {
					l_s_book2->Visible = false;
					ll_s_detailform2->Visible = false;
					b_s_lend2->Visible = false;
					l_s_bar2->Visible = false;
				}
				//　３番目の表示
				if (lib[(num - 1) * 10 + 2].title != "") {
					l_s_book3->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 2].title);
				}
				else {
					l_s_book3->Visible = false;
					ll_s_detailform3->Visible = false;
					b_s_lend3->Visible = false;
					l_s_bar3->Visible = false;
				}
				//　４番目の表示
				if (lib[(num - 1) * 10 + 3].title != "") {
					l_s_book4->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 3].title);
				}
				else {
					l_s_book4->Visible = false;
					ll_s_detailform4->Visible = false;
					b_s_lend4->Visible = false;
					l_s_bar4->Visible = false;
				}
				//　５番目の表示
				if (lib[(num - 1) * 10 + 4].title != "") {
					l_s_book5->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 4].title);
				}
				else {
					l_s_book5->Visible = false;
					ll_s_detailform5->Visible = false;
					b_s_lend5->Visible = false;
					l_s_bar5->Visible = false;
				}
				//　６番目の表示
				if (lib[(num - 1) * 10 + 5].title != "") {
					l_s_book6->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 5].title);
				}
				else {
					l_s_book6->Visible = false;
					ll_s_detailform6->Visible = false;
					b_s_lend6->Visible = false;
					l_s_bar6->Visible = false;
				}
				//　７番目の表示
				if (lib[(num - 1) * 10 + 6].title != "") {
					l_s_book7->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 6].title);
				}
				else {
					l_s_book7->Visible = false;
					ll_s_detailform7->Visible = false;
					b_s_lend7->Visible = false;
					l_s_bar7->Visible = false;
				}
				//　８番目の表示
				if (lib[(num - 1) * 10 + 7].title != "") {
					l_s_book8->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 7].title);
				}
				else {
					l_s_book8->Visible = false;
					ll_s_detailform8->Visible = false;
					b_s_lend8->Visible = false;
					l_s_bar8->Visible = false;
				}
				//　９番目の表示
				if (lib[(num - 1) * 10 + 8].title != "") {
					l_s_book9->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 8].title);
				}
				else {
					l_s_book9->Visible = false;
					ll_s_detailform9->Visible = false;
					b_s_lend9->Visible = false;
					l_s_bar9->Visible = false;
				}
				//　１０番目の表示
				if (lib[(num - 1) * 10 + 9].title != "") {
					l_s_book10->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 9].title);
				}
				else {
					l_s_book10->Visible = false;
					ll_s_detailform10->Visible = false;
					b_s_lend10->Visible = false;
					l_s_bar10->Visible = false;
				}
			}
			else {
				//ジャンル選択
				/*l_s_book1->Text = lib.name[(num - 1) * 10];
				l_s_book2->Text = gen.name[(num-1)*10+1];
				l_s_book3->Text = gen.name[(num-1)*10+2];
				l_s_book4->Text = gen.name[(num-1)*10+3];
				l_s_book5->Text = gen.name[(num-1)*10+4];
				l_s_book6->Text = gen.name[(num-1)*10+5];
				l_s_book7->Text = gen.name[(num-1)*10+6];
				l_s_book8->Text = gen.name[(num-1)*10+7];
				l_s_book9->Text = gen.name[(num-1)*10+8];
				l_s_book10->Text = gen.name[(num-1)*10+9];*/
			}

			//ページがなければボタンを無効化
			if (num == 1) {
				b_s_previous->Enabled = false;
			}
			else {
				b_s_previous->Enabled = true;
			}

//未実装
			if (num == pagemax) {
				b_s_next->Enabled = false;
			}
			else {
				b_s_next->Enabled = true;
			}
		}

		private: System::Void ShowForm_Load(System::Object^ sender, System::EventArgs^ e) {
			//図書クラスのファイル入力
			string str_buf;
			string str_conma_buf;
			string time;

			// 読み込むcsvファイルを開く(std::ifstreamのコンストラクタで開く)
			std::ifstream ifs("sample.csv");

			// getline関数で1行ずつ読み込む(読み込んだ内容はstr_bufに格納)
			for (nummax = 0; getline(ifs, str_buf); nummax++) {
				// 「,」区切りごとにデータを読み込むためにistringstream型にする
				istringstream i_stream(str_buf);

				// １列目
				// 「,」区切りごとにデータを読み込む
				getline(i_stream, str_conma_buf, ',');
				// 読み込んだデータをクラスに格納
				lib[nummax].title = str_conma_buf;

				// ２列目
				getline(i_stream, str_conma_buf, ',');
				lib[nummax].genre = str_conma_buf;

				// ３列目
				getline(i_stream, str_conma_buf, ',');
				/*if (str_conma_buf != "") {
					//年
					time = str_conma_buf.substr(0, 4);
					lib[nummax].rday.tm_year = stoi(time);
					//月
					time = str_conma_buf.substr(4, 2);
					lib[nummax].rday.tm_mon = stoi(time);
					//日
					time = str_conma_buf.substr(6, 2);
					lib[nummax].rday.tm_mday = stoi(time);
					//時
					time = str_conma_buf.substr(8, 2);
					lib[nummax].rday.tm_hour = stoi(time);
					//分
					time = str_conma_buf.substr(10, 2);
					lib[nummax].rday.tm_min = stoi(time);
					//秒
					time = str_conma_buf.substr(12, 2);
					lib[nummax].rday.tm_sec = stoi(time);
				}*/

				// ４列目
				getline(i_stream, str_conma_buf, ',');
				lib[nummax].pub = str_conma_buf;

				//// ５列目
				//getline(i_stream, str_conma_buf, ',');
				//lib[nummax].writer = str_conma_buf;

				// ６列目
				getline(i_stream, str_conma_buf, ',');
				if (str_conma_buf != "") {
					//年
					time = str_conma_buf.substr(0, 4);
					lib[nummax].aday.tm_year = stoi(time);
					//月
					time = str_conma_buf.substr(4, 2);
					lib[nummax].aday.tm_mon = stoi(time);
					//日
					time = str_conma_buf.substr(6, 2);
					lib[nummax].aday.tm_mday = stoi(time);
					//時
					time = str_conma_buf.substr(8, 2);
					lib[nummax].aday.tm_hour = stoi(time);
					//分
					time = str_conma_buf.substr(10, 2);
					lib[nummax].aday.tm_min = stoi(time);
					//秒
					time = str_conma_buf.substr(12, 2);
					lib[nummax].aday.tm_sec = stoi(time);
				}

				// ７列目
				getline(i_stream, str_conma_buf, ',');
				lib[nummax].lendname = str_conma_buf;

				// ８列目
				getline(i_stream, str_conma_buf, ',');
				if (str_conma_buf != "") {
					lib[nummax].count = stoi(str_conma_buf);
				}

				// ９列目
				getline(i_stream, str_conma_buf, ',');
				if (str_conma_buf != "") {
					lib[nummax].rest = stoi(str_conma_buf);
				}

				
			}
			pagemax = nummax / 10;
			ifs.close();

//未実装			//おすすめ表示


			//コンボボックスに「ジャンルを選択」を表示
			c_s_genre->SelectedIndex = 0;

			//１ページ目の図書一覧表示
			showBook(1);
		}

		private: System::Void b_s_search_Click(System::Object^ sender, System::EventArgs^ e) {

			//選択されたジャンルを変数に格納
			string selectgenre = msclr::interop::marshal_as<string>(c_s_genre->SelectedItem->ToString());

//未実装			//選択されたジャンルのクラスに入力
			string str_buf;
			string str_conma_buf;
			string time;
			int j = 0;

			// 読み込むcsvファイルを開く(std::ifstreamのコンストラクタで開く)
			std::ifstream ifs("sample.csv");

			// getline関数で1行ずつ読み込む(読み込んだ内容はstr_bufに格納)
			for (int i = 0; i == nummax; i++) {

				if(lib[i].genre == selectgenre) {
					// １列目
					// 選択されたジャンルのデータを格納
					gen[j].title = lib[i].title;

					// ２列目
					gen[j].genre = lib[i].genre;

					// ３列目
					/*if (str_conma_buf != "") {
						//年
						gen[j].rday.tm_year = lib[i].rday.tm_year;
						//月
						gen[j].rday.tm_mon = lib[i].rday.tm_mon;
						//日
						gen[j].rday.tm_mday = lib[i].rday.tm_mday;
						//時
						gen[j].rday.tm_hour = lib[i].rday.tm_hour;
						//分
						gen[j].rday.tm_min = lib[i].rday.tm_min;
						//秒
						gen[j].rday.tm_sec = lib[i].rday.tm_sec;
					}*/

					// ４列目
					gen[j].pub = lib[i].pub;

					//// ５列目
					//getline(i_stream, str_conma_buf, ',');
					//gen[i].writer = str_conma_buf;

					// ６列目
						//年
						gen[i].aday.tm_year = stoi(time);
						//月
						gen[i].aday.tm_mon = stoi(time);
						//日
						gen[i].aday.tm_mday = stoi(time);
						//時
						gen[i].aday.tm_hour = stoi(time);
						//分
						gen[i].aday.tm_min = stoi(time);
						//秒
						gen[i].aday.tm_sec = stoi(time);

					// ７列目
					gen[i].lendname = str_conma_buf;

					// ８列目
					if (str_conma_buf != "") {
						gen[i].count = stoi(str_conma_buf);
					}

					// ９列目
					if (str_conma_buf != "") {
						gen[i].rest = stoi(str_conma_buf);
					}
					j++;
				}
			}
			pagemax = j / 10;

			//選択されたジャンルの１ページ目を表示
			showBook(1);

		};

		private: void t_s_choicepage_KeyPress(System::Object^ senderr, KeyPressEventArgs^ e)
		{
			if (e->KeyChar == '\r') // Enterキーが押された場合
			{
				//テキストボックス記入された文字列を
				choice = stoi(msclr::interop::marshal_as<string>(t_s_choicepage->Text));
				showBook(choice);
			}
		}

		private: System::Void b_s_previous_Click(System::Object^ sender, System::EventArgs^ e) {
			//前ページの一覧に更新
			showBook(page - 1);
		}

		private: System::Void b_s_next_Click(System::Object^ sender, System::EventArgs^ e) {
			//次ページの一覧に更新
			showBook(page + 1);
		}


};
}
