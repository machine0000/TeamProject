#pragma once

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button13;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Peru;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24));
			this->label1->Location = System::Drawing::Point(-2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(571, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"図書貸し出しシステム";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->textBox1->Location = System::Drawing::Point(25, 87);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(325, 81);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->textBox2->Location = System::Drawing::Point(25, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 27);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"おすすめ";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(25, 180);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(350, 28);
			this->comboBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button1->Location = System::Drawing::Point(411, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"検索";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label2->Location = System::Drawing::Point(20, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"１ページ目";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label3->Location = System::Drawing::Point(25, 275);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"　１．書籍名";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(26, 295);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(370, 1);
			this->label4->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button2->Location = System::Drawing::Point(400, 271);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 28);
			this->button2->TabIndex = 9;
			this->button2->Text = L"貸し出し";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label6->Location = System::Drawing::Point(345, 309);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"詳細";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button3->Location = System::Drawing::Point(400, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 28);
			this->button3->TabIndex = 13;
			this->button3->Text = L"貸し出し";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(26, 329);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(370, 1);
			this->label7->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label8->Location = System::Drawing::Point(25, 309);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"　２．書籍名";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label9->Location = System::Drawing::Point(345, 343);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 20);
			this->label9->TabIndex = 18;
			this->label9->Text = L"詳細";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button4->Location = System::Drawing::Point(400, 339);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 28);
			this->button4->TabIndex = 17;
			this->button4->Text = L"貸し出し";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(26, 363);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(370, 1);
			this->label10->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label11->Location = System::Drawing::Point(25, 343);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(109, 20);
			this->label11->TabIndex = 15;
			this->label11->Text = L"　３．書籍名";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label12->Location = System::Drawing::Point(345, 377);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 20);
			this->label12->TabIndex = 22;
			this->label12->Text = L"詳細";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button5->Location = System::Drawing::Point(400, 373);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 28);
			this->button5->TabIndex = 21;
			this->button5->Text = L"貸し出し";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(26, 397);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(370, 1);
			this->label13->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label14->Location = System::Drawing::Point(25, 377);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(109, 20);
			this->label14->TabIndex = 19;
			this->label14->Text = L"　４．書籍名";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label15->Location = System::Drawing::Point(345, 411);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 20);
			this->label15->TabIndex = 26;
			this->label15->Text = L"詳細";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button6->Location = System::Drawing::Point(400, 407);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 28);
			this->button6->TabIndex = 25;
			this->button6->Text = L"貸し出し";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(26, 431);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(370, 1);
			this->label16->TabIndex = 24;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label17->Location = System::Drawing::Point(25, 411);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(109, 20);
			this->label17->TabIndex = 23;
			this->label17->Text = L"　５．書籍名";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label18->Location = System::Drawing::Point(345, 445);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(49, 20);
			this->label18->TabIndex = 30;
			this->label18->Text = L"詳細";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button7->Location = System::Drawing::Point(400, 441);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(102, 28);
			this->button7->TabIndex = 29;
			this->button7->Text = L"貸し出し";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(26, 465);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(370, 1);
			this->label19->TabIndex = 28;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label20->Location = System::Drawing::Point(25, 445);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(109, 20);
			this->label20->TabIndex = 27;
			this->label20->Text = L"　６．書籍名";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label21->Location = System::Drawing::Point(345, 479);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(49, 20);
			this->label21->TabIndex = 34;
			this->label21->Text = L"詳細";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button8->Location = System::Drawing::Point(400, 475);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(102, 28);
			this->button8->TabIndex = 33;
			this->button8->Text = L"貸し出し";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(26, 499);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(370, 1);
			this->label22->TabIndex = 32;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label23->Location = System::Drawing::Point(25, 479);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(109, 20);
			this->label23->TabIndex = 31;
			this->label23->Text = L"　７．書籍名";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label24->Location = System::Drawing::Point(345, 513);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(49, 20);
			this->label24->TabIndex = 38;
			this->label24->Text = L"詳細";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button9->Location = System::Drawing::Point(400, 509);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(102, 28);
			this->button9->TabIndex = 37;
			this->button9->Text = L"貸し出し";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(26, 533);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(370, 1);
			this->label25->TabIndex = 36;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label26->Location = System::Drawing::Point(25, 513);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(109, 20);
			this->label26->TabIndex = 35;
			this->label26->Text = L"　８．書籍名";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label27->Location = System::Drawing::Point(345, 547);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(49, 20);
			this->label27->TabIndex = 42;
			this->label27->Text = L"詳細";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button10->Location = System::Drawing::Point(400, 543);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(102, 28);
			this->button10->TabIndex = 41;
			this->button10->Text = L"貸し出し";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(26, 567);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(370, 1);
			this->label28->TabIndex = 40;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label29->Location = System::Drawing::Point(25, 547);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(109, 20);
			this->label29->TabIndex = 39;
			this->label29->Text = L"　９．書籍名";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label30->Location = System::Drawing::Point(345, 581);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(49, 20);
			this->label30->TabIndex = 46;
			this->label30->Text = L"詳細";
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button11->Location = System::Drawing::Point(400, 577);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(102, 28);
			this->button11->TabIndex = 45;
			this->button11->Text = L"貸し出し";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(26, 601);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(370, 1);
			this->label31->TabIndex = 44;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label32->Location = System::Drawing::Point(25, 581);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(110, 20);
			this->label32->TabIndex = 43;
			this->label32->Text = L"１０．書籍名";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label5->Location = System::Drawing::Point(345, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 20);
			this->label5->TabIndex = 47;
			this->label5->Text = L"詳細";
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button12->Location = System::Drawing::Point(334, 620);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 40);
			this->button12->TabIndex = 48;
			this->button12->Text = L"次";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->label33->Location = System::Drawing::Point(250, 630);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(58, 20);
			this->label33->TabIndex = 50;
			this->label33->Text = L"ページ";
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button14->Location = System::Drawing::Point(115, 620);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 40);
			this->button14->TabIndex = 51;
			this->button14->Text = L"次";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(200, 620);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 40);
			this->textBox3->TabIndex = 52;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12));
			this->button13->Location = System::Drawing::Point(352, 214);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(150, 35);
			this->button13->TabIndex = 53;
			this->button13->Text = L"貸し出し詳細";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// ShowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 703);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"ShowForm";
			this->Text = L"貸し出し";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
