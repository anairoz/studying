#pragma once
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>

struct student
{
	int age;
	std::string first_name;
	std::string father_name;
	std::string second_name;
	int sex;
	int course;
	std::string group;
	std::vector<int> marks;
};

std::vector<student> students;
using namespace msclr::interop;

namespace Project4 {

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

	public 
	private: System::Windows::Forms::Button^  button1;

	
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(170, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавити студента";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(264, 421);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Вивести";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(182, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(182, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(128, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(182, 68);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(128, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(182, 124);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(128, 22);
			this->textBox5->TabIndex = 9;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(182, 152);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(128, 22);
			this->textBox6->TabIndex = 10;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(182, 180);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(128, 22);
			this->textBox7->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(106, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Прізвище";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(145, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Ім\'я";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(90, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 17);
			this->label3->TabIndex = 14;
			this->label3->Text = L"По-батькові";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(130, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Стать";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(149, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Вік";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(137, 157);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 17);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Курс";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(129, 185);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Група";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 213);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(159, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Оцінки по 5 предметах";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(182, 208);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(128, 22);
			this->textBox8->TabIndex = 20;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(532, 336);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(125, 22);
			this->textBox9->TabIndex = 21;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(427, 373);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(230, 22);
			this->textBox10->TabIndex = 22;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(182, 299);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(475, 22);
			this->textBox11->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(83, 299);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 17);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Рейтинг груп";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(83, 378);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(333, 17);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Найбiльш розповсюдженi чоловiчi та жiночi iмена";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(83, 341);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(350, 17);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Номер курсу, на якому найбiльший процент хлопців";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(182, 96);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(41, 21);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"М";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(264, 96);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(43, 21);
			this->checkBox2->TabIndex = 30;
			this->checkBox2->Text = L"Ж";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(665, 456);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Ostap Vakh";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	student new_student;
	msclr::interop::marshal_context context;
	new_student.second_name = context.marshal_as<std::string>(System::Convert::ToString(textBox1->Text));
	new_student.first_name = context.marshal_as<std::string>(System::Convert::ToString(textBox2->Text));
	new_student.father_name = context.marshal_as<std::string>(System::Convert::ToString(textBox3->Text));
	new_student.age = System::Convert::ToInt16(textBox5->Text);
	new_student.course = System::Convert::ToInt16(textBox6->Text);
	new_student.group = context.marshal_as<std::string>(System::Convert::ToString(textBox7->Text));
	System::String^ text = System::Convert::ToString(textBox8->Text);

	if (checkBox1->Checked == true)
	{
		new_student.sex = 1;
	}
	else
	{
		new_student.sex = 0;
	}
	array<wchar_t> ^id = { ',' };
	std::vector<int> vect;
	array<String^> ^StringArray = text->Split(id);
	for each(String^ temp in StringArray) {
		int i = System::Convert::ToInt32(temp);
		vect.push_back(i);
	}
	new_student.marks = vect;
	students.push_back(new_student);
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	checkBox1->Checked = false;
	checkBox2->Checked = false;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	std::vector<int> courses;
	std::vector<int> boys;
	std::vector<int> general_number;
	std::vector<int> boys_per_cent;
	std::vector<std::string> boys_names;
	std::vector<std::string> girls_names;
	std::vector<int> boys_names_numbers;
	std::vector<int> girls_names_numbers;
	std::vector<std::string> groups;
	std::vector<int> average_marks;

	for (int i = 0; i < students.size(); i++) {
		int resp = check_course(students[i].course, courses);
		if (resp == 0) {
			courses.push_back(students[i].course);
		}

		if (students[i].course == 1) {
			resp = check_name(students[i].group, groups);
			if (resp == 0) {
				groups.push_back(students[i].group);
			}
			int index = get_name_index(students[i].group, groups);
			int size = average_marks.size() - 1;
			if (size  < index) {
				average_marks.push_back(0);
			}
			float sum = 0;
			for (int m = 0; m < students[i].marks.size(); m++) {
				sum += students[i].marks[m];
			}
			sum = sum / 5;
			average_marks[index] += sum;
		}

		if (students[i].sex == 1) {
			resp = check_name(students[i].first_name, boys_names);
			 if (resp == 0) {
				 boys_names.push_back(students[i].first_name);
			}
			 int index = get_name_index(students[i].first_name, boys_names);
			 int size = boys_names_numbers.size() - 1;
			 if (size  < index) {
				 boys_names_numbers.push_back(0);
			 }
			 boys_names_numbers[index]++;
		}
		else{
			resp = check_name(students[i].first_name, girls_names);
			if (resp == 0) {
				girls_names.push_back(students[i].first_name);
			}
			int index = get_name_index(students[i].first_name, girls_names);
			int size = girls_names_numbers.size() - 1;
			if (size  < index) {
				girls_names_numbers.push_back(0);
			}
			girls_names_numbers[index]++;
		}
		std::vector<int>::iterator it = std::find(courses.begin(), courses.end(), students[i].course);
		int index = std::distance(courses.begin(), it);
		int boys_size = boys.size() - 1;
		if (boys_size  < index) {
			boys.push_back(0);
			general_number.push_back(0);
		}
		if (students[i].sex == 1) {
			boys[index]++;

		}
		general_number[index]++;
	}
	int percent = 0, max_percent_index, max_percent = 0;
	for (int i = 0; i < boys.size(); i++) {
		percent = boys[i] / general_number[i];
		if (max_percent < percent) {
			max_percent = percent;
			max_percent_index = i;
		}
	}
	std::string names = "";
	int max = 0;
	if (boys_names_numbers.size() > 0) {
		for (int i = 0; i < boys_names_numbers.size(); i++) {
			if (boys_names_numbers[max] < boys_names_numbers[i]) {
				max = i;
			}
		}
		names += boys_names[max] + "   ";
		max = 0;
	}
	if (girls_names_numbers.size() > 0) {
		for (int i = 0; i < girls_names_numbers.size(); i++) {
			if (girls_names_numbers[max] < girls_names_numbers[i]) {
				max = i;
			}
		}
		names += girls_names[max];
	}
	std::string groups_names  = "";
	for (int i = 0; i < average_marks.size(); i++) {
		int max_pos = 0;
		for (int k = 0; k < average_marks.size(); k++) {
			if (average_marks[k] > average_marks[max_pos]) {
				max_pos = k;
			}
		}
		if (average_marks[max_pos] == -1)
			continue;

		groups_names += groups[max_pos] + ", ";
		average_marks[max_pos] = -1;
	}
	textBox9->Text = System::Convert::ToString(courses[max_percent_index]);
	textBox10->Text = marshal_as<String^>(names);
	textBox11->Text = marshal_as<String^>(groups_names);
}

int check_course(int course, std::vector<int> courses) {
	for (int j = 0; j < courses.size(); j++) {
		if (course == courses[j]) {
			return 1;
		}
	}
	return 0;
}

int check_name(std::string name, std::vector<std::string> names) {
	for (int j = 0; j < names.size(); j++) {
		if (name == names[j]) {
			return 1;
		}
	}
	return 0;
}

int get_name_index(std::string name, std::vector<std::string> names) {
	for (int j = 0; j < names.size(); j++) {
		if (name == names[j]) {
			return j;
		}
	}
}


};
}
