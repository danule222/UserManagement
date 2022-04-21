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
	public ref class MainWindow : public System::Windows::Forms::Form
	{
		public:
			MainWindow(void)
			{
				InitializeComponent();
				//FileFunctions::MakeFile(); // RESETS FILE
				/*FileFunctions::AddUser("Ovo", "02/03/1966", "Valencia", "España", "Ovo22", "awawaw", "ovo@gmail.com", "1");
				FileFunctions::AddUser("Ovo", "02/03/1966", "Valencia", "España", "Ovo22", "awawaw", "ovo@gmail.com", "1");
				FileFunctions::AddUser("Ovo", "02/03/1966", "Valencia", "España", "Ovo22", "awawaw", "ovo@gmail.com", "1");*/
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~MainWindow()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::PictureBox^ logoGravitar;
		private: System::Windows::Forms::Button^ btnAdd;
		private: System::Windows::Forms::Button^ btnRemove;
		private: System::Windows::Forms::Button^ btnModify;
		private: System::Windows::Forms::Button^ btnCredits;
		private: System::Windows::Forms::DataGridView^ tblUsers;



		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmName;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmBirthdate;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmState;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmCountry;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmUsername;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmMail;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmCredits;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ birthdate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ state;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ country;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ credits;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->logoGravitar = (gcnew System::Windows::Forms::PictureBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnCredits = (gcnew System::Windows::Forms::Button());
			this->tblUsers = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->birthdate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->state = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->country = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->credits = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoGravitar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblUsers))->BeginInit();
			this->SuspendLayout();
			// 
			// logoGravitar
			// 
			this->logoGravitar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoGravitar.Image")));
			this->logoGravitar->Location = System::Drawing::Point(12, 12);
			this->logoGravitar->Name = L"logoGravitar";
			this->logoGravitar->Size = System::Drawing::Size(171, 60);
			this->logoGravitar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->logoGravitar->TabIndex = 0;
			this->logoGravitar->TabStop = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnAdd->Location = System::Drawing::Point(783, 29);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(70, 23);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Añadir";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MainWindow::btnAdd_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnRemove->Location = System::Drawing::Point(707, 29);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(70, 23);
			this->btnRemove->TabIndex = 2;
			this->btnRemove->Text = L"Eliminar";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MainWindow::btnRemove_Click);
			// 
			// btnModify
			// 
			this->btnModify->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnModify->Location = System::Drawing::Point(631, 29);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(70, 23);
			this->btnModify->TabIndex = 3;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &MainWindow::btnModify_Click);
			// 
			// btnCredits
			// 
			this->btnCredits->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnCredits->Location = System::Drawing::Point(555, 29);
			this->btnCredits->Name = L"btnCredits";
			this->btnCredits->Size = System::Drawing::Size(70, 23);
			this->btnCredits->TabIndex = 4;
			this->btnCredits->Text = L"Créditos";
			this->btnCredits->UseVisualStyleBackColor = true;
			this->btnCredits->Click += gcnew System::EventHandler(this, &MainWindow::btnCredits_Click);
			// 
			// tblUsers
			// 
			this->tblUsers->AllowUserToAddRows = false;
			this->tblUsers->AllowUserToDeleteRows = false;
			this->tblUsers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tblUsers->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblUsers->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->tblUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblUsers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->name, this->birthdate,
					this->state, this->country, this->username, this->mail, this->credits
			});
			this->tblUsers->Location = System::Drawing::Point(12, 85);
			this->tblUsers->Name = L"tblUsers";
			this->tblUsers->ReadOnly = true;
			this->tblUsers->Size = System::Drawing::Size(841, 417);
			this->tblUsers->TabIndex = 5;
			this->tblUsers->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::tblUsers_CellContentClick);
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// birthdate
			// 
			this->birthdate->HeaderText = L"Fecha de nacimiento";
			this->birthdate->Name = L"birthdate";
			this->birthdate->ReadOnly = true;
			this->birthdate->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// state
			// 
			this->state->HeaderText = L"Provincia";
			this->state->Name = L"state";
			this->state->ReadOnly = true;
			this->state->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// country
			// 
			this->country->HeaderText = L"País";
			this->country->Name = L"country";
			this->country->ReadOnly = true;
			this->country->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// username
			// 
			this->username->HeaderText = L"Usuario";
			this->username->Name = L"username";
			this->username->ReadOnly = true;
			this->username->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// mail
			// 
			this->mail->HeaderText = L"Correo";
			this->mail->Name = L"mail";
			this->mail->ReadOnly = true;
			this->mail->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// credits
			// 
			this->credits->HeaderText = L"Créditos";
			this->credits->Name = L"credits";
			this->credits->ReadOnly = true;
			this->credits->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ClientSize = System::Drawing::Size(865, 514);
			this->Controls->Add(this->tblUsers);
			this->Controls->Add(this->btnCredits);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->logoGravitar);
			this->MinimumSize = System::Drawing::Size(517, 235);
			this->Name = L"MainWindow";
			this->Text = L"Gestión de usuarios";
			this->Load += gcnew System::EventHandler(this, &MainWindow::LoadData);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoGravitar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblUsers))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

		private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void LoadData(System::Object^ sender, System::EventArgs^ e) {
			LoadTableData();
		}
		private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			AddUserWindow^ aUW = gcnew AddUserWindow();
			aUW->ShowDialog();
			LoadTableData();
		}
		private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
			if (tblUsers->Rows->Count > 0) {
				FileFunctions::RemoveUser(tblUsers->CurrentCell->RowIndex + 1);
				tblUsers->Rows->RemoveAt(tblUsers->CurrentCell->RowIndex);
			}
			else
			{
				MessageBox::Show("No hay ningún registro a eliminar.", "Error");
			}
		}
		private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
			if (tblUsers->Rows->Count > 0)
				MessageBox::Show(tblUsers->CurrentCell->RowIndex + "");
		}
		private: System::Void btnCredits_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void tblUsers_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		}
		private: void LoadTableData()
		{
			tblUsers->Rows->Clear();
			array <array <String^>^>^ AHRecord = FileFunctions::GetUsers();
			for (int i = 0; i < FileFunctions::GetTotalOfUsers(); i++)
			{
				tblUsers->Rows->Add(AHRecord[i]);
			}
		}
	};
}
