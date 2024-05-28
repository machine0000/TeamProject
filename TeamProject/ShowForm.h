#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <regex>
#include <time.h>
#include "class.h"
#include "LendForm.h"
#include "Book_detail_form.h"
using namespace std;

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ShowForm �̊T�v
	/// </summary>
	public ref class ShowForm : public System::Windows::Forms::Form
	{
	public:
		ShowForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
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
private: System::Windows::Forms::Label^ l_s_error;

private: System::Windows::Forms::Label^ l_s_recommend;
private: System::Windows::Forms::Label^ l_s_recommendbook;
private: System::Windows::Forms::Label^ l_s_select;

private: System::Windows::Forms::Label^ l_s_lendnum;







	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->l_s_header = (gcnew System::Windows::Forms::Label());
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
			this->l_s_error = (gcnew System::Windows::Forms::Label());
			this->l_s_recommend = (gcnew System::Windows::Forms::Label());
			this->l_s_recommendbook = (gcnew System::Windows::Forms::Label());
			this->l_s_select = (gcnew System::Windows::Forms::Label());
			this->l_s_lendnum = (gcnew System::Windows::Forms::Label());
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
			this->l_s_header->Text = L"�}���݂��o���V�X�e��";
			// 
			// c_s_genre
			// 
			this->c_s_genre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->c_s_genre->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->c_s_genre->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"�W��������I��", L"�Љ�", L"�~�X�e���[", L"�t�@���^�W�[", L"�G�b�Z�C",
					L"���j", L"�m���t�B�N�V����"
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
			this->b_s_search->Text = L"����";
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
			this->l_s_page->Text = L"�P�y�[�W��";
			// 
			// l_s_book1
			// 
			this->l_s_book1->AutoSize = true;
			this->l_s_book1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_book1->Location = System::Drawing::Point(25, 275);
			this->l_s_book1->Name = L"l_s_book1";
			this->l_s_book1->Size = System::Drawing::Size(109, 20);
			this->l_s_book1->TabIndex = 7;
			this->l_s_book1->Text = L"�@�P�D���Ж�";
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
			this->b_s_lend1->Text = L"�݂��o��";
			this->b_s_lend1->UseVisualStyleBackColor = true;
			this->b_s_lend1->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend1_Click);
			// 
			// ll_s_detailform2
			// 
			this->ll_s_detailform2->AutoSize = true;
			this->ll_s_detailform2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform2->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform2->Location = System::Drawing::Point(345, 309);
			this->ll_s_detailform2->Name = L"ll_s_detailform2";
			this->ll_s_detailform2->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform2->TabIndex = 14;
			this->ll_s_detailform2->Text = L"�ڍ�";
			this->ll_s_detailform2->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform2_Click);
			this->ll_s_detailform2->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform2_MouseEnter);
			this->ll_s_detailform2->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform2_MouseLeave);
			// 
			// b_s_lend2
			// 
			this->b_s_lend2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend2->Location = System::Drawing::Point(400, 305);
			this->b_s_lend2->Name = L"b_s_lend2";
			this->b_s_lend2->Size = System::Drawing::Size(102, 28);
			this->b_s_lend2->TabIndex = 13;
			this->b_s_lend2->Text = L"�݂��o��";
			this->b_s_lend2->UseVisualStyleBackColor = true;
			this->b_s_lend2->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend2_Click);
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
			this->l_s_book2->Text = L"�@�Q�D���Ж�";
			// 
			// ll_s_detailform3
			// 
			this->ll_s_detailform3->AutoSize = true;
			this->ll_s_detailform3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform3->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform3->Location = System::Drawing::Point(345, 343);
			this->ll_s_detailform3->Name = L"ll_s_detailform3";
			this->ll_s_detailform3->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform3->TabIndex = 18;
			this->ll_s_detailform3->Text = L"�ڍ�";
			this->ll_s_detailform3->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform3_Click);
			this->ll_s_detailform3->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform3_MouseEnter);
			this->ll_s_detailform3->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform3_MouseLeave);
			// 
			// b_s_lend3
			// 
			this->b_s_lend3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend3->Location = System::Drawing::Point(400, 339);
			this->b_s_lend3->Name = L"b_s_lend3";
			this->b_s_lend3->Size = System::Drawing::Size(102, 28);
			this->b_s_lend3->TabIndex = 17;
			this->b_s_lend3->Text = L"�݂��o��";
			this->b_s_lend3->UseVisualStyleBackColor = true;
			this->b_s_lend3->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend3_Click);
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
			this->l_s_book3->Text = L"�@�R�D���Ж�";
			// 
			// ll_s_detailform4
			// 
			this->ll_s_detailform4->AutoSize = true;
			this->ll_s_detailform4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform4->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform4->Location = System::Drawing::Point(345, 377);
			this->ll_s_detailform4->Name = L"ll_s_detailform4";
			this->ll_s_detailform4->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform4->TabIndex = 22;
			this->ll_s_detailform4->Text = L"�ڍ�";
			this->ll_s_detailform4->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform4_Click);
			this->ll_s_detailform4->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform4_MouseEnter);
			this->ll_s_detailform4->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform4_MouseLeave);
			// 
			// b_s_lend4
			// 
			this->b_s_lend4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend4->Location = System::Drawing::Point(400, 373);
			this->b_s_lend4->Name = L"b_s_lend4";
			this->b_s_lend4->Size = System::Drawing::Size(102, 28);
			this->b_s_lend4->TabIndex = 21;
			this->b_s_lend4->Text = L"�݂��o��";
			this->b_s_lend4->UseVisualStyleBackColor = true;
			this->b_s_lend4->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend4_Click);
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
			this->l_s_book4->Text = L"�@�S�D���Ж�";
			// 
			// ll_s_detailform5
			// 
			this->ll_s_detailform5->AutoSize = true;
			this->ll_s_detailform5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform5->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform5->Location = System::Drawing::Point(345, 411);
			this->ll_s_detailform5->Name = L"ll_s_detailform5";
			this->ll_s_detailform5->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform5->TabIndex = 26;
			this->ll_s_detailform5->Text = L"�ڍ�";
			this->ll_s_detailform5->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform5_Click);
			this->ll_s_detailform5->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform5_MouseEnter);
			this->ll_s_detailform5->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform5_MouseLeave);
			// 
			// b_s_lend5
			// 
			this->b_s_lend5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend5->Location = System::Drawing::Point(400, 407);
			this->b_s_lend5->Name = L"b_s_lend5";
			this->b_s_lend5->Size = System::Drawing::Size(102, 28);
			this->b_s_lend5->TabIndex = 25;
			this->b_s_lend5->Text = L"�݂��o��";
			this->b_s_lend5->UseVisualStyleBackColor = true;
			this->b_s_lend5->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend5_Click);
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
			this->l_s_book5->Text = L"�@�T�D���Ж�";
			// 
			// ll_s_detailform6
			// 
			this->ll_s_detailform6->AutoSize = true;
			this->ll_s_detailform6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform6->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform6->Location = System::Drawing::Point(345, 445);
			this->ll_s_detailform6->Name = L"ll_s_detailform6";
			this->ll_s_detailform6->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform6->TabIndex = 30;
			this->ll_s_detailform6->Text = L"�ڍ�";
			this->ll_s_detailform6->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform6_Click);
			this->ll_s_detailform6->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform6_MouseEnter);
			this->ll_s_detailform6->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform6_MouseLeave);
			// 
			// b_s_lend6
			// 
			this->b_s_lend6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend6->Location = System::Drawing::Point(400, 441);
			this->b_s_lend6->Name = L"b_s_lend6";
			this->b_s_lend6->Size = System::Drawing::Size(102, 28);
			this->b_s_lend6->TabIndex = 29;
			this->b_s_lend6->Text = L"�݂��o��";
			this->b_s_lend6->UseVisualStyleBackColor = true;
			this->b_s_lend6->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend6_Click);
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
			this->l_s_book6->Text = L"�@�U�D���Ж�";
			// 
			// ll_s_detailform7
			// 
			this->ll_s_detailform7->AutoSize = true;
			this->ll_s_detailform7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform7->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform7->Location = System::Drawing::Point(345, 479);
			this->ll_s_detailform7->Name = L"ll_s_detailform7";
			this->ll_s_detailform7->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform7->TabIndex = 34;
			this->ll_s_detailform7->Text = L"�ڍ�";
			this->ll_s_detailform7->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform7_Click);
			this->ll_s_detailform7->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform7_MouseEnter);
			this->ll_s_detailform7->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform7_MouseLeave);
			// 
			// b_s_lend7
			// 
			this->b_s_lend7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend7->Location = System::Drawing::Point(400, 475);
			this->b_s_lend7->Name = L"b_s_lend7";
			this->b_s_lend7->Size = System::Drawing::Size(102, 28);
			this->b_s_lend7->TabIndex = 33;
			this->b_s_lend7->Text = L"�݂��o��";
			this->b_s_lend7->UseVisualStyleBackColor = true;
			this->b_s_lend7->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend7_Click);
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
			this->l_s_book7->Text = L"�@�V�D���Ж�";
			// 
			// ll_s_detailform8
			// 
			this->ll_s_detailform8->AutoSize = true;
			this->ll_s_detailform8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform8->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform8->Location = System::Drawing::Point(345, 513);
			this->ll_s_detailform8->Name = L"ll_s_detailform8";
			this->ll_s_detailform8->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform8->TabIndex = 38;
			this->ll_s_detailform8->Text = L"�ڍ�";
			this->ll_s_detailform8->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform8_Click);
			this->ll_s_detailform8->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform8_MouseEnter);
			this->ll_s_detailform8->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform8_MouseLeave);
			// 
			// b_s_lend8
			// 
			this->b_s_lend8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend8->Location = System::Drawing::Point(400, 509);
			this->b_s_lend8->Name = L"b_s_lend8";
			this->b_s_lend8->Size = System::Drawing::Size(102, 28);
			this->b_s_lend8->TabIndex = 37;
			this->b_s_lend8->Text = L"�݂��o��";
			this->b_s_lend8->UseVisualStyleBackColor = true;
			this->b_s_lend8->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend8_Click);
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
			this->l_s_book8->Text = L"�@�W�D���Ж�";
			// 
			// ll_s_detailform9
			// 
			this->ll_s_detailform9->AutoSize = true;
			this->ll_s_detailform9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform9->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform9->Location = System::Drawing::Point(345, 547);
			this->ll_s_detailform9->Name = L"ll_s_detailform9";
			this->ll_s_detailform9->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform9->TabIndex = 42;
			this->ll_s_detailform9->Text = L"�ڍ�";
			this->ll_s_detailform9->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform9_Click);
			this->ll_s_detailform9->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform9_MouseEnter);
			this->ll_s_detailform9->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform9_MouseLeave);
			// 
			// b_s_lend9
			// 
			this->b_s_lend9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend9->Location = System::Drawing::Point(400, 543);
			this->b_s_lend9->Name = L"b_s_lend9";
			this->b_s_lend9->Size = System::Drawing::Size(102, 28);
			this->b_s_lend9->TabIndex = 41;
			this->b_s_lend9->Text = L"�݂��o��";
			this->b_s_lend9->UseVisualStyleBackColor = true;
			this->b_s_lend9->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend9_Click);
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
			this->l_s_book9->Text = L"�@�X�D���Ж�";
			// 
			// ll_s_detailform10
			// 
			this->ll_s_detailform10->AutoSize = true;
			this->ll_s_detailform10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform10->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform10->Location = System::Drawing::Point(345, 581);
			this->ll_s_detailform10->Name = L"ll_s_detailform10";
			this->ll_s_detailform10->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform10->TabIndex = 46;
			this->ll_s_detailform10->Text = L"�ڍ�";
			this->ll_s_detailform10->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform10_Click);
			this->ll_s_detailform10->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform10_MouseEnter);
			this->ll_s_detailform10->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform10_MouseLeave);
			// 
			// b_s_lend10
			// 
			this->b_s_lend10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10));
			this->b_s_lend10->Location = System::Drawing::Point(400, 577);
			this->b_s_lend10->Name = L"b_s_lend10";
			this->b_s_lend10->Size = System::Drawing::Size(102, 28);
			this->b_s_lend10->TabIndex = 45;
			this->b_s_lend10->Text = L"�݂��o��";
			this->b_s_lend10->UseVisualStyleBackColor = true;
			this->b_s_lend10->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lend10_Click);
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
			this->l_s_book10->Text = L"�P�O�D���Ж�";
			// 
			// ll_s_detailform1
			// 
			this->ll_s_detailform1->AutoSize = true;
			this->ll_s_detailform1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->ll_s_detailform1->ForeColor = System::Drawing::Color::Blue;
			this->ll_s_detailform1->Location = System::Drawing::Point(345, 275);
			this->ll_s_detailform1->Name = L"ll_s_detailform1";
			this->ll_s_detailform1->Size = System::Drawing::Size(49, 20);
			this->ll_s_detailform1->TabIndex = 47;
			this->ll_s_detailform1->Text = L"�ڍ�";
			this->ll_s_detailform1->Click += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform1_Click);
			this->ll_s_detailform1->MouseEnter += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform1_MouseEnter);
			this->ll_s_detailform1->MouseLeave += gcnew System::EventHandler(this, &ShowForm::ll_s_detailform1_MouseLeave);
			// 
			// b_s_next
			// 
			this->b_s_next->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->b_s_next->Location = System::Drawing::Point(334, 660);
			this->b_s_next->Name = L"b_s_next";
			this->b_s_next->Size = System::Drawing::Size(60, 40);
			this->b_s_next->TabIndex = 48;
			this->b_s_next->Text = L"��";
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
			this->label33->Text = L"�y�[�W";
			// 
			// b_s_previous
			// 
			this->b_s_previous->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->b_s_previous->Location = System::Drawing::Point(115, 660);
			this->b_s_previous->Name = L"b_s_previous";
			this->b_s_previous->Size = System::Drawing::Size(60, 40);
			this->b_s_previous->TabIndex = 51;
			this->b_s_previous->Text = L"�O";
			this->b_s_previous->UseVisualStyleBackColor = true;
			this->b_s_previous->Click += gcnew System::EventHandler(this, &ShowForm::b_s_previous_Click);
			// 
			// t_s_choicepage
			// 
			this->t_s_choicepage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->t_s_choicepage->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20));
			this->t_s_choicepage->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->t_s_choicepage->Location = System::Drawing::Point(200, 660);
			this->t_s_choicepage->MaxLength = 2;
			this->t_s_choicepage->Name = L"t_s_choicepage";
			this->t_s_choicepage->ShortcutsEnabled = false;
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
			this->b_s_lendform->Text = L"�݂��o���ڍ�";
			this->b_s_lendform->UseVisualStyleBackColor = true;
			this->b_s_lendform->Click += gcnew System::EventHandler(this, &ShowForm::b_s_lendform_Click);
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
			// l_s_error
			// 
			this->l_s_error->BackColor = System::Drawing::SystemColors::Control;
			this->l_s_error->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_error->Location = System::Drawing::Point(20, 620);
			this->l_s_error->Name = L"l_s_error";
			this->l_s_error->Size = System::Drawing::Size(480, 20);
			this->l_s_error->TabIndex = 55;
			// 
			// l_s_recommend
			// 
			this->l_s_recommend->BackColor = System::Drawing::Color::White;
			this->l_s_recommend->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l_s_recommend->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_recommend->Location = System::Drawing::Point(25, 60);
			this->l_s_recommend->Name = L"l_s_recommend";
			this->l_s_recommend->Size = System::Drawing::Size(150, 27);
			this->l_s_recommend->TabIndex = 56;
			this->l_s_recommend->Text = L"��������";
			this->l_s_recommend->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// l_s_recommendbook
			// 
			this->l_s_recommendbook->BackColor = System::Drawing::Color::White;
			this->l_s_recommendbook->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->l_s_recommendbook->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_recommendbook->Location = System::Drawing::Point(25, 86);
			this->l_s_recommendbook->Name = L"l_s_recommendbook";
			this->l_s_recommendbook->Size = System::Drawing::Size(325, 81);
			this->l_s_recommendbook->TabIndex = 57;
			this->l_s_recommendbook->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// l_s_select
			// 
			this->l_s_select->AutoSize = true;
			this->l_s_select->Font = (gcnew System::Drawing::Font(L"�l�r ����", 12));
			this->l_s_select->Location = System::Drawing::Point(196, 704);
			this->l_s_select->Name = L"l_s_select";
			this->l_s_select->Size = System::Drawing::Size(49, 20);
			this->l_s_select->TabIndex = 58;
			this->l_s_select->Text = L"1�`1";
			// 
			// l_s_lendnum
			// 
			this->l_s_lendnum->AutoSize = true;
			this->l_s_lendnum->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->l_s_lendnum->Location = System::Drawing::Point(382, 106);
			this->l_s_lendnum->Name = L"l_s_lendnum";
			this->l_s_lendnum->Size = System::Drawing::Size(0, 20);
			this->l_s_lendnum->TabIndex = 59;
			this->l_s_lendnum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ShowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 753);
			this->Controls->Add(this->l_s_lendnum);
			this->Controls->Add(this->l_s_select);
			this->Controls->Add(this->l_s_recommendbook);
			this->Controls->Add(this->l_s_recommend);
			this->Controls->Add(this->l_s_error);
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
			this->Controls->Add(this->l_s_header);
			this->Name = L"ShowForm";
			this->Text = L"�݂��o��";
			this->Load += gcnew System::EventHandler(this, &ShowForm::ShowForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: int choice = 1;
		private: int pagemax;
		private: int pagemaxtmp;

		private: void showBook(int num) {
			//�y�[�W�ύX
			l_s_page->Text = msclr::interop::marshal_as<System::String^>(to_string(num)) + "�y�[�W��";
			page = num;

			lend_Botton_Enable(1);

			//�}���ꗗ�ύX
			//�W���������I��
			if (selectgenre == "�W��������I��") {
				//�@�P�Ԗڂ̕\��
				l_s_book1->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10].title);
					if (lib[(num - 1) * 10 + 0].rest == 0) { b_s_lend1->Enabled = false; }
				//�@�Q�Ԗڂ̕\��
				if(lib[(num - 1) * 10 + 1].title != ""){
					l_s_book2->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 1].title);
					if (lib[(num - 1) * 10 + 1].rest == 0) { b_s_lend2->Enabled = false; }
				}
				else {
					l_s_book2->Visible = false;
					ll_s_detailform2->Visible = false;
					b_s_lend2->Visible = false;
					l_s_bar2->Visible = false;
				}
				//�@�R�Ԗڂ̕\��
				if (lib[(num - 1) * 10 + 2].title != "") {
					l_s_book3->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 2].title);
					if (lib[(num - 1) * 10 + 2].rest == 0) { b_s_lend3->Enabled = false; }
				}
				else {
					l_s_book3->Visible = false;
					ll_s_detailform3->Visible = false;
					b_s_lend3->Visible = false;
					l_s_bar3->Visible = false;
				}
				//�@�S�Ԗڂ̕\��
				if (lib[(num - 1) * 10 + 3].title != "") {
					l_s_book4->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 3].title);
					if (lib[(num - 1) * 10 + 3].rest == 0) { b_s_lend4->Enabled = false; }
				}
				else {
					l_s_book4->Visible = false;
					ll_s_detailform4->Visible = false;
					b_s_lend4->Visible = false;
					l_s_bar4->Visible = false;
				}
				//�@�T�Ԗڂ̕\��
				if (lib[(num - 1) * 10 + 4].title != "") {
					l_s_book5->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 4].title);
					if (lib[(num - 1) * 10 + 4].rest == 0) { b_s_lend5->Enabled = false; }
				}
				else {
					l_s_book5->Visible = false;
					ll_s_detailform5->Visible = false;
					b_s_lend5->Visible = false;
					l_s_bar5->Visible = false;
				}
				//�@�U�Ԗڂ̕\��
				if (lib[(num - 1) * 10 + 5].title != "") {
					l_s_book6->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 5].title);
					if (lib[(num - 1) * 10 + 5].rest == 0) { b_s_lend6->Enabled = false; }
				}
				else {
					l_s_book6->Visible = false;
					ll_s_detailform6->Visible = false;
					b_s_lend6->Visible = false;
					l_s_bar6->Visible = false;
				}
				//�@�V�Ԗڂ̕\��
				if (lib[(num - 1) * 10 + 6].title != "") {
					l_s_book7->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 6].title);
					if (lib[(num - 1) * 10 + 6].rest == 0) { b_s_lend7->Enabled = false; }
				}
				else {
					l_s_book7->Visible = false;
					ll_s_detailform7->Visible = false;
					b_s_lend7->Visible = false;
					l_s_bar7->Visible = false;
				}
				//�@�W�Ԗڂ̕\��
				if (lib[(num - 1) * 10 + 7].title != "") {
					l_s_book8->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 7].title);
					if (lib[(num - 1) * 10 + 7].rest == 0) { b_s_lend8->Enabled = false; }
				}
				else {
					l_s_book8->Visible = false;
					ll_s_detailform8->Visible = false;
					b_s_lend8->Visible = false;
					l_s_bar8->Visible = false;
				}
				//�@�X�Ԗڂ̕\��
				if (lib[(num - 1) * 10 + 8].title != "") {
					l_s_book9->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 8].title);
					if (lib[(num - 1) * 10 + 8].rest == 0) { b_s_lend9->Enabled = false; };
				}
				else {
					l_s_book9->Visible = false;
					ll_s_detailform9->Visible = false;
					b_s_lend9->Visible = false;
					l_s_bar9->Visible = false;
				}
				//�@�P�O�Ԗڂ̕\��
				if (lib[(num - 1) * 10 + 9].title != "") {
					l_s_book10->Text = msclr::interop::marshal_as<System::String^>(lib[(num - 1) * 10 + 9].title);
					//�݂��o���{�^���̖�����
					if (lib[(num - 1) * 10 + 9].rest == 0) { b_s_lend10->Enabled = false; }
				}
				else {
					l_s_book10->Visible = false;
					ll_s_detailform10->Visible = false;
					b_s_lend10->Visible = false;
					l_s_bar10->Visible = false;
				}
			}
			else {
				//�@�P�Ԗڂ̕\��
				l_s_book1->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10].title);
				//�݂��o���{�^���̖�����
				if (gen[(num - 1) * 10 + 0].rest == 0) { b_s_lend1->Enabled = false; }
				//�@�Q�Ԗڂ̕\��
				if (gen[(num - 1) * 10 + 1].title != "") {
					l_s_book2->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10 + 1].title);
					//�݂��o���{�^���̖�����
					if (gen[(num - 1) * 10 + 1].rest == 0) { b_s_lend2->Enabled = false; }
				}
				else {
					l_s_book2->Visible = false;
					ll_s_detailform2->Visible = false;
					b_s_lend2->Visible = false;
					l_s_bar2->Visible = false;
				}
				//�@�R�Ԗڂ̕\��
				if (gen[(num - 1) * 10 + 2].title != "") {
					//�݂��o���{�^���̖�����
					if (gen[(num - 1) * 10 + 2].rest == 0) { b_s_lend3->Enabled = false; }
					l_s_book3->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10 + 2].title);
				}
				else {
					l_s_book3->Visible = false;
					ll_s_detailform3->Visible = false;
					b_s_lend3->Visible = false;
					l_s_bar3->Visible = false;
				}
				//�@�S�Ԗڂ̕\��
				if (gen[(num - 1) * 10 + 3].title != "") {
					l_s_book4->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10 + 3].title);
					//�݂��o���{�^���̖�����
					if (gen[(num - 1) * 10 + 3].rest == 0) { b_s_lend4->Enabled = false; }
				}
				else {
					l_s_book4->Visible = false;
					ll_s_detailform4->Visible = false;
					b_s_lend4->Visible = false;
					l_s_bar4->Visible = false;
				}
				//�@�T�Ԗڂ̕\��
				if (gen[(num - 1) * 10 + 4].title != "") {
					l_s_book5->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10 + 4].title);
					//�݂��o���{�^���̖�����
					if (gen[(num - 1) * 10 + 4].rest == 0) { b_s_lend5->Enabled = false; }
				}
				else {
					l_s_book5->Visible = false;
					ll_s_detailform5->Visible = false;
					b_s_lend5->Visible = false;
					l_s_bar5->Visible = false;
				}
				//�@�U�Ԗڂ̕\��
				if (gen[(num - 1) * 10 + 5].title != "") {
					l_s_book6->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10 + 5].title);
					//�݂��o���{�^���̖�����
					if (gen[(num - 1) * 10 + 5].rest == 0) { b_s_lend6->Enabled = false; }
				}
				else {
					l_s_book6->Visible = false;
					ll_s_detailform6->Visible = false;
					b_s_lend6->Visible = false;
					l_s_bar6->Visible = false;
				}
				//�@�V�Ԗڂ̕\��
				if (gen[(num - 1) * 10 + 6].title != "") {
					l_s_book7->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10 + 6].title);
					//�݂��o���{�^���̖�����
					if (gen[(num - 1) * 10 + 6].rest == 0) { b_s_lend7->Enabled = false; }
				}
				else {
					l_s_book7->Visible = false;
					ll_s_detailform7->Visible = false;
					b_s_lend7->Visible = false;
					l_s_bar7->Visible = false;
				}
				//�@�W�Ԗڂ̕\��
				if (gen[(num - 1) * 10 + 7].title != "") {
					l_s_book8->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10 + 7].title);
					//�݂��o���{�^���̖�����
					if (gen[(num - 1) * 10 + 7].rest == 0) { b_s_lend8->Enabled = false; }
				}
				else {
					l_s_book8->Visible = false;
					ll_s_detailform8->Visible = false;
					b_s_lend8->Visible = false;
					l_s_bar8->Visible = false;
				}
				//�@�X�Ԗڂ̕\��
				if (gen[(num - 1) * 10 + 8].title != "") {
					l_s_book9->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10 + 8].title);
					//�݂��o���{�^���̖�����
					if (gen[(num - 1) * 10 + 8].rest == 0) { b_s_lend9->Enabled = false; }
				}
				else {
					l_s_book9->Visible = false;
					ll_s_detailform9->Visible = false;
					b_s_lend9->Visible = false;
					l_s_bar9->Visible = false;
				}
				//�@�P�O�Ԗڂ̕\��
				if (gen[(num - 1) * 10 + 9].title != "") {
					l_s_book10->Text = msclr::interop::marshal_as<System::String^>(gen[(num - 1) * 10 + 9].title);
					//�݂��o���{�^���̖�����
					if (gen[(num - 1) * 10 + 9].rest == 0) { b_s_lend10->Enabled = false; }
				}
				else {
					l_s_book10->Visible = false;
					ll_s_detailform10->Visible = false;
					b_s_lend10->Visible = false;
					l_s_bar10->Visible = false;
				}
			}

			//�y�[�W���Ȃ���ΑO�{�^���𖳌���
			if (num == 1) {
				b_s_previous->Enabled = false;
			}
			else {
				b_s_previous->Enabled = true;
			}

			//�y�[�W���Ȃ���Ύ��{�^���𖳌���
			if (num == (pagemax+1)) {
				b_s_next->Enabled = false;
			}
			else {
				b_s_next->Enabled = true;
			}

			//�I���\�ȃy�[�W��\��
			l_s_select->Text = "1�`" + (pagemax + 1);
			
		}

		private: void lend_Botton_Enable(bool lchoice) {
			b_s_lend1->Enabled = lchoice;
			b_s_lend2->Enabled = lchoice;
			b_s_lend3->Enabled = lchoice;
			b_s_lend4->Enabled = lchoice;
			b_s_lend5->Enabled = lchoice;
			b_s_lend6->Enabled = lchoice;
			b_s_lend7->Enabled = lchoice;
			b_s_lend8->Enabled = lchoice;
			b_s_lend9->Enabled = lchoice;
			b_s_lend10->Enabled = lchoice;
		}

		private: int lend_Click_func(int bnum) {
			if (System::Windows::Forms::DialogResult::OK == MessageBox::Show(msclr::interop::marshal_as<System::String^>("�^�C�g��" + lib[(page - 1) * 10 + lnum].title) + "���؂�܂���?", "�m�F", MessageBoxButtons::OKCancel, MessageBoxIcon::Question)) {
				std::ofstream uofs("user.csv");

				user[usernum].lendname[user[usernum].books] = lib[(page - 1) * 10 + bnum].title;

				// ���ݎ������擾
				time_t t = time(NULL);

				// ��T�Ԍ�̎������v�Z
				t += (7 * 24 * 60 * 60);

				// ���ݎ������N���X�Ɋi�[
				user[usernum].rday[user[usernum].books] = localtime(&t);
				user[usernum].rday[user[usernum].books]->tm_year += 1900;
				user[usernum].rday[user[usernum].books]->tm_mon += 1;

				//�؂�Ă���}�������{�P
				user[usernum].books += 1;

				//�񖼏o��
				uofs << "���[���A�h���X" << ','
					<< "�p�X���[�h" << ','
					<< "�W������" << ','
					<< "�}����1" << ','
					<< "�}����2" << ','
					<< "�}����3" << ','
					<< "�ԋp��1" << ','
					<< "�ԋp��2" << ','
					<< "�ԋp��3" << ','
					<< "�}����" << '\n';

				//�}�����o��
				for (int i = 0; user[i].mail != ""; i++) {
					uofs << user[i].mail << ',';
					uofs << user[i].pass << ',';
					uofs << user[i].genre << ',';
					uofs << user[i].lendname[0] << ',';
					uofs << user[i].lendname[1] << ',';
					uofs << user[i].lendname[2] << ',';
					for (int j = 0; j < 3; j++) {
						if (lib[i].aday != NULL) {
							//�N
							string tmp = to_string(user[i].rday[j]->tm_year);
							//��
							if (user[i].rday[j]->tm_mon < 10) { tmp += "0"; }
							tmp += to_string(user[i].rday[j]->tm_mon);
							//��
							if (user[i].rday[j]->tm_mday < 10) { tmp += "0"; }
							tmp += to_string(user[i].rday[j]->tm_mday);
							//��
							if (user[i].rday[j]->tm_hour < 10) { tmp += "0"; }
							tmp += to_string(user[i].rday[j]->tm_hour);
							//��
							if (user[i].rday[j]->tm_min < 10) { tmp += "0"; }
							tmp += to_string(user[i].rday[j]->tm_min);
							//�b
							if (user[i].rday[j]->tm_sec < 10) { tmp += "0"; }
							tmp += to_string(user[i].rday[j]->tm_sec);
						}
						uofs << ',';
					}
					uofs << user[i].books << "\n";
				}
				uofs.close();

				//�}�����t�@�C���o��
				std::ofstream lofs("sample.csv");

				// ���ݎ������擾
				t = time(NULL);

				// ���ݎ������N���X�Ɋi�[
				lib[(page - 1) * 10 + bnum].aday = localtime(&t);
				lib[(page - 1) * 10 + bnum].aday->tm_year += 1900;
				lib[(page - 1) * 10 + bnum].aday->tm_mon += 1;

				user[usernum].books += 1;

				lib[(page - 1) * 10 + bnum].lendname = user[usernum].mail;
				lib[(page - 1) * 10 + bnum].count += 1;
				lib[(page - 1) * 10 + bnum].rest -= 1;

				//�񖼂��o��
				lofs << "�}����" << ','
					<< "�W������" << ','
					<< "�o�Ŏ�" << ','
					<< "����" << ','
					<< "�ǉ���" << ','
					<< "�݂��o���l�̃��[���A�h���X" << ','
					<< "�݂��o����" << ','
					<< "�c�����" << '\n';

				for (int i = 0; i < nummax; i++) {
					lofs << lib[i].title << ",";
					lofs << lib[i].genre << ",";
					lofs << lib[i].pub << ",";
					lofs << lib[i].writer << ",";
					if(lib[i].aday != NULL) {
						//�N
						string tmp = to_string(lib[i].aday->tm_year);
						//��
						if (lib[i].aday->tm_mon < 10) { tmp += "0"; }
						tmp += to_string(lib[i].aday->tm_mon);
						//��
						if (lib[i].aday->tm_mday < 10) { tmp += "0"; }
						tmp += to_string(lib[i].aday->tm_mday);
						//��
						if (lib[i].aday->tm_hour < 10) { tmp += "0"; }
						tmp+= to_string(lib[i].aday->tm_hour);
						//��
						if (lib[i].aday->tm_min < 10) { tmp += "0"; }
						tmp+= to_string(lib[i].aday->tm_min);
						//�b
						if (lib[i].aday->tm_sec < 10) { tmp += "0"; }
						tmp+= to_string(lib[i].aday->tm_sec);
						lofs << tmp;
					}
					lofs << ',';
					lofs << lib[i].lendname << ",";
					lofs << lib[i].count << ",";
					lofs << lib[i].rest << ",";
					lofs << user[i].books << "\n";
				}
				lofs.close();
				if (user[usernum].books >= 3) {
					lend_Botton_Enable(0);
				}

				//�؂����c������̕\�����X�V
				l_s_lendnum->Text = "�؂�������\n" + user[usernum].books.ToString() + "�^3��";

				return 1;
			}
			else {
				return 0;
			}

		}

		private: System::Void ShowForm_Load(System::Object^ sender, System::EventArgs^ e) {
			//�}���N���X�̃t�@�C������
			string str_buf;
			string str_conma_buf;
			string time;

			// �ǂݍ���csv�t�@�C�����J��(std::ifstream�̃R���X�g���N�^�ŊJ��)
			std::ifstream ifs("sample.csv");

			// getline�֐���1�s���ǂݍ���(�ǂݍ��񂾓��e��str_buf�Ɋi�[)
			for (nummax = -1; getline(ifs, str_buf); nummax++) {
				if (nummax >= 0) {
					// �u,�v��؂育�ƂɃf�[�^��ǂݍ��ނ��߂�istringstream�^�ɂ���
					istringstream i_stream(str_buf);

					// �P���
					// �u,�v��؂育�ƂɃf�[�^��ǂݍ���
					getline(i_stream, str_conma_buf, ',');
					// �ǂݍ��񂾃f�[�^���N���X�Ɋi�[
					lib[nummax].title = str_conma_buf;

					// �Q���
					getline(i_stream, str_conma_buf, ',');
					lib[nummax].genre = str_conma_buf;

					// �R���
					getline(i_stream, str_conma_buf, ',');
					lib[nummax].pub = str_conma_buf;

					//// �S���
					getline(i_stream, str_conma_buf, ',');
					lib[nummax].writer = str_conma_buf;

					// �T���
					struct tm tm;
					getline(i_stream, str_conma_buf, ',');

					if (str_conma_buf != "") {
						//�N
						time = str_conma_buf.substr(0, 4);
						tm.tm_year = stoi(time) - 1900;
						//��
						time = str_conma_buf.substr(4, 2);
						tm.tm_mon = stoi(time);
						//��
						time = str_conma_buf.substr(6, 2);
						tm.tm_mday = stoi(time);
						//��
						time = str_conma_buf.substr(8, 2);
						tm.tm_hour = stoi(time);
						//��
						time = str_conma_buf.substr(10, 2);
						tm.tm_min = stoi(time);
						//�b
						time = str_conma_buf.substr(12, 2);
						tm.tm_sec = stoi(time);
						time_t timep = mktime(&tm);
						lib[nummax].aday = localtime(&timep);
					}

					// �U���
					getline(i_stream, str_conma_buf, ',');
					lib[nummax].lendname = str_conma_buf;

					// �V���
					getline(i_stream, str_conma_buf, ',');
					if (str_conma_buf != "") {
						lib[nummax].count = stoi(str_conma_buf);
					}

					// �W���
					getline(i_stream, str_conma_buf, ',');
					if (str_conma_buf != "") {
						lib[nummax].rest = stoi(str_conma_buf);
					}
				}
			}
			pagemax = (nummax - 1) / 10;
			pagemaxtmp = pagemax;
			ifs.close();

			int max = 0;
			string num1;
			string num2;
			string num3;

			//�������ߕ\��
			int buf[100][2];
			int bufnum = 0;
			int tmp;

			//�ꎞ�ۑ��p�̔z��Ƀ��[�U�[�̃W�������ɍ��킹���Y���Ƒ݂��o���񐔂��i�[
			for (int i = 0; i < nummax; i++) {
				if(user[usernum].genre == ""){
					buf[bufnum][0] = i;
					buf[bufnum][1] = lib[i].count;
					bufnum++;
				}
				else if(user[usernum].genre == lib[i].genre){
					buf[bufnum][0] = i;
					buf[bufnum][1] = lib[i].count;
					bufnum++;
				}
			}
			
			//�݂��o���񐔂��������Ƀ\�[�g
			for (int i = 0; i < bufnum; i++) {
				for (int j = bufnum - 1; j > i; j--) {
					// �ׂ荇���v�f���r
					if (buf[j][1] > buf[j - 1][1]) {
						// �Y�������ւ�
						tmp = buf[j][0];
						buf[j][0] = buf[j - 1][0];
						buf[j - 1][0] = tmp;
						// �v�f�����ւ�
						tmp = buf[j][1];
						buf[j][1] = buf[j - 1][1];
						buf[j - 1][1] = tmp;
					}
				}
			}

			//���[�U�[�̃W�������ɍ��킹���P�`�R�Ԗڂɑ݂��o���񐔂������{��\��
			l_s_recommendbook->Text = msclr::interop::marshal_as<System::String^>(lib[buf[0][0]].title + "\n" + lib[buf[1][0]].title + "\n" + lib[buf[2][0]].title);

			//�R���{�{�b�N�X�Ɂu�W��������I���v��\��
			c_s_genre->SelectedIndex = 0;

			//�P�y�[�W�ڂ̐}���ꗗ�\��
			showBook(1);

			//�݂��o���{�^���̗L���^����
			if (user[usernum].books >= 3) {
				lend_Botton_Enable(0);
			}

			//�؂����c������̕\��
			l_s_lendnum->Text = "�؂�������\n" + user[usernum].books.ToString() + "�^�R��";
		}

		private: System::Void b_s_search_Click(System::Object^ sender, System::EventArgs^ e) {
			int j = 0;
			//�I�����ꂽ�W��������ϐ��Ɋi�[
			selectgenre = msclr::interop::marshal_as<string>(c_s_genre->SelectedItem->ToString());

			//�I�����ꂽ�W�������̃N���X�ɓ���
			if(selectgenre != "�W��������I��") {
				for (int i = 0; i != nummax; i++) {
					if (lib[i].genre == selectgenre) {
						gen[j] = lib[i];
						j++;
					}
				}
				pagemax = (j - 1) / 10;
			}
			else {
				pagemax = pagemaxtmp;
			}

			//�I�����ꂽ�W�������̂P�y�[�W�ڂ�\��
			showBook(1);

		}

		//�݂��o���ڍ׃{�^���N���b�N
		private: System::Void b_s_lendform_Click(System::Object^ sender, System::EventArgs^ e) {
			LendForm^ frm_LF = gcnew LendForm();
			frm_LF->ShowDialog();
		}

		//�ڍ׃��x���N���b�N
		private: System::Void ll_s_detailform1_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 0;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void ll_s_detailform2_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 1;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void ll_s_detailform3_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 2;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void ll_s_detailform4_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 3;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void ll_s_detailform5_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 4;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void ll_s_detailform6_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 5;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void ll_s_detailform7_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 6;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void ll_s_detailform8_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 7;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void ll_s_detailform9_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 8;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void ll_s_detailform10_Click(System::Object^ sender, System::EventArgs^ e) {
			lnum = 9;
			Book_detail_form^ frm_bdf = gcnew Book_detail_form();
			frm_bdf->ShowDialog();
		}

		private: System::Void b_s_previous_Click(System::Object^ sender, System::EventArgs^ e) {
			//�O�y�[�W�̈ꗗ�ɍX�V
			showBook(page - 1);
		}

		private: System::Void b_s_next_Click(System::Object^ sender, System::EventArgs^ e) {
			//���y�[�W�̈ꗗ�ɍX�V
			showBook(page + 1);
		}

		private: void t_s_choicepage_KeyPress(System::Object^ senderr, KeyPressEventArgs^ e)
		{
			if (e->KeyChar == '\r') // Enter�L�[�������ꂽ�ꍇ
			{
				//�e�L�X�g�{�b�N�X���͂��ꂽ�����𐔒l�ɕϊ�
				try {
					choice = stoi(msclr::interop::marshal_as<string>(t_s_choicepage->Text));
					//���͂��ꂽ���l�̃y�[�W�̓��e��\��
					if (1 <= choice && choice <= (pagemax + 1)) {
						l_s_error->Text = "";
						showBook(choice);
					}
					else {
						l_s_error->Text = "1�`" + (pagemax + 1) + "�͈̔͂œ��͂��Ă�������";
					}
				}
				catch (invalid_argument&) {
					l_s_error->Text = "��������͂��Ă�������";
				}


			}
		}

		//�ڍ׃��x�����}�E�X�J�[�\���ɂ��F�ύX
		private: System::Void ll_s_detailform1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform1->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform1->ForeColor = Color::Blue;
		}

		private: System::Void ll_s_detailform2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform2->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform2->ForeColor = Color::Blue;
		}

		private: System::Void ll_s_detailform3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform3->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform3->ForeColor = Color::Blue;
		}

		private: System::Void ll_s_detailform4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform4->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform4->ForeColor = Color::Blue;
		}

		private: System::Void ll_s_detailform5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform5->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform5->ForeColor = Color::Blue;
		}

		private: System::Void ll_s_detailform6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform6->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform6->ForeColor = Color::Blue;
		}

		private: System::Void ll_s_detailform7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform7->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform7->ForeColor = Color::Blue;
		}

		private: System::Void ll_s_detailform8_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform8->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform8_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform8->ForeColor = Color::Blue;
		}

		private: System::Void ll_s_detailform9_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform9->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform9_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform9->ForeColor = Color::Blue;
		}

		private: System::Void ll_s_detailform10_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform10->ForeColor = Color::SkyBlue;
		}
		private: System::Void ll_s_detailform10_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			ll_s_detailform10->ForeColor = Color::Blue;

		}

		//�݂��o���{�^��
		private: System::Void b_s_lend1_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(0);
			if(okBotton){
				b_s_lend1->Enabled = false;
			}
		}
		private: System::Void b_s_lend2_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(1);
			if (okBotton) {
				b_s_lend2->Enabled = false;
			}
		}
		private: System::Void b_s_lend3_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(2);
			if (okBotton) {
				b_s_lend3->Enabled = false;
			}
		}
		private: System::Void b_s_lend4_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(3);
			if (okBotton) {
				b_s_lend4->Enabled = false;
			}
		}
		private: System::Void b_s_lend5_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(4);
			if (okBotton) {
				b_s_lend5->Enabled = false;
			}
		}
		private: System::Void b_s_lend6_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(5);
			if (okBotton) {
				b_s_lend6->Enabled = false;
			}
		}
		private: System::Void b_s_lend7_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(6);
			if (okBotton) {
				b_s_lend7->Enabled = false;
			}
		}
		private: System::Void b_s_lend8_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(7);
			if (okBotton) {
				b_s_lend8->Enabled = false;
			}
		}
		private: System::Void b_s_lend9_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(8);
			if (okBotton) {
				b_s_lend9->Enabled = false;
			}
		}
		private: System::Void b_s_lend10_Click(System::Object^ sender, System::EventArgs^ e) {
			bool okBotton = lend_Click_func(9);
			if (okBotton) {
				b_s_lend10->Enabled = false;
			}
		}
};
}
