#pragma once

namespace Project104 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for OleksandraVarvarenkoForm
	/// </summary>
	public ref class OleksandraVarvarenkoForm : public System::Windows::Forms::Form
	{
	public:
		OleksandraVarvarenkoForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OleksandraVarvarenkoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  pTextBox;
	private: System::Windows::Forms::TextBox^  qTextBox;
	private: System::Windows::Forms::Label^  pLabel;
	private: System::Windows::Forms::Label^  qLabel;
	private: System::Windows::Forms::Button^  addButton;
	private: System::Windows::Forms::Label^  dumLabel;
	private: System::Windows::Forms::Label^  resultLabel;
	private: System::Windows::Forms::Button^  exitButton;
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pTextBox = (gcnew System::Windows::Forms::TextBox());
			this->qTextBox = (gcnew System::Windows::Forms::TextBox());
			this->pLabel = (gcnew System::Windows::Forms::Label());
			this->qLabel = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->dumLabel = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// pTextBox
			// 
			this->pTextBox->Location = System::Drawing::Point(36, 59);
			this->pTextBox->Name = L"pTextBox";
			this->pTextBox->Size = System::Drawing::Size(100, 20);
			this->pTextBox->TabIndex = 0;
			// 
			// qTextBox
			// 
			this->qTextBox->Location = System::Drawing::Point(36, 123);
			this->qTextBox->Name = L"qTextBox";
			this->qTextBox->Size = System::Drawing::Size(100, 20);
			this->qTextBox->TabIndex = 1;
			// 
			// pLabel
			// 
			this->pLabel->AutoSize = true;
			this->pLabel->Location = System::Drawing::Point(70, 43);
			this->pLabel->Name = L"pLabel";
			this->pLabel->Size = System::Drawing::Size(13, 13);
			this->pLabel->TabIndex = 2;
			this->pLabel->Text = L"p";
			// 
			// qLabel
			// 
			this->qLabel->AutoSize = true;
			this->qLabel->Location = System::Drawing::Point(70, 107);
			this->qLabel->Name = L"qLabel";
			this->qLabel->Size = System::Drawing::Size(13, 13);
			this->qLabel->TabIndex = 3;
			this->qLabel->Text = L"q";
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(161, 90);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(52, 20);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"+";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &OleksandraVarvarenkoForm::addButtonClick);
			// 
			// dumLabel
			// 
			this->dumLabel->AutoSize = true;
			this->dumLabel->Location = System::Drawing::Point(240, 94);
			this->dumLabel->Name = L"dumLabel";
			this->dumLabel->Size = System::Drawing::Size(13, 13);
			this->dumLabel->TabIndex = 5;
			this->dumLabel->Text = L"=";
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(285, 94);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(32, 13);
			this->resultLabel->TabIndex = 6;
			this->resultLabel->Text = L"result";
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(161, 166);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(75, 23);
			this->exitButton->TabIndex = 7;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &OleksandraVarvarenkoForm::exitButtonClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(183, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// OleksandraVarvarenkoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 201);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->dumLabel);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->qLabel);
			this->Controls->Add(this->pLabel);
			this->Controls->Add(this->qTextBox);
			this->Controls->Add(this->pTextBox);
			this->Name = L"OleksandraVarvarenkoForm";
			this->Text = L"OleksandraVarvarenkoForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addButtonClick(System::Object^  sender, System::EventArgs^  e) {
		String^ p = this->pTextBox->Text;
		String^ q = this->qTextBox->Text;
		if (p->Length == q->Length) {
			IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(p);
			IntPtr ptrToNativeString2 = Marshal::StringToHGlobalAnsi(q);

			char* pArr = static_cast<char*>(ptrToNativeString.ToPointer());
			char* qArr = static_cast<char*>(ptrToNativeString2.ToPointer());
			String^ h = "";

			for (char *pPtr = pArr, *qPtr = qArr; *pPtr, *qPtr; ++pPtr, ++qPtr)
			{
				if (*pPtr == '1') {
					h = h + "1";
				}
				else {
					if (*qPtr == '1') {
						h = h + "1";
					}
					else {
						h = h + "0";
					}
				}
			}
			this->resultLabel->Text = h;
		}
		else {
			this->resultLabel->Text = L"Numbers must\n have identical size";
		}
	}

	private: System::Void exitButtonClick(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	};

}
