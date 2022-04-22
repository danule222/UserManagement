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
	public ref class ModifyCreditsWindow : public System::Windows::Forms::Form
	{
		private: int userId;
		public:
			ModifyCreditsWindow(void)
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
			~ModifyCreditsWindow()
			{
				if (components)
				{
					delete components;
				}
			}

		protected:
			private: System::Windows::Forms::Button^ btnCancel;
			private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::NumericUpDown^ nudCredits;

			private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifyCreditsWindow::typeid));
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->nudCredits = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCredits))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(199, 145);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 9;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ModifyCreditsWindow::button2_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(118, 145);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 8;
			this->btnSave->Text = L"Guardar";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &ModifyCreditsWindow::btnSave_Click);
			// 
			// nudCredits
			// 
			this->nudCredits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudCredits->Location = System::Drawing::Point(128, 60);
			this->nudCredits->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->nudCredits->Name = L"nudCredits";
			this->nudCredits->Size = System::Drawing::Size(109, 38);
			this->nudCredits->TabIndex = 10;
			this->nudCredits->ValueChanged += gcnew System::EventHandler(this, &ModifyCreditsWindow::numericUpDown1_ValueChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(23, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(99, 107);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// ModifyCreditsWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ClientSize = System::Drawing::Size(286, 180);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->nudCredits);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnCancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ModifyCreditsWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Modificar créditos";
			this->Load += gcnew System::EventHandler(this, &ModifyCreditsWindow::LoadData);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCredits))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

		private: System::Void LoadData(System::Object^ sender, System::EventArgs^ e) {
			array <String^>^ userData = FileFunctions::GetUser(userId);
			nudCredits->Text = userData[7];
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
			FileFunctions::ModifyCredits(userId, nudCredits->Text);
			MessageBox::Show("Créditos modificados.", "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		}
	};
}
