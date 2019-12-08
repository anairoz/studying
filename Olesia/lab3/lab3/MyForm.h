#pragma once
#include <cstring>
#include <iostream>
#include <stdio.h>

namespace lab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  stringTextBox;
	private: System::Windows::Forms::Label^  stringLabel;
	private: System::Windows::Forms::Label^  positionLabel;
	private: System::Windows::Forms::TextBox^  positionTextBox;
	private: System::Windows::Forms::Label^  countLabel;
	private: System::Windows::Forms::TextBox^  countTextBox;
	private: System::Windows::Forms::Label^  resultLabel;
	private: System::Windows::Forms::Button^  cutButton;
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
			this->stringTextBox = (gcnew System::Windows::Forms::TextBox());
			this->stringLabel = (gcnew System::Windows::Forms::Label());
			this->positionLabel = (gcnew System::Windows::Forms::Label());
			this->positionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->countLabel = (gcnew System::Windows::Forms::Label());
			this->countTextBox = (gcnew System::Windows::Forms::TextBox());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->cutButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// stringTextBox
			// 
			this->stringTextBox->Location = System::Drawing::Point(95, 42);
			this->stringTextBox->Name = L"stringTextBox";
			this->stringTextBox->Size = System::Drawing::Size(100, 20);
			this->stringTextBox->TabIndex = 0;
			// 
			// stringLabel
			// 
			this->stringLabel->AutoSize = true;
			this->stringLabel->Location = System::Drawing::Point(103, 26);
			this->stringLabel->Name = L"stringLabel";
			this->stringLabel->Size = System::Drawing::Size(81, 13);
			this->stringLabel->TabIndex = 1;
			this->stringLabel->Text = L"Enter the string:";
			// 
			// positionLabel
			// 
			this->positionLabel->AutoSize = true;
			this->positionLabel->Location = System::Drawing::Point(103, 84);
			this->positionLabel->Name = L"positionLabel";
			this->positionLabel->Size = System::Drawing::Size(88, 13);
			this->positionLabel->TabIndex = 2;
			this->positionLabel->Text = L"Cut from position:";
			// 
			// positionTextBox
			// 
			this->positionTextBox->Location = System::Drawing::Point(95, 100);
			this->positionTextBox->Name = L"positionTextBox";
			this->positionTextBox->Size = System::Drawing::Size(100, 20);
			this->positionTextBox->TabIndex = 3;
			// 
			// countLabel
			// 
			this->countLabel->AutoSize = true;
			this->countLabel->Location = System::Drawing::Point(92, 142);
			this->countLabel->Name = L"countLabel";
			this->countLabel->Size = System::Drawing::Size(120, 13);
			this->countLabel->TabIndex = 4;
			this->countLabel->Text = L"Count of symbols to cut:";
			// 
			// countTextBox
			// 
			this->countTextBox->Location = System::Drawing::Point(95, 158);
			this->countTextBox->Name = L"countTextBox";
			this->countTextBox->Size = System::Drawing::Size(100, 20);
			this->countTextBox->TabIndex = 5;
			// 
			// label1
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(128, 196);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(35, 13);
			this->resultLabel->TabIndex = 6;
			this->resultLabel->Text = L"result";
			// 
			// button1
			// 
			this->cutButton->Location = System::Drawing::Point(109, 233);
			this->cutButton->Name = L"cutButton";
			this->cutButton->Size = System::Drawing::Size(75, 23);
			this->cutButton->TabIndex = 7;
			this->cutButton->Text = L"Cut";
			this->cutButton->UseVisualStyleBackColor = true;
			this->cutButton->Click += gcnew System::EventHandler(this, &MyForm::cutClickListener);

			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(294, 283);
			this->Controls->Add(this->cutButton);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->countTextBox);
			this->Controls->Add(this->countLabel);
			this->Controls->Add(this->positionTextBox);
			this->Controls->Add(this->positionLabel);
			this->Controls->Add(this->stringLabel);
			this->Controls->Add(this->stringTextBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cutClickListener(System::Object^  sender, System::EventArgs^  e) {
				String^ q = this->stringTextBox->Text;
				IntPtr ptrToNativeString2 = Marshal::StringToHGlobalAnsi(q);

				char* qArr = static_cast<char*>(ptrToNativeString2.ToPointer());
				int position = System::Convert::ToInt32(positionTextBox->Text);
				if (position == 0) position = 1;
				int count = System::Convert::ToInt32(countTextBox->Text);

				String^ res = "h";
				const int newArrSize = strlen(qArr) - count + 1;
				char * r = (char*)malloc(newArrSize);
				int i = 0;
				char mas[100];
				std::string s;
				for (char *qPtr = qArr; *qPtr; ++qPtr)
				{
					if (i < position - 1 || i >= position - 1 + count) {
						char c = *qPtr;
						std::string ss(1, c);
						s = s + ss;
					}
					i++;
				}

				String^ newSystemString = gcnew String(s.c_str());

				this->resultLabel->Text = newSystemString;
			
	}
	};

}
