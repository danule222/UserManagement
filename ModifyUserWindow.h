namespace UserManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class ModifyUserWindow : public System::Windows::Forms::Form
	{
		private: int userId;
		public:
			ModifyUserWindow(void)
			{
				InitializeComponent();
			}
		public:
			void SetUserId(int id)
			{
				userId = id;
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~ModifyUserWindow()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::PictureBox^ imgDecorator;
		protected:
			private: System::Windows::Forms::TextBox^ fldName;
			private: System::Windows::Forms::TextBox^ fldState;
			private: System::Windows::Forms::DateTimePicker^ dtpBirthdate;
			private: System::Windows::Forms::TextBox^ fldCountry;
			private: System::Windows::Forms::TextBox^ fldUsername;
			private: System::Windows::Forms::TextBox^ fldPassword;
			private: System::Windows::Forms::TextBox^ fldMail;
			private: System::Windows::Forms::Label^ lblName;
			private: System::Windows::Forms::Label^ lblBirthdate;
			private: System::Windows::Forms::Label^ lblState;
			private: System::Windows::Forms::Label^ lblCountry;
			private: System::Windows::Forms::Label^ lblUsername;
			private: System::Windows::Forms::Label^ lblPassword;
			private: System::Windows::Forms::Label^ lblMail;
			private: System::Windows::Forms::Button^ btnCancel;
			private: System::Windows::Forms::Button^ btnSave;
			private: System::ComponentModel::IContainer^ components;
			protected:
				protected:
					private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifyUserWindow::typeid));
			this->imgDecorator = (gcnew System::Windows::Forms::PictureBox());
			this->fldName = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblBirthdate = (gcnew System::Windows::Forms::Label());
			this->lblState = (gcnew System::Windows::Forms::Label());
			this->dtpBirthdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->fldState = (gcnew System::Windows::Forms::TextBox());
			this->lblCountry = (gcnew System::Windows::Forms::Label());
			this->fldCountry = (gcnew System::Windows::Forms::TextBox());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->fldUsername = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->fldPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblMail = (gcnew System::Windows::Forms::Label());
			this->fldMail = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDecorator))->BeginInit();
			this->SuspendLayout();
			// 
			// imgDecorator
			// 
			this->imgDecorator->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->imgDecorator->BackColor = System::Drawing::Color::Transparent;
			this->imgDecorator->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgDecorator.Image")));
			this->imgDecorator->Location = System::Drawing::Point(0, 0);
			this->imgDecorator->Name = L"imgDecorator";
			this->imgDecorator->Size = System::Drawing::Size(278, 308);
			this->imgDecorator->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgDecorator->TabIndex = 1;
			this->imgDecorator->TabStop = false;
			// 
			// fldName
			// 
			this->fldName->Location = System::Drawing::Point(397, 12);
			this->fldName->MaxLength = 149;
			this->fldName->Name = L"fldName";
			this->fldName->Size = System::Drawing::Size(139, 20);
			this->fldName->TabIndex = 1;
			this->fldName->TextChanged += gcnew System::EventHandler(this, &ModifyUserWindow::fldName_TextChanged);
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(285, 15);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(96, 13);
			this->lblName->TabIndex = 3;
			this->lblName->Text = L"Nombre y apellidos";
			this->lblName->Click += gcnew System::EventHandler(this, &ModifyUserWindow::label1_Click);
			// 
			// lblBirthdate
			// 
			this->lblBirthdate->AutoSize = true;
			this->lblBirthdate->Location = System::Drawing::Point(285, 41);
			this->lblBirthdate->Name = L"lblBirthdate";
			this->lblBirthdate->Size = System::Drawing::Size(106, 13);
			this->lblBirthdate->TabIndex = 5;
			this->lblBirthdate->Text = L"Fecha de nacimiento";
			// 
			// lblState
			// 
			this->lblState->AutoSize = true;
			this->lblState->Location = System::Drawing::Point(285, 67);
			this->lblState->Name = L"lblState";
			this->lblState->Size = System::Drawing::Size(51, 13);
			this->lblState->TabIndex = 7;
			this->lblState->Text = L"Provincia";
			// 
			// dtpBirthdate
			// 
			this->dtpBirthdate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpBirthdate->Location = System::Drawing::Point(397, 39);
			this->dtpBirthdate->Name = L"dtpBirthdate";
			this->dtpBirthdate->Size = System::Drawing::Size(139, 20);
			this->dtpBirthdate->TabIndex = 2;
			this->dtpBirthdate->ValueChanged += gcnew System::EventHandler(this, &ModifyUserWindow::dateTimePicker1_ValueChanged);
			// 
			// fldState
			// 
			this->fldState->Location = System::Drawing::Point(397, 64);
			this->fldState->MaxLength = 29;
			this->fldState->Name = L"fldState";
			this->fldState->Size = System::Drawing::Size(139, 20);
			this->fldState->TabIndex = 3;
			this->fldState->TextChanged += gcnew System::EventHandler(this, &ModifyUserWindow::textBox3_TextChanged);
			// 
			// lblCountry
			// 
			this->lblCountry->AutoSize = true;
			this->lblCountry->Location = System::Drawing::Point(285, 93);
			this->lblCountry->Name = L"lblCountry";
			this->lblCountry->Size = System::Drawing::Size(29, 13);
			this->lblCountry->TabIndex = 10;
			this->lblCountry->Text = L"País";
			this->lblCountry->Click += gcnew System::EventHandler(this, &ModifyUserWindow::label4_Click);
			// 
			// fldCountry
			// 
			this->fldCountry->Location = System::Drawing::Point(397, 90);
			this->fldCountry->MaxLength = 29;
			this->fldCountry->Name = L"fldCountry";
			this->fldCountry->Size = System::Drawing::Size(139, 20);
			this->fldCountry->TabIndex = 4;
			this->fldCountry->TextChanged += gcnew System::EventHandler(this, &ModifyUserWindow::textBox2_TextChanged);
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Location = System::Drawing::Point(285, 119);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(96, 13);
			this->lblUsername->TabIndex = 12;
			this->lblUsername->Text = L"Nombre de usuario";
			// 
			// fldUsername
			// 
			this->fldUsername->Location = System::Drawing::Point(397, 116);
			this->fldUsername->MaxLength = 15;
			this->fldUsername->Name = L"fldUsername";
			this->fldUsername->Size = System::Drawing::Size(139, 20);
			this->fldUsername->TabIndex = 5;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Location = System::Drawing::Point(285, 145);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(61, 13);
			this->lblPassword->TabIndex = 14;
			this->lblPassword->Text = L"Contraseña";
			// 
			// fldPassword
			// 
			this->fldPassword->Location = System::Drawing::Point(397, 142);
			this->fldPassword->MaxLength = 49;
			this->fldPassword->Name = L"fldPassword";
			this->fldPassword->Size = System::Drawing::Size(139, 20);
			this->fldPassword->TabIndex = 6;
			// 
			// lblMail
			// 
			this->lblMail->AutoSize = true;
			this->lblMail->Location = System::Drawing::Point(285, 171);
			this->lblMail->Name = L"lblMail";
			this->lblMail->Size = System::Drawing::Size(38, 13);
			this->lblMail->TabIndex = 16;
			this->lblMail->Text = L"Correo";
			// 
			// fldMail
			// 
			this->fldMail->Location = System::Drawing::Point(397, 168);
			this->fldMail->MaxLength = 49;
			this->fldMail->Name = L"fldMail";
			this->fldMail->Size = System::Drawing::Size(139, 20);
			this->fldMail->TabIndex = 7;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(461, 273);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 9;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ModifyUserWindow::button2_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(380, 273);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 8;
			this->btnSave->Text = L"Guardar";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &ModifyUserWindow::btnSave_Click);
			// 
			// ModifyUserWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ClientSize = System::Drawing::Size(548, 308);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->lblMail);
			this->Controls->Add(this->fldMail);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->fldPassword);
			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->fldUsername);
			this->Controls->Add(this->lblCountry);
			this->Controls->Add(this->fldCountry);
			this->Controls->Add(this->dtpBirthdate);
			this->Controls->Add(this->lblState);
			this->Controls->Add(this->fldState);
			this->Controls->Add(this->lblBirthdate);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->fldName);
			this->Controls->Add(this->imgDecorator);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(16, 347);
			this->Name = L"ModifyUserWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Modificar usuario";
			this->Load += gcnew System::EventHandler(this, &ModifyUserWindow::LoadData);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgDecorator))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		private: System::Void LoadData(System::Object^ sender, System::EventArgs^ e) {
			array <String^>^ userData = FileFunctions::GetUser(userId);
			fldName->Text = userData[0];
			dtpBirthdate->Text = userData[1];
			fldState->Text = userData[2];
			fldCountry->Text = userData[3];
			fldUsername->Text = userData[4];
			fldPassword->Text = userData[5];
			fldMail->Text = userData[6];
		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: System::Void fldName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
			FileFunctions::ModifyUser(userId, fldName->Text, dtpBirthdate->Text, fldState->Text, fldCountry->Text,
				fldUsername->Text, fldPassword->Text, fldMail->Text);
			MessageBox::Show("Usuario modificado.", "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
	};
}
