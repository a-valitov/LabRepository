#pragma once

namespace AviaTickets {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>

	// Test for Git

	public ref class Form1 : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Label^  labelTest3;	
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBoxFlightNumber;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBoxPassengersNumber;
	private: System::Windows::Forms::Button^  buttonCashIn;
	private: System::Windows::Forms::Label^  labelTicketsCost;
	
			 //ГЛОБАЛЬНЫЕ ПЕРЕМЕННЫЕ
	public: 

		//String^ sample;
		int userFlightNumber;
		int userPassengersNumber;
		int probabilityOfServerBreaking;
		int probabilityOfPowerBreaking;
		int probabilityOfMoneyBreaking;


	private: System::Windows::Forms::Label^  labelFlightsList;
	public: 

	public: 

	private: System::Windows::Forms::Button^  buttonTakeTickets;
	private: System::Windows::Forms::Label^  labelTakeTickets;
	private: System::Windows::Forms::PictureBox^  pictureBoxTickets;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::TrackBar^  trackBarServerBreaking;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  labelServerBreakChance;
	private: System::Windows::Forms::Button^  buttonAcceptTransaction;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  buttonCancelTransaction;
	private: System::Windows::Forms::Label^  labelTimer;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  buttonRepairPower;
	private: System::Windows::Forms::Label^  labelPowerBreakChance;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TrackBar^  trackBarPowerBreaking;
	private: System::Windows::Forms::Timer^  timerPower;
	private: System::Windows::Forms::Button^  buttonRepairMoney;
	private: System::Windows::Forms::Label^  labelMoneyBreakChance;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TrackBar^  trackBarMoneyBreaking;



	private: System::Windows::Forms::Button^  buttonRepairServer;


			 

	public: Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	protected: 
	private: System::Windows::Forms::ComboBox^  comboBoxFrom;
	private: System::Windows::Forms::ComboBox^  comboBoxTo;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelTest;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  labelTest2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxFrom = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxTo = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelTest = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBoxPassengersNumber = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelTest2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCancelTransaction = (gcnew System::Windows::Forms::Button());
			this->buttonAcceptTransaction = (gcnew System::Windows::Forms::Button());
			this->labelTicketsCost = (gcnew System::Windows::Forms::Label());
			this->buttonCashIn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxFlightNumber = (gcnew System::Windows::Forms::ComboBox());
			this->buttonTakeTickets = (gcnew System::Windows::Forms::Button());
			this->labelTakeTickets = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTickets = (gcnew System::Windows::Forms::PictureBox());
			this->labelTest3 = (gcnew System::Windows::Forms::Label());
			this->labelFlightsList = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->buttonRepairServer = (gcnew System::Windows::Forms::Button());
			this->trackBarServerBreaking = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonRepairMoney = (gcnew System::Windows::Forms::Button());
			this->labelMoneyBreakChance = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->trackBarMoneyBreaking = (gcnew System::Windows::Forms::TrackBar());
			this->buttonRepairPower = (gcnew System::Windows::Forms::Button());
			this->labelPowerBreakChance = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->trackBarPowerBreaking = (gcnew System::Windows::Forms::TrackBar());
			this->labelServerBreakChance = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTimer = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerPower = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxTickets))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarServerBreaking))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMoneyBreaking))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarPowerBreaking))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(71, 87);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// comboBoxFrom
			// 
			this->comboBoxFrom->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxFrom->FormattingEnabled = true;
			this->comboBoxFrom->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Москва", L"Санкт-Петербург", L"Уфа", L"Симферополь"});
			this->comboBoxFrom->Location = System::Drawing::Point(71, 33);
			this->comboBoxFrom->Name = L"comboBoxFrom";
			this->comboBoxFrom->Size = System::Drawing::Size(200, 21);
			this->comboBoxFrom->TabIndex = 1;
			// 
			// comboBoxTo
			// 
			this->comboBoxTo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTo->FormattingEnabled = true;
			this->comboBoxTo->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Москва", L"Санкт-Петербург", L"Уфа", L"Симферополь"});
			this->comboBoxTo->Location = System::Drawing::Point(71, 60);
			this->comboBoxTo->Name = L"comboBoxTo";
			this->comboBoxTo->Size = System::Drawing::Size(200, 21);
			this->comboBoxTo->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(94, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Искать рейсы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// labelTest
			// 
			this->labelTest->AutoSize = true;
			this->labelTest->Location = System::Drawing::Point(347, 161);
			this->labelTest->Name = L"labelTest";
			this->labelTest->Size = System::Drawing::Size(50, 13);
			this->labelTest->TabIndex = 4;
			this->labelTest->Text = L"labelTest";
			this->labelTest->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->comboBoxPassengersNumber);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBoxFrom);
			this->groupBox1->Controls->Add(this->comboBoxTo);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(35, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(299, 171);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор параметров рейса";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Количество пассажиров";
			// 
			// comboBoxPassengersNumber
			// 
			this->comboBoxPassengersNumber->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxPassengersNumber->FormattingEnabled = true;
			this->comboBoxPassengersNumber->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->comboBoxPassengersNumber->Location = System::Drawing::Point(182, 113);
			this->comboBoxPassengersNumber->Name = L"comboBoxPassengersNumber";
			this->comboBoxPassengersNumber->Size = System::Drawing::Size(89, 21);
			this->comboBoxPassengersNumber->TabIndex = 8;
			this->comboBoxPassengersNumber->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBoxPassengersNumber_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Дата";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Куда";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Откуда";
			// 
			// labelTest2
			// 
			this->labelTest2->AutoSize = true;
			this->labelTest2->Location = System::Drawing::Point(347, 180);
			this->labelTest2->Name = L"labelTest2";
			this->labelTest2->Size = System::Drawing::Size(56, 13);
			this->labelTest2->TabIndex = 7;
			this->labelTest2->Text = L"labelTest2";
			this->labelTest2->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(355, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(500, 102);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->buttonCancelTransaction);
			this->groupBox2->Controls->Add(this->buttonAcceptTransaction);
			this->groupBox2->Controls->Add(this->labelTicketsCost);
			this->groupBox2->Controls->Add(this->buttonCashIn);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->comboBoxFlightNumber);
			this->groupBox2->Location = System::Drawing::Point(35, 216);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(357, 148);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Покупка билетов";
			// 
			// buttonCancelTransaction
			// 
			this->buttonCancelTransaction->Enabled = false;
			this->buttonCancelTransaction->Location = System::Drawing::Point(195, 117);
			this->buttonCancelTransaction->Name = L"buttonCancelTransaction";
			this->buttonCancelTransaction->Size = System::Drawing::Size(121, 23);
			this->buttonCancelTransaction->TabIndex = 11;
			this->buttonCancelTransaction->Text = L"Отмена покупки";
			this->buttonCancelTransaction->UseVisualStyleBackColor = true;
			this->buttonCancelTransaction->Click += gcnew System::EventHandler(this, &Form1::buttonCancelTransaction_Click);
			// 
			// buttonAcceptTransaction
			// 
			this->buttonAcceptTransaction->Enabled = false;
			this->buttonAcceptTransaction->Location = System::Drawing::Point(35, 117);
			this->buttonAcceptTransaction->Name = L"buttonAcceptTransaction";
			this->buttonAcceptTransaction->Size = System::Drawing::Size(154, 23);
			this->buttonAcceptTransaction->TabIndex = 10;
			this->buttonAcceptTransaction->Text = L"Подтвердить транзакцию";
			this->buttonAcceptTransaction->UseVisualStyleBackColor = true;
			this->buttonAcceptTransaction->Click += gcnew System::EventHandler(this, &Form1::buttonAcceptTransaction_Click);
			// 
			// labelTicketsCost
			// 
			this->labelTicketsCost->AutoSize = true;
			this->labelTicketsCost->Location = System::Drawing::Point(14, 78);
			this->labelTicketsCost->Name = L"labelTicketsCost";
			this->labelTicketsCost->Size = System::Drawing::Size(146, 13);
			this->labelTicketsCost->TabIndex = 3;
			this->labelTicketsCost->Text = L"Общая стоимость билетов:";
			this->labelTicketsCost->Visible = false;
			// 
			// buttonCashIn
			// 
			this->buttonCashIn->Enabled = false;
			this->buttonCashIn->Location = System::Drawing::Point(217, 73);
			this->buttonCashIn->Name = L"buttonCashIn";
			this->buttonCashIn->Size = System::Drawing::Size(121, 23);
			this->buttonCashIn->TabIndex = 2;
			this->buttonCashIn->Text = L"Внести деньги";
			this->buttonCashIn->UseVisualStyleBackColor = true;
			this->buttonCashIn->Click += gcnew System::EventHandler(this, &Form1::buttonCashIn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Выберите № рейса";
			// 
			// comboBoxFlightNumber
			// 
			this->comboBoxFlightNumber->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxFlightNumber->Enabled = false;
			this->comboBoxFlightNumber->FormattingEnabled = true;
			this->comboBoxFlightNumber->Location = System::Drawing::Point(217, 33);
			this->comboBoxFlightNumber->Name = L"comboBoxFlightNumber";
			this->comboBoxFlightNumber->Size = System::Drawing::Size(119, 21);
			this->comboBoxFlightNumber->TabIndex = 0;
			this->comboBoxFlightNumber->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBoxFlightNumber_SelectedIndexChanged);
			// 
			// buttonTakeTickets
			// 
			this->buttonTakeTickets->Enabled = false;
			this->buttonTakeTickets->Location = System::Drawing::Point(116, 64);
			this->buttonTakeTickets->Name = L"buttonTakeTickets";
			this->buttonTakeTickets->Size = System::Drawing::Size(121, 23);
			this->buttonTakeTickets->TabIndex = 6;
			this->buttonTakeTickets->Text = L"Забрать билеты";
			this->buttonTakeTickets->UseVisualStyleBackColor = true;
			this->buttonTakeTickets->Click += gcnew System::EventHandler(this, &Form1::buttonTakeTickets_Click);
			// 
			// labelTakeTickets
			// 
			this->labelTakeTickets->AutoSize = true;
			this->labelTakeTickets->Location = System::Drawing::Point(6, 26);
			this->labelTakeTickets->Name = L"labelTakeTickets";
			this->labelTakeTickets->Size = System::Drawing::Size(98, 13);
			this->labelTakeTickets->TabIndex = 5;
			this->labelTakeTickets->Text = L"Заберите билеты:";
			this->labelTakeTickets->Visible = false;
			// 
			// pictureBoxTickets
			// 
			this->pictureBoxTickets->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxTickets.BackgroundImage")));
			this->pictureBoxTickets->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxTickets->Location = System::Drawing::Point(17, 47);
			this->pictureBoxTickets->Name = L"pictureBoxTickets";
			this->pictureBoxTickets->Size = System::Drawing::Size(79, 82);
			this->pictureBoxTickets->TabIndex = 4;
			this->pictureBoxTickets->TabStop = false;
			this->pictureBoxTickets->Visible = false;
			// 
			// labelTest3
			// 
			this->labelTest3->AutoSize = true;
			this->labelTest3->Location = System::Drawing::Point(347, 200);
			this->labelTest3->Name = L"labelTest3";
			this->labelTest3->Size = System::Drawing::Size(56, 13);
			this->labelTest3->TabIndex = 8;
			this->labelTest3->Text = L"labelTest3";
			this->labelTest3->Visible = false;
			// 
			// labelFlightsList
			// 
			this->labelFlightsList->AutoSize = true;
			this->labelFlightsList->BackColor = System::Drawing::Color::Transparent;
			this->labelFlightsList->Location = System::Drawing::Point(352, 17);
			this->labelFlightsList->Name = L"labelFlightsList";
			this->labelFlightsList->Size = System::Drawing::Size(95, 13);
			this->labelFlightsList->TabIndex = 9;
			this->labelFlightsList->Text = L"Перечень рейсов";
			// 
			// buttonRepairServer
			// 
			this->buttonRepairServer->Enabled = false;
			this->buttonRepairServer->Location = System::Drawing::Point(20, 93);
			this->buttonRepairServer->Name = L"buttonRepairServer";
			this->buttonRepairServer->Size = System::Drawing::Size(135, 23);
			this->buttonRepairServer->TabIndex = 10;
			this->buttonRepairServer->Text = L"Наладить подключение";
			this->buttonRepairServer->UseVisualStyleBackColor = true;
			this->buttonRepairServer->Click += gcnew System::EventHandler(this, &Form1::buttonRepairServer_Click);
			// 
			// trackBarServerBreaking
			// 
			this->trackBarServerBreaking->BackColor = System::Drawing::SystemColors::Control;
			this->trackBarServerBreaking->Location = System::Drawing::Point(20, 42);
			this->trackBarServerBreaking->Maximum = 100;
			this->trackBarServerBreaking->Name = L"trackBarServerBreaking";
			this->trackBarServerBreaking->Size = System::Drawing::Size(127, 45);
			this->trackBarServerBreaking->TabIndex = 11;
			this->trackBarServerBreaking->Value = 10;
			this->trackBarServerBreaking->Scroll += gcnew System::EventHandler(this, &Form1::trackBarServerBreaking_Scroll);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Отсутствие подключения";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->buttonRepairMoney);
			this->groupBox3->Controls->Add(this->labelMoneyBreakChance);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->trackBarMoneyBreaking);
			this->groupBox3->Controls->Add(this->buttonRepairPower);
			this->groupBox3->Controls->Add(this->labelPowerBreakChance);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->trackBarPowerBreaking);
			this->groupBox3->Controls->Add(this->buttonRepairServer);
			this->groupBox3->Controls->Add(this->labelServerBreakChance);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->trackBarServerBreaking);
			this->groupBox3->Location = System::Drawing::Point(335, 384);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(586, 136);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ошибки и их вероятности";
			// 
			// buttonRepairMoney
			// 
			this->buttonRepairMoney->Enabled = false;
			this->buttonRepairMoney->Location = System::Drawing::Point(410, 93);
			this->buttonRepairMoney->Name = L"buttonRepairMoney";
			this->buttonRepairMoney->Size = System::Drawing::Size(157, 23);
			this->buttonRepairMoney->TabIndex = 18;
			this->buttonRepairMoney->Text = L"Наладить купюроприемник";
			this->buttonRepairMoney->UseVisualStyleBackColor = true;
			this->buttonRepairMoney->Click += gcnew System::EventHandler(this, &Form1::buttonRepairMoney_Click);
			// 
			// labelMoneyBreakChance
			// 
			this->labelMoneyBreakChance->AutoSize = true;
			this->labelMoneyBreakChance->Location = System::Drawing::Point(548, 51);
			this->labelMoneyBreakChance->Name = L"labelMoneyBreakChance";
			this->labelMoneyBreakChance->Size = System::Drawing::Size(19, 13);
			this->labelMoneyBreakChance->TabIndex = 21;
			this->labelMoneyBreakChance->Text = L"10";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(412, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(149, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Поломка купюроприемника";
			// 
			// trackBarMoneyBreaking
			// 
			this->trackBarMoneyBreaking->BackColor = System::Drawing::SystemColors::Control;
			this->trackBarMoneyBreaking->Location = System::Drawing::Point(415, 42);
			this->trackBarMoneyBreaking->Maximum = 100;
			this->trackBarMoneyBreaking->Name = L"trackBarMoneyBreaking";
			this->trackBarMoneyBreaking->Size = System::Drawing::Size(127, 45);
			this->trackBarMoneyBreaking->TabIndex = 19;
			this->trackBarMoneyBreaking->Value = 10;
			this->trackBarMoneyBreaking->Scroll += gcnew System::EventHandler(this, &Form1::trackBarMoneyBreaking_Scroll);
			// 
			// buttonRepairPower
			// 
			this->buttonRepairPower->Enabled = false;
			this->buttonRepairPower->Location = System::Drawing::Point(220, 93);
			this->buttonRepairPower->Name = L"buttonRepairPower";
			this->buttonRepairPower->Size = System::Drawing::Size(152, 23);
			this->buttonRepairPower->TabIndex = 14;
			this->buttonRepairPower->Text = L"Наладить электропитание";
			this->buttonRepairPower->UseVisualStyleBackColor = true;
			this->buttonRepairPower->Click += gcnew System::EventHandler(this, &Form1::buttonRepairPower_Click);
			// 
			// labelPowerBreakChance
			// 
			this->labelPowerBreakChance->AutoSize = true;
			this->labelPowerBreakChance->Location = System::Drawing::Point(359, 51);
			this->labelPowerBreakChance->Name = L"labelPowerBreakChance";
			this->labelPowerBreakChance->Size = System::Drawing::Size(19, 13);
			this->labelPowerBreakChance->TabIndex = 17;
			this->labelPowerBreakChance->Text = L"10";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(223, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(149, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Нарушение электропитания";
			// 
			// trackBarPowerBreaking
			// 
			this->trackBarPowerBreaking->BackColor = System::Drawing::SystemColors::Control;
			this->trackBarPowerBreaking->Location = System::Drawing::Point(226, 42);
			this->trackBarPowerBreaking->Maximum = 100;
			this->trackBarPowerBreaking->Name = L"trackBarPowerBreaking";
			this->trackBarPowerBreaking->Size = System::Drawing::Size(127, 45);
			this->trackBarPowerBreaking->TabIndex = 15;
			this->trackBarPowerBreaking->Value = 10;
			this->trackBarPowerBreaking->Scroll += gcnew System::EventHandler(this, &Form1::trackBarPowerBreaking_Scroll);
			// 
			// labelServerBreakChance
			// 
			this->labelServerBreakChance->AutoSize = true;
			this->labelServerBreakChance->Location = System::Drawing::Point(153, 51);
			this->labelServerBreakChance->Name = L"labelServerBreakChance";
			this->labelServerBreakChance->Size = System::Drawing::Size(19, 13);
			this->labelServerBreakChance->TabIndex = 13;
			this->labelServerBreakChance->Text = L"10";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->buttonTakeTickets);
			this->groupBox4->Controls->Add(this->pictureBoxTickets);
			this->groupBox4->Controls->Add(this->labelTakeTickets);
			this->groupBox4->Location = System::Drawing::Point(35, 384);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(253, 153);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Выдача билетов";
			// 
			// labelTimer
			// 
			this->labelTimer->AutoSize = true;
			this->labelTimer->BackColor = System::Drawing::SystemColors::ControlText;
			this->labelTimer->Font = (gcnew System::Drawing::Font(L"Lucida Console", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelTimer->ForeColor = System::Drawing::Color::MediumAquamarine;
			this->labelTimer->Location = System::Drawing::Point(398, 267);
			this->labelTimer->Name = L"labelTimer";
			this->labelTimer->Size = System::Drawing::Size(80, 24);
			this->labelTimer->TabIndex = 15;
			this->labelTimer->Text = L"00:00";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timerPower
			// 
			this->timerPower->Enabled = true;
			this->timerPower->Interval = 10000;
			this->timerPower->Tick += gcnew System::EventHandler(this, &Form1::timerPower_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(933, 525);
			this->Controls->Add(this->labelTimer);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->labelFlightsList);
			this->Controls->Add(this->labelTest3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->labelTest2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->labelTest);
			this->Controls->Add(this->groupBox3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Система продажи авиабилетов";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxTickets))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarServerBreaking))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMoneyBreaking))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarPowerBreaking))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 toolTip1->SetToolTip(comboBoxFrom, "В базе данных гарантированно есть рейсы из Москвы в Уфу на 3 декабря 2015 г.");
			 toolTip1->IsBalloon = true;
		 }

//Функция, описывающая поломку системы: отключаются все элементы
private: System::Void breakSystem()
		 {
			 comboBoxFrom->Enabled = false;
			 comboBoxTo->Enabled = false;
			 dateTimePicker1->Enabled = false;
			 comboBoxPassengersNumber->Enabled = false;
			 button1->Enabled = false;
			 
			 //Очистка и отключение dataGridView1
			 dataGridView1->Visible = false;
			 while (dataGridView1->Rows->Count != 0)
				dataGridView1->Rows->Remove(dataGridView1->Rows[dataGridView1->Rows->Count - 1]);
			 
			 comboBoxFlightNumber->Enabled = false;
			 buttonCashIn ->Enabled = false;
			 buttonTakeTickets->Enabled = false;
			 pictureBoxTickets->Visible = false;
		 }

//Функция, описывающая ремонт системы: включаются все элементы начального этапа работы
private: System::Void repairSystem()
		 {
			 comboBoxFrom->Enabled = true;
			 comboBoxTo->Enabled = true;
			 dateTimePicker1->Enabled = true;
			 comboBoxPassengersNumber->Enabled = true;
			 button1->Enabled = true;

			 labelTicketsCost->Visible = false;
			 labelTakeTickets->Visible = false;

			 //Очистка и отключение dataGridView1
			 dataGridView1->Visible = false;
			 
			 while (dataGridView1->Rows->Count != 0)
				dataGridView1->Rows->Remove(dataGridView1->Rows[dataGridView1->Rows->Count - 1]);
			 
			 //comboBoxFlightNumber->Enabled = false;
			 //buttonCashIn ->Enabled = false;
			 //buttonTakeTickets->Enabled = false;
			 //pictureBoxTickets->Visible = false;
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 //Устанавливаем вероятность поломки соединения
			 probabilityOfServerBreaking = trackBarServerBreaking->Value;

			 //Поломка соединения с сервером
				 Random^ rand = gcnew Random();  
				 int breakingRand = rand->Next(0, 100);

				 //MessageBox::Show("А сейчас система сломается. breakingRand = " + breakingRand + "; probabilityOfServerBreaking = " + probabilityOfServerBreaking);
			 		if(breakingRand <= probabilityOfServerBreaking)
					{
						MessageBox::Show("Ошибка соединения с сервером: нет подключения к сети .", "Error.", MessageBoxButtons::OK, MessageBoxIcon::Error);
						breakSystem();
						buttonRepairServer->Enabled = true;
						return;
					}

			 //Параметры, выбираемые пользователем
			 String^ userFrom;
			 String^ userTo;
			 String^ userDate;
			 //int userPassengersNumber;
			 
			 //Устанавливаем вероятность поломки соединения
			 probabilityOfServerBreaking = trackBarServerBreaking->Value;

			 //Считываем пользовательские параметры рейса
			 userFrom = comboBoxFrom->Text;
			 userTo = comboBoxTo->Text;
			 userDate = dateTimePicker1->Text;
			 //userPassengersNumber = comboBoxPassengersNumber->Text;
			 userPassengersNumber = Convert::ToInt32(comboBoxPassengersNumber->SelectedIndex) + 1;
			 
			 //Test
			 labelTest->Text = "Ввод пользователя: " + userFrom + " " + userTo + " " + userDate + userPassengersNumber;
			 
			 //int flightNumber[3] = {12345, 54345, 12356};
			 //string flightFrom[3] = {"Москва", "Москва", "Уфа"};

			 //Создаем перечень подходящих рейсов
			 DataTable^ flightsTable = gcnew DataTable();
			 flightsTable->Columns->Add("№ рейса");
			 flightsTable->Columns->Add("Откуда");
			 flightsTable->Columns->Add("Куда");
			 flightsTable->Columns->Add("Дата");
			 flightsTable->Columns->Add("Стоимость, руб.");
			
			 //Заполняем перечень построчно
			 for (int i = 0; i < 22; i++)
			 {
			   DataRow^ r = flightsTable->NewRow();
			   r["№ рейса"] = 12345 + i*413;
			   r["Откуда"] = "Москва";
			   r["Куда"] = "Уфа";
			   r["Дата"] = "30 декабря 2015 г.";
			   r["Стоимость, руб."] = 1700 + 157*i;
			   flightsTable->Rows->Add(r);
			 }
			 
			 //Присваиваем перечень элементу dataGridView1
			 dataGridView1->DataSource = flightsTable;

			 //Кривое ручное создание записей в таблице
				 dataGridView1[1, 2]->Value = L"Санкт-Петербург";
				 dataGridView1[2, 2]->Value = L"Москва";

				 dataGridView1[1, 3]->Value = L"Москва";
				 dataGridView1[2, 3]->Value = L"Санкт-Петербург";

				 dataGridView1[1, 4]->Value = L"Москва";
				 dataGridView1[2, 4]->Value = L"Симферополь";

				 dataGridView1[1, 5]->Value = L"Москва";
				 dataGridView1[2, 5]->Value = L"Симферополь";

				 dataGridView1[1, 6]->Value = L"Москва";
				 dataGridView1[2, 6]->Value = L"Санкт-Петербург";

				 dataGridView1[1, 7]->Value = L"Санкт-Петербург";
				 dataGridView1[2, 7]->Value = L"Москва";

				 dataGridView1[1, 8]->Value = L"Симферополь";
				 dataGridView1[2, 8]->Value = L"Санкт-Петербург";

				 dataGridView1[1, 9]->Value = L"Санкт-Петербург";
				 dataGridView1[2, 9]->Value = L"Симферополь";

				 dataGridView1[1, 10]->Value = L"Уфа";
				 dataGridView1[2, 10]->Value = L"Санкт-Петербург";

				 dataGridView1[1, 11]->Value = L"Санкт-Петербург";
				 dataGridView1[2, 11]->Value = L"Уфа";

				 dataGridView1[1, 12]->Value = L"Уфа";
				 dataGridView1[2, 12]->Value = L"Санкт-Петербург";

				 dataGridView1[1, 13]->Value = L"Санкт-Петербург";
				 dataGridView1[2, 13]->Value = L"Уфа";

				 dataGridView1[1, 14]->Value = L"Симферополь";
				 dataGridView1[2, 14]->Value = L"Уфа";

				 dataGridView1[1, 15]->Value = L"Уфа";
				 dataGridView1[2, 15]->Value = L"Симферополь";

				 dataGridView1[1, 16]->Value = L"Симферополь";
				 dataGridView1[2, 16]->Value = L"Уфа";

				 dataGridView1[1, 17]->Value = L"Москва";
				 dataGridView1[2, 17]->Value = L"Уфа";

				 dataGridView1[1, 18]->Value = L"Симферополь";
				 dataGridView1[2, 18]->Value = L"Москва";

				 dataGridView1[1, 19]->Value = L"Уфа";
				 dataGridView1[2, 19]->Value = L"Москва";

				 dataGridView1[1, 20]->Value = L"Уфа";
				 dataGridView1[2, 20]->Value = L"Москва";

				 dataGridView1[1, 21]->Value = L"Симферополь";
				 dataGridView1[2, 21]->Value = L"Уфа";

			 //КАК ВЫВОДИТЬ ПОЛЯ DATAGRIDVIEW
			 //MessageBox::Show(dataGridView1->Rows[0]->Cells[0]->Value->ToString());
			 //labelTest->Text = dataGridView1->Rows[0]->Cells[3]->Value->ToString();

			 //Test
			 labelTest2->Text = dataGridView1->Rows[0]->Cells[1]->Value->ToString() + " " + dataGridView1->Rows[0]->Cells[2]->Value->ToString() + " " + dataGridView1->Rows[0]->Cells[3]->Value->ToString();

			 //Перебираем перечень рейсов
			 int flightsListSize = dataGridView1->RowCount;
			 for (int i=0; i<flightsListSize; i++)
			 {
				 //MessageBox::Show("comboBoxFrom = " + comboBoxFrom->Text); //+ "; userTo = " + userTo + "; userDate = " + userDate);
				 //MessageBox::Show(i + " rowFrom = " + dataGridView1->Rows[i]->Cells[1]->Value + "; userTo = " + dataGridView1->Rows[i]->Cells[2]->Value + "; userDate = " + dataGridView1->Rows[i]->Cells[3]->Value);
				 
				 //Убираем неподходящие строки
				 if((!dataGridView1->Rows[i]->Cells[1]->Value->Equals(userFrom)) || (!dataGridView1->Rows[i]->Cells[2]->Value->Equals(userTo))) // || (!dataGridView1->Rows[i]->Cells[3]->Value->Equals(userDate)))
					{
						dataGridView1->Rows->RemoveAt(i);
						i--;
						flightsListSize--;
					}

			 }

			 //Если подходящих рейсов не нашлось
			 if (flightsListSize == 0)
			 {
				 MessageBox::Show("Рейсов с данными параметрами не найдено");
				 comboBoxFlightNumber->Enabled = false;
				 labelTicketsCost->Visible = false;
			 }
			 else
			 {
				 dataGridView1->Visible = true;
				 labelFlightsList->Visible = true;
				 comboBoxFlightNumber->Enabled = true;
				 comboBoxFlightNumber->Items->Clear();
				 //Заполнение comboBox номерами всех подходящих рейсов
				 for (int i=0; i<flightsListSize; i++)
				 {
					 dataGridView1->Rows[i]->Cells[3]->Value = userDate;
					 comboBoxFlightNumber->Items->Add(dataGridView1->Rows[i]->Cells[0]->Value->ToString());
				 }

				 
			 }
			 
			 ////Test - Поломка соединения с сервером
			 //Random^ rand = gcnew Random();  
			 //int breakingRand = rand->Next(0, 100);
			 ////probabilityOfServerBreaking = 50;
				//
			 //MessageBox::Show("А сейчас система сломается. breakingRand = " + breakingRand + "; probabilityOfServerBreaking = " + probabilityOfServerBreaking);
			 //	if(breakingRand <= probabilityOfServerBreaking)
				//{
				//	MessageBox::Show("Ошибка соединения с сервером: нет подключения к сети .", "Error.", MessageBoxButtons::OK, MessageBoxIcon::Error);
				//	breakSystem();
				//	buttonRepairServer->Enabled = true;
				//}
			 
		 }


		 
private: System::Void comboBoxFlightNumber_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 	
				//Выбранный пользователем рейс (индекс его строки в dataGridView1)
				userFlightNumber = comboBoxFlightNumber->SelectedIndex;

				//Test
				labelTest3->Text = userFlightNumber.ToString() + " " + dataGridView1->Rows[userFlightNumber]->Cells[4]->Value->ToString();
			 
			 	//Отображение суммарной стоимости билетов 
					int totalCost = 0;

					//Умножаем цену билета на количество пассажиров
					totalCost = Convert::ToInt32(dataGridView1->Rows[userFlightNumber]->Cells[4]->Value->ToString()) * userPassengersNumber;

					//Вывод общей стоимости
					labelTicketsCost->Visible = true;
					labelTicketsCost->Text = "Общая стоимость билетов: " + totalCost + " руб.";

				//Активируем кнопку оплаты
				buttonCashIn->Enabled = true;		
		 }

private: System::Void buttonCashIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Устанавливаем вероятность поломки купюроприемника
			 probabilityOfMoneyBreaking = trackBarMoneyBreaking->Value;

			 //Поломка соединения с сервером
				 Random^ rand = gcnew Random();  
				 int breakingRand = rand->Next(0, 100);

				 //MessageBox::Show("А сейчас система сломается. breakingRand = " + breakingRand + "; probabilityOfMoneyBreaking = " + probabilityOfMoneyBreaking);
			 	 if(breakingRand <= probabilityOfMoneyBreaking)
					{
						MessageBox::Show("Ошибка: сломан купюроприемник.", "Error.", MessageBoxButtons::OK, MessageBoxIcon::Error);
						repairSystem();
						breakSystem();
						buttonRepairMoney->Enabled = true;
						return;
					}
			 
			 button1->Enabled = false;
			 buttonCashIn->Enabled = false;
			 comboBoxFlightNumber->Items->Clear();
			 comboBoxFlightNumber->Enabled = false;

			 //labelTakeTickets->Visible = true;
			 //labelTakeTickets->Text = "Заберите билеты: " + userPassengersNumber.ToString() + "шт.";
			 //pictureBoxTickets->Visible = true;
			 //buttonTakeTickets->Enabled = true;

			 buttonAcceptTransaction->Enabled = true;
			 buttonCancelTransaction->Enabled = true;
		 }

private: System::Void buttonAcceptTransaction_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonAcceptTransaction->Enabled = false;
			 buttonCancelTransaction->Enabled = false;

			 //Test - Поломка соединения с сервером
			 Random^ rand = gcnew Random();  
			 int breakingRand = rand->Next(0, 100);
			 //probabilityOfServerBreaking = 50;

			 //MessageBox::Show("Cистема сломается, если breakingRand <= probabilityOfServerBreaking.\nbreakingRand = " + breakingRand + "; probabilityOfServerBreaking = " + probabilityOfServerBreaking);
			 if(breakingRand <= probabilityOfServerBreaking)
				{
					MessageBox::Show("Ошибка соединения с сервером: нет подключения к сети .", "Error.", MessageBoxButtons::OK, MessageBoxIcon::Error);
					breakSystem();
					buttonRepairServer->Enabled = true;
				}
			 else
				 {
					 labelTakeTickets->Visible = true;
					 labelTakeTickets->Text = "Заберите билеты: " + userPassengersNumber.ToString() + "шт.";
					 pictureBoxTickets->Visible = true;
					 buttonTakeTickets->Enabled = true;
				 }

		 }

private: System::Void buttonTakeTickets_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonTakeTickets->Enabled = false;
			 pictureBoxTickets->Visible = false;
			 labelTakeTickets->Visible = false;
			 labelTicketsCost->Visible = false;
			 dataGridView1->Visible = false;
			 labelFlightsList->Visible = false;

			 button1->Enabled = true;
		 }

private: System::Void buttonRepairServer_Click(System::Object^  sender, System::EventArgs^  e) {
			 repairSystem();
			 buttonRepairServer->Enabled = false;
			 MessageBox::Show("Произведен ремонт: налажено подключение к сети.");
		 }

private: System::Void trackBarServerBreaking_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 probabilityOfServerBreaking = trackBarServerBreaking->Value;
			 labelServerBreakChance->Text = trackBarServerBreaking->Value.ToString();
		 }

private: System::Void buttonRepairMoney_Click(System::Object^  sender, System::EventArgs^  e) {
			 repairSystem();
			 buttonRepairMoney->Enabled = false;
			 MessageBox::Show("Произведен ремонт: налажен купюроприемник.");
		 }

private: System::Void trackBarMoneyBreaking_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 probabilityOfMoneyBreaking = trackBarMoneyBreaking->Value;
			 labelMoneyBreakChance->Text = trackBarMoneyBreaking->Value.ToString();
		 }



private: System::Void buttonCancelTransaction_Click(System::Object^  sender, System::EventArgs^  e) {
			 buttonAcceptTransaction->Enabled = false;
			 buttonCancelTransaction->Enabled = false;
			 repairSystem();
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 labelTimer->Text = DateTime::Now.Minute % 24 + ":" + DateTime::Now.Second;
		 }

private: System::Void timerPower_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //Ошибка - нарушение электропитания
			 Random^ rand = gcnew Random();  
			 int breakingRand = rand->Next(0, 100);
			 //probabilityOfServerBreaking = 50;

			 //MessageBox::Show("Cистема сломается, если breakingRand <= probabilityOfServerBreaking.\nbreakingRand = " + breakingRand + "; probabilityOfServerBreaking = " + probabilityOfServerBreaking);
			 if(breakingRand <= probabilityOfPowerBreaking)
				{
					MessageBox::Show("Ошибка: нарушено электропитание.", "Error.", MessageBoxButtons::OK, MessageBoxIcon::Error);
					breakSystem();
					buttonRepairPower->Enabled = true;
					timerPower->Enabled = false;
				}
		 }
private: System::Void trackBarPowerBreaking_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 probabilityOfPowerBreaking = trackBarPowerBreaking->Value;
			 labelPowerBreakChance->Text = trackBarPowerBreaking->Value.ToString();
		 }

private: System::Void buttonRepairPower_Click(System::Object^  sender, System::EventArgs^  e) {
			 repairSystem();
			 buttonRepairPower->Enabled = false;
			 MessageBox::Show("Произведен ремонт: налажено электропитание.");
			 timerPower->Enabled = true;
		 }

private: System::Void comboBoxPassengersNumber_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 button1->Enabled = true;
		 }
};
}

