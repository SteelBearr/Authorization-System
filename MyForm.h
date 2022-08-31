#pragma once

namespace Authorization {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtUsername;
	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtPass;
	private: System::Windows::Forms::Button^  btnLogIn;
	private: System::Windows::Forms::Button^  btnRegister;

	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Panel^  pannelNotLoggedIn;
	private: System::Windows::Forms::Panel^  pannelLoggedIn;

	private: System::Windows::Forms::Button^  btnLogOut;
	private: System::Windows::Forms::Button^  btnChangePass;
	private: System::Windows::Forms::Button^  btnOpenFile;
	private: System::Windows::Forms::Label^  lblUsername;

	private: System::Windows::Forms::Label^  lblID;
	private: System::Windows::Forms::Panel^  pannelChangePass;
	private: System::Windows::Forms::TextBox^  txtNewPass;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtOldPass;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnChangePassConfirm;
	private: System::Windows::Forms::TextBox^  txtNewPass2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  pannelRegistration;
	private: System::Windows::Forms::Button^  btnRegisterNew;
	private: System::Windows::Forms::TextBox^  txtRegistrationPass2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  txtPhone;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtHometown;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  txtBirthDate;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtMiddleName;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtFirstName;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtSecondName;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtRegistrationPass;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtRegistrationUsername;


	private: System::Windows::Forms::Label^  label6;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pannelNotLoggedIn = (gcnew System::Windows::Forms::Panel());
			this->pannelLoggedIn = (gcnew System::Windows::Forms::Panel());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnChangePass = (gcnew System::Windows::Forms::Button());
			this->btnOpenFile = (gcnew System::Windows::Forms::Button());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->pannelChangePass = (gcnew System::Windows::Forms::Panel());
			this->btnChangePassConfirm = (gcnew System::Windows::Forms::Button());
			this->txtNewPass2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtNewPass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtOldPass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pannelRegistration = (gcnew System::Windows::Forms::Panel());
			this->btnRegisterNew = (gcnew System::Windows::Forms::Button());
			this->txtRegistrationPass2 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtHometown = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtMiddleName = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtSecondName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtRegistrationPass = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtRegistrationUsername = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pannelNotLoggedIn->SuspendLayout();
			this->pannelLoggedIn->SuspendLayout();
			this->pannelChangePass->SuspendLayout();
			this->pannelRegistration->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(83, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя пользователя:";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(15, 65);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(260, 20);
			this->txtUsername->TabIndex = 1;
			this->txtUsername->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtUsername_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(120, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Пароль:";
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(15, 145);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(260, 20);
			this->txtPass->TabIndex = 3;
			this->txtPass->UseSystemPasswordChar = true;
			this->txtPass->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtPass_KeyPress);
			// 
			// btnLogIn
			// 
			this->btnLogIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnLogIn->Location = System::Drawing::Point(75, 215);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(150, 30);
			this->btnLogIn->TabIndex = 4;
			this->btnLogIn->Text = L"Вход";
			this->btnLogIn->UseVisualStyleBackColor = true;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &MyForm::btnLogIn_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRegister->Location = System::Drawing::Point(75, 280);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(150, 30);
			this->btnRegister->TabIndex = 5;
			this->btnRegister->Text = L"Регистрация";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &MyForm::btnRegister_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->AutoPopDelay = 500;
			this->toolTip1->InitialDelay = 0;
			this->toolTip1->IsBalloon = true;
			this->toolTip1->ReshowDelay = 1;
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Warning;
			this->toolTip1->ToolTipTitle = L"Недопустимый символ";
			// 
			// pannelNotLoggedIn
			// 
			this->pannelNotLoggedIn->Controls->Add(this->pannelLoggedIn);
			this->pannelNotLoggedIn->Controls->Add(this->btnRegister);
			this->pannelNotLoggedIn->Controls->Add(this->label1);
			this->pannelNotLoggedIn->Controls->Add(this->btnLogIn);
			this->pannelNotLoggedIn->Controls->Add(this->txtUsername);
			this->pannelNotLoggedIn->Controls->Add(this->txtPass);
			this->pannelNotLoggedIn->Controls->Add(this->label2);
			this->pannelNotLoggedIn->Location = System::Drawing::Point(0, 0);
			this->pannelNotLoggedIn->Name = L"pannelNotLoggedIn";
			this->pannelNotLoggedIn->Size = System::Drawing::Size(284, 361);
			this->pannelNotLoggedIn->TabIndex = 6;
			// 
			// pannelLoggedIn
			// 
			this->pannelLoggedIn->Controls->Add(this->btnLogOut);
			this->pannelLoggedIn->Controls->Add(this->btnChangePass);
			this->pannelLoggedIn->Controls->Add(this->btnOpenFile);
			this->pannelLoggedIn->Controls->Add(this->lblUsername);
			this->pannelLoggedIn->Controls->Add(this->lblID);
			this->pannelLoggedIn->Location = System::Drawing::Point(0, 0);
			this->pannelLoggedIn->Name = L"pannelLoggedIn";
			this->pannelLoggedIn->Size = System::Drawing::Size(284, 361);
			this->pannelLoggedIn->TabIndex = 7;
			this->pannelLoggedIn->Visible = false;
			// 
			// btnLogOut
			// 
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnLogOut->Location = System::Drawing::Point(66, 280);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(150, 30);
			this->btnLogOut->TabIndex = 4;
			this->btnLogOut->Text = L"Выход";
			this->btnLogOut->UseVisualStyleBackColor = true;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &MyForm::btnLogOut_Click);
			// 
			// btnChangePass
			// 
			this->btnChangePass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnChangePass->Location = System::Drawing::Point(66, 215);
			this->btnChangePass->Name = L"btnChangePass";
			this->btnChangePass->Size = System::Drawing::Size(150, 30);
			this->btnChangePass->TabIndex = 3;
			this->btnChangePass->Text = L"Сменить пароль";
			this->btnChangePass->UseVisualStyleBackColor = true;
			this->btnChangePass->Click += gcnew System::EventHandler(this, &MyForm::btnChangePass_Click);
			// 
			// btnOpenFile
			// 
			this->btnOpenFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOpenFile->Location = System::Drawing::Point(66, 157);
			this->btnOpenFile->Name = L"btnOpenFile";
			this->btnOpenFile->Size = System::Drawing::Size(150, 30);
			this->btnOpenFile->TabIndex = 2;
			this->btnOpenFile->Text = L"Открыть файл";
			this->btnOpenFile->UseVisualStyleBackColor = true;
			this->btnOpenFile->Click += gcnew System::EventHandler(this, &MyForm::btnOpenFile_Click);
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Location = System::Drawing::Point(47, 71);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(86, 13);
			this->lblUsername->TabIndex = 1;
			this->lblUsername->Text = L"Пользователь: ";
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblID->Location = System::Drawing::Point(44, 30);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(27, 16);
			this->lblID->TabIndex = 0;
			this->lblID->Text = L"ID: ";
			// 
			// pannelChangePass
			// 
			this->pannelChangePass->Controls->Add(this->btnChangePassConfirm);
			this->pannelChangePass->Controls->Add(this->txtNewPass2);
			this->pannelChangePass->Controls->Add(this->label5);
			this->pannelChangePass->Controls->Add(this->txtNewPass);
			this->pannelChangePass->Controls->Add(this->label4);
			this->pannelChangePass->Controls->Add(this->txtOldPass);
			this->pannelChangePass->Controls->Add(this->label3);
			this->pannelChangePass->Location = System::Drawing::Point(0, 0);
			this->pannelChangePass->Name = L"pannelChangePass";
			this->pannelChangePass->Size = System::Drawing::Size(284, 361);
			this->pannelChangePass->TabIndex = 7;
			this->pannelChangePass->Visible = false;
			// 
			// btnChangePassConfirm
			// 
			this->btnChangePassConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btnChangePassConfirm->Location = System::Drawing::Point(38, 287);
			this->btnChangePassConfirm->Name = L"btnChangePassConfirm";
			this->btnChangePassConfirm->Size = System::Drawing::Size(215, 30);
			this->btnChangePassConfirm->TabIndex = 6;
			this->btnChangePassConfirm->Text = L"Сменить пароль";
			this->btnChangePassConfirm->UseVisualStyleBackColor = true;
			this->btnChangePassConfirm->Click += gcnew System::EventHandler(this, &MyForm::btnChangePassConfirm_Click);
			// 
			// txtNewPass2
			// 
			this->txtNewPass2->Location = System::Drawing::Point(38, 230);
			this->txtNewPass2->Name = L"txtNewPass2";
			this->txtNewPass2->Size = System::Drawing::Size(215, 20);
			this->txtNewPass2->TabIndex = 5;
			this->txtNewPass2->UseSystemPasswordChar = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(35, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Повторите пароль:";
			// 
			// txtNewPass
			// 
			this->txtNewPass->Location = System::Drawing::Point(38, 151);
			this->txtNewPass->Name = L"txtNewPass";
			this->txtNewPass->Size = System::Drawing::Size(215, 20);
			this->txtNewPass->TabIndex = 3;
			this->txtNewPass->UseSystemPasswordChar = true;
			this->txtNewPass->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtPass_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(35, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 16);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Новый пароль:";
			// 
			// txtOldPass
			// 
			this->txtOldPass->Location = System::Drawing::Point(38, 71);
			this->txtOldPass->Name = L"txtOldPass";
			this->txtOldPass->Size = System::Drawing::Size(215, 20);
			this->txtOldPass->TabIndex = 1;
			this->txtOldPass->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(35, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Старый пароль:";
			// 
			// pannelRegistration
			// 
			this->pannelRegistration->Controls->Add(this->btnRegisterNew);
			this->pannelRegistration->Controls->Add(this->txtRegistrationPass2);
			this->pannelRegistration->Controls->Add(this->label14);
			this->pannelRegistration->Controls->Add(this->txtPhone);
			this->pannelRegistration->Controls->Add(this->label13);
			this->pannelRegistration->Controls->Add(this->txtHometown);
			this->pannelRegistration->Controls->Add(this->label12);
			this->pannelRegistration->Controls->Add(this->txtBirthDate);
			this->pannelRegistration->Controls->Add(this->label11);
			this->pannelRegistration->Controls->Add(this->txtMiddleName);
			this->pannelRegistration->Controls->Add(this->label10);
			this->pannelRegistration->Controls->Add(this->txtFirstName);
			this->pannelRegistration->Controls->Add(this->label9);
			this->pannelRegistration->Controls->Add(this->txtSecondName);
			this->pannelRegistration->Controls->Add(this->label8);
			this->pannelRegistration->Controls->Add(this->txtRegistrationPass);
			this->pannelRegistration->Controls->Add(this->label7);
			this->pannelRegistration->Controls->Add(this->txtRegistrationUsername);
			this->pannelRegistration->Controls->Add(this->label6);
			this->pannelRegistration->Location = System::Drawing::Point(0, 0);
			this->pannelRegistration->Name = L"pannelRegistration";
			this->pannelRegistration->Size = System::Drawing::Size(284, 361);
			this->pannelRegistration->TabIndex = 8;
			this->pannelRegistration->Visible = false;
			// 
			// btnRegisterNew
			// 
			this->btnRegisterNew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRegisterNew->Location = System::Drawing::Point(51, 308);
			this->btnRegisterNew->Name = L"btnRegisterNew";
			this->btnRegisterNew->Size = System::Drawing::Size(177, 30);
			this->btnRegisterNew->TabIndex = 18;
			this->btnRegisterNew->Text = L"Сохранить";
			this->btnRegisterNew->UseVisualStyleBackColor = true;
			this->btnRegisterNew->Click += gcnew System::EventHandler(this, &MyForm::btnRegisterNew_Click);
			// 
			// txtRegistrationPass2
			// 
			this->txtRegistrationPass2->Location = System::Drawing::Point(121, 75);
			this->txtRegistrationPass2->Name = L"txtRegistrationPass2";
			this->txtRegistrationPass2->Size = System::Drawing::Size(151, 20);
			this->txtRegistrationPass2->TabIndex = 17;
			this->txtRegistrationPass2->UseSystemPasswordChar = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 79);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(103, 13);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Повторите пароль:";
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(121, 255);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(151, 20);
			this->txtPhone->TabIndex = 15;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 259);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Номер телефона:";
			// 
			// txtHometown
			// 
			this->txtHometown->Location = System::Drawing::Point(121, 227);
			this->txtHometown->Name = L"txtHometown";
			this->txtHometown->Size = System::Drawing::Size(151, 20);
			this->txtHometown->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 231);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Место рождения:";
			// 
			// txtBirthDate
			// 
			this->txtBirthDate->Location = System::Drawing::Point(121, 201);
			this->txtBirthDate->Name = L"txtBirthDate";
			this->txtBirthDate->Size = System::Drawing::Size(151, 20);
			this->txtBirthDate->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 205);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Дата рождения:";
			// 
			// txtMiddleName
			// 
			this->txtMiddleName->Location = System::Drawing::Point(121, 163);
			this->txtMiddleName->Name = L"txtMiddleName";
			this->txtMiddleName->Size = System::Drawing::Size(151, 20);
			this->txtMiddleName->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 167);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Отчество:";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(121, 137);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(151, 20);
			this->txtFirstName->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 141);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(32, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Имя:";
			// 
			// txtSecondName
			// 
			this->txtSecondName->Location = System::Drawing::Point(121, 111);
			this->txtSecondName->Name = L"txtSecondName";
			this->txtSecondName->Size = System::Drawing::Size(151, 20);
			this->txtSecondName->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Фамилия:";
			// 
			// txtRegistrationPass
			// 
			this->txtRegistrationPass->Location = System::Drawing::Point(121, 49);
			this->txtRegistrationPass->Name = L"txtRegistrationPass";
			this->txtRegistrationPass->Size = System::Drawing::Size(151, 20);
			this->txtRegistrationPass->TabIndex = 3;
			this->txtRegistrationPass->UseSystemPasswordChar = true;
			this->txtRegistrationPass->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtPass_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Пароль:";
			// 
			// txtRegistrationUsername
			// 
			this->txtRegistrationUsername->Location = System::Drawing::Point(121, 23);
			this->txtRegistrationUsername->Name = L"txtRegistrationUsername";
			this->txtRegistrationUsername->Size = System::Drawing::Size(151, 20);
			this->txtRegistrationUsername->TabIndex = 1;
			this->txtRegistrationUsername->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtUsername_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Имя пользователя:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 361);
			this->Controls->Add(this->pannelRegistration);
			this->Controls->Add(this->pannelChangePass);
			this->Controls->Add(this->pannelNotLoggedIn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Вход";
			this->pannelNotLoggedIn->ResumeLayout(false);
			this->pannelNotLoggedIn->PerformLayout();
			this->pannelLoggedIn->ResumeLayout(false);
			this->pannelLoggedIn->PerformLayout();
			this->pannelChangePass->ResumeLayout(false);
			this->pannelChangePass->PerformLayout();
			this->pannelRegistration->ResumeLayout(false);
			this->pannelRegistration->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		static String^ Pass = "";
		static String^ Username = "";
		System::IO::StreamReader^ sr;
		System::IO::StreamWriter^ sw;
		String^ line;
	private: System::Void txtPass_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (dynamic_cast<TextBox^>(sender)->TextLength == 9 && e->KeyChar != 8 && e->KeyChar != 13){
					 toolTip1->ToolTipTitle = "Лишний символ";
					 toolTip1->Show("Длина пароля должна быть 9 символов", dynamic_cast<TextBox^>(sender), 10, 20);
					 e->Handled = true;
				 }
				 else { 
					 if ((e->KeyChar < 1072 || e->KeyChar > 1103) && e->KeyChar != 1105 && e->KeyChar != 8 && e->KeyChar != 13){
						 toolTip1->ToolTipTitle = "Недопустимый символ";
						 toolTip1->Show("В пароле могут использоваться только строчные буквы кириллицы", dynamic_cast<TextBox^>(sender), 10, 20);
						 e->Handled = true;
					 }
					 else {
						 toolTip1->Hide(dynamic_cast<TextBox^>(sender));
					 }
				 }
				 if (e->KeyChar == 13){
					 e->Handled = true;
					 btnLogIn_Click(sender, e);
				 }
	}
	private: System::Void btnLogIn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txtUsername->Text != "" && txtPass->Text != ""){
					 sr = System::IO::File::OpenText(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Users.txt");
					 line = "";
					 while (!(sr->EndOfStream) 
						 && (line->Split('|')[0] != txtUsername->Text)){
						 line = sr->ReadLine();
					 }
					 sr->Close();
					 if ((line->Split('|')[0] == txtUsername->Text) && (crypt(line->Split('|')[1]) == txtPass->Text)){
						 Pass = txtPass->Text;
						 Username = txtUsername->Text;
						 sr = System::IO::File::OpenText(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/DB.txt");
						 line = "";
						 while (!(sr->EndOfStream)
							 && (line->Split('|')[0] != Username)){
							 line = sr->ReadLine();
						 }
						 sr->Close();
						 lblID->Text += line->Split('|')[1];
						 lblUsername->Text += Username;
						 this->pannelNotLoggedIn->Visible = false;
						 this->Controls->Add(pannelLoggedIn);
						 this->pannelLoggedIn->Visible = true;
						 this->pannelLoggedIn->BringToFront();
						 this->Text = "Вход выполнен";
						 txtPass->Text = "";
						 txtUsername->Text = "";
					 }
					 else{
						 MessageBox::Show("Неверное имя пользователя или пароль");
						 txtPass->Text = "";
						 txtUsername->Text = "";
					 }
				 }
				 else{
					 MessageBox::Show("Заполните поля для входа");
				 }
				 
	}
	private: System::Void btnLogOut_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblID->Text = "ID: ";
				 lblUsername->Text = "Пользователь: ";
				 this->pannelLoggedIn->Visible = false;
				 this->pannelNotLoggedIn->Visible = true;
				 this->pannelNotLoggedIn->BringToFront();
				 this->Text = "Вход";
				 String^ Pass = "";
				 String^ Username = "";
	}
	private: System::Void btnChangePass_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->pannelLoggedIn->Visible = false;
				 this->Controls->Add(pannelChangePass);
				 this->pannelChangePass->Visible = true;
				 this->pannelChangePass->BringToFront();
				 this->Text = "Смена пароля";
	}
private: System::Void btnChangePassConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (txtOldPass->Text == Pass){
				 if (txtNewPass->Text == txtNewPass2->Text && txtNewPass->TextLength == 9){
					 String^ f1 = "";
					 String^ f2 = "";
					 sr = System::IO::File::OpenText(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Users.txt");
					 line = "";
					 int half = 0;
					 while (!(sr->EndOfStream)){
						 line = sr->ReadLine();
						 if (line->Split('|')[0] != Username){
							 if (half == 0)
								 f1 += line + "\n";
							 else
							 if (half == 1)
								 f2 += line + "\n";
						 }
						 else{
							 half = 1;
						 }
					 }
					 sr->Close();
					 System::IO::File::SetAttributes(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Users.txt", System::IO::FileAttributes::Normal);
					 System::IO::File::WriteAllText(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Users.txt", f1 + Username + "|" + crypt(txtNewPass->Text) + "\n" + f2);
					 System::IO::File::SetAttributes(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Users.txt", System::IO::FileAttributes::Hidden + System::IO::FileAttributes::ReadOnly);
					 this->pannelChangePass->Visible = false;
					 this->pannelLoggedIn->Visible = true;
					 this->pannelLoggedIn->BringToFront();
					 this->Text = "Вход выполнен";
					 Pass = txtNewPass->Text;
					 txtNewPass->Text = "";
					 txtNewPass2->Text = "";
					 txtOldPass->Text = "";
				 }
				 else{
					 MessageBox::Show("Пароли недостаточной длины или не совпадают");
					 txtNewPass->Text = "";
					 txtNewPass2->Text = "";
					 txtOldPass->Text = "";
				 }
			 }
			 else{
				 MessageBox::Show("Введён неверный пароль	");
				 txtNewPass->Text = "";
				 txtNewPass2->Text = "";
				 txtOldPass->Text = "";
			 }
}
		 private: System::Void btnRegister_Click(System::Object^  sender, System::EventArgs^  e) {
					  this->pannelNotLoggedIn->Visible = false;
					  this->Controls->Add(pannelRegistration);
					  this->pannelRegistration->Visible = true;
					  this->pannelRegistration->BringToFront();
					  this->Text = "Регистрация";
					  txtPass->Text = "";
					  txtUsername->Text = "";
		 }
private: System::Void btnRegisterNew_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (txtRegistrationUsername->TextLength != 0 && txtRegistrationPass->TextLength != 0 
				 && txtRegistrationPass2->TextLength != 0 && txtSecondName->TextLength != 0 && txtFirstName->TextLength != 0 
				 && txtMiddleName->TextLength != 0 && txtBirthDate->TextLength != 0 && txtHometown->TextLength != 0 && txtPhone->TextLength != 0){
				 if (txtRegistrationPass->Text == txtRegistrationPass2->Text && txtRegistrationPass->TextLength == 9){
					 sr = System::IO::File::OpenText(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/DB.txt");
					 line = "";
					 int id = 0;
					 String^ existingUser = "";
					 while (!(sr->EndOfStream)){
						 line = sr->ReadLine();
						 if (line->Split('|')[0] == txtRegistrationUsername->Text) existingUser = txtRegistrationUsername->Text;
						 if (line->Length != 0 && Convert::ToInt32(line->Split('|')[1]) > id) id = Convert::ToInt32(line->Split('|')[1]);
					 }
					 id++;
					 sr->Close();
					 if (txtRegistrationUsername->Text != existingUser){
						 System::IO::File::SetAttributes(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/DB.txt", System::IO::FileAttributes::Normal);
						 sw = System::IO::File::AppendText(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/DB.txt");
						 sw->WriteLine(txtRegistrationUsername->Text + "|" + id + "|" + txtSecondName->Text + "|" + txtFirstName->Text + "|" + txtMiddleName->Text + "|" + txtBirthDate->Text + "|" + txtHometown->Text + "|" + txtPhone->Text);
						 sw->Close();
						 System::IO::File::SetAttributes(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/DB.txt", System::IO::FileAttributes::Hidden + System::IO::FileAttributes::ReadOnly);
						 System::IO::File::SetAttributes(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Users.txt", System::IO::FileAttributes::Normal);
						 sw = System::IO::File::AppendText(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Users.txt");
						 sw->WriteLine(txtRegistrationUsername->Text + "|" + crypt(txtRegistrationPass->Text));
						 sw->Close();
						 System::IO::File::SetAttributes(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/Users.txt", System::IO::FileAttributes::Hidden + System::IO::FileAttributes::ReadOnly);
						 txtRegistrationUsername->Text = "";
						 txtRegistrationPass->Text = "";
						 txtRegistrationPass2->Text = "";
						 txtSecondName->Text = "";
						 txtFirstName->Text = "";
						 txtMiddleName->Text = "";
						 txtBirthDate->Text = "";
						 txtHometown->Text = "";
						 txtPhone->Text = "";
						 this->pannelRegistration->Visible = false;
						 this->pannelNotLoggedIn->Visible = true;
						 this->pannelNotLoggedIn->BringToFront();
						 this->Text = "Вход";
					 }
					 else MessageBox::Show("Введённое имя пользователя не доступно");
				 }
				 else{
					 MessageBox::Show("Пароли недостаточной длины или не совпадают");
					 txtRegistrationPass->Text = "";
					 txtRegistrationPass2->Text = "";
				 }
			 }
			 else MessageBox::Show("Заполните все поля");
}
		 static String^ crypt(String^ a){
			 return a->Substring(a->Length - 1) + a->Substring(1, a->Length - 2) + a->Substring(0, 1);
		 }
private: System::Void txtUsername_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar == '|') e->Handled = true;
}
private: System::Void btnOpenFile_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start(System::IO::Directory::GetCurrentDirectory()->Replace('\\', '/') + "/DB.txt");
}
};
}
