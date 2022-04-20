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

		private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
		private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmName;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmBirthdate;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmState;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmCountry;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmUsername;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmMail;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmCredits;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->logoGravitar = (gcnew System::Windows::Forms::PictureBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnCredits = (gcnew System::Windows::Forms::Button());
			this->tblUsers = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clmName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clmBirthdate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clmState = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clmCountry = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clmUsername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clmMail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clmCredits = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoGravitar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblUsers))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->logoGravitar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->logoGravitar->Location = System::Drawing::Point(12, 12);
			this->logoGravitar->Name = L"pictureBox1";
			this->logoGravitar->Size = System::Drawing::Size(171, 60);
			this->logoGravitar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->logoGravitar->TabIndex = 0;
			this->logoGravitar->TabStop = false;
			// 
			// button1
			// 
			this->btnAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnAdd->Location = System::Drawing::Point(767, 29);
			this->btnAdd->Name = L"button1";
			this->btnAdd->Size = System::Drawing::Size(70, 23);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Añadir";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MainWindow::btnAdd_Click);
			// 
			// button2
			// 
			this->btnRemove->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnRemove->Location = System::Drawing::Point(691, 29);
			this->btnRemove->Name = L"button2";
			this->btnRemove->Size = System::Drawing::Size(70, 23);
			this->btnRemove->TabIndex = 2;
			this->btnRemove->Text = L"Eliminar";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MainWindow::btnRemove_Click);
			// 
			// button3
			// 
			this->btnModify->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnModify->Location = System::Drawing::Point(615, 29);
			this->btnModify->Name = L"button3";
			this->btnModify->Size = System::Drawing::Size(70, 23);
			this->btnModify->TabIndex = 3;
			this->btnModify->Text = L"Modificar";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &MainWindow::btnModify_Click);
			// 
			// button4
			// 
			this->btnCredits->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnCredits->Location = System::Drawing::Point(539, 29);
			this->btnCredits->Name = L"button4";
			this->btnCredits->Size = System::Drawing::Size(70, 23);
			this->btnCredits->TabIndex = 4;
			this->btnCredits->Text = L"Créditos";
			this->btnCredits->UseVisualStyleBackColor = true;
			this->btnCredits->Click += gcnew System::EventHandler(this, &MainWindow::btnCredits_Click);
			// 
			// dataGridView1
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
				this->clmName, this->clmBirthdate,
					this->clmState, this->clmCountry, this->clmUsername, this->clmMail, this->clmCredits
			});
			this->tblUsers->Location = System::Drawing::Point(12, 85);
			this->tblUsers->Name = L"dataGridView1";
			this->tblUsers->ReadOnly = true;
			this->tblUsers->Size = System::Drawing::Size(825, 417);
			this->tblUsers->TabIndex = 5;
			this->tblUsers->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::tblUsers_CellContentClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ayudaToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(109, 26);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// name
			// 
			this->clmName->HeaderText = L"Nombre";
			this->clmName->Name = L"name";
			this->clmName->ReadOnly = true;
			// 
			// birthdate
			// 
			this->clmBirthdate->HeaderText = L"Fecha de nacimiento";
			this->clmBirthdate->Name = L"birthdate";
			this->clmBirthdate->ReadOnly = true;
			// 
			// state
			// 
			this->clmState->HeaderText = L"Provincia";
			this->clmState->Name = L"state";
			this->clmState->ReadOnly = true;
			// 
			// country
			// 
			this->clmCountry->HeaderText = L"País";
			this->clmCountry->Name = L"country";
			this->clmCountry->ReadOnly = true;
			// 
			// username
			// 
			this->clmUsername->HeaderText = L"Usuario";
			this->clmUsername->Name = L"username";
			this->clmUsername->ReadOnly = true;
			// 
			// mail
			// 
			this->clmMail->HeaderText = L"Correo";
			this->clmMail->Name = L"mail";
			this->clmMail->ReadOnly = true;
			// 
			// credits
			// 
			this->clmCredits->HeaderText = L"Créditos";
			this->clmCredits->Name = L"credits";
			this->clmCredits->ReadOnly = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 514);
			this->Controls->Add(this->tblUsers);
			this->Controls->Add(this->btnCredits);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->logoGravitar);
			this->MinimumSize = System::Drawing::Size(517, 235);
			this->Name = L"Form1";
			this->Text = L"Gestión de usuarios";
			this->Load += gcnew System::EventHandler(this, &MainWindow::LoadTableData);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoGravitar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblUsers))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion

		private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void LoadTableData(System::Object^ sender, System::EventArgs^ e) {
			array <array <String^>^>^ AHRecord = FileFunctions::GetUsers();
			for (int i = 0; i < FileFunctions::GetTotalOfUsers(); i++)
			{
				tblUsers->Rows->Add(AHRecord[i]);
			}
		}
		private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			
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
	};
}
