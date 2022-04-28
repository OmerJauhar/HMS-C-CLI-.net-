#pragma once
#include "DoctorsForm1.h";
#include "RegisterDoctorForm1.h"
#include "PatientRegisterForm1.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ llDoctors;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::LinkLabel^ linkLabel6;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->llDoctors = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(2, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(517, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hospital Management System ";
			// 
			// llDoctors
			// 
			this->llDoctors->AutoSize = true;
			this->llDoctors->BackColor = System::Drawing::Color::Transparent;
			this->llDoctors->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llDoctors->ForeColor = System::Drawing::Color::SaddleBrown;
			this->llDoctors->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"llDoctors.Image")));
			this->llDoctors->LinkColor = System::Drawing::Color::SaddleBrown;
			this->llDoctors->Location = System::Drawing::Point(25, 151);
			this->llDoctors->Name = L"llDoctors";
			this->llDoctors->Size = System::Drawing::Size(167, 25);
			this->llDoctors->TabIndex = 2;
			this->llDoctors->TabStop = true;
			this->llDoctors->Text = L"Register A Doctor ";
			this->llDoctors->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::llDoctors_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Pink;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(526, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 37);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Emlpoyee";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(61, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 37);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Doctor";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PapayaWhip;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(296, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 37);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Patient";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"linkLabel1.Image")));
			this->linkLabel1->LinkColor = System::Drawing::Color::SaddleBrown;
			this->linkLabel1->Location = System::Drawing::Point(25, 203);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(180, 25);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Book Appointment  ";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked_1);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->ForeColor = System::Drawing::Color::Navy;
			this->linkLabel2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"linkLabel2.Image")));
			this->linkLabel2->LinkColor = System::Drawing::Color::SaddleBrown;
			this->linkLabel2->Location = System::Drawing::Point(25, 262);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(175, 25);
			this->linkLabel2->TabIndex = 10;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"View Appointment  ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(9, 92);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(207, 258);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(254, 92);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(207, 258);
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->BackColor = System::Drawing::Color::PapayaWhip;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"linkLabel3.Image")));
			this->linkLabel3->LinkColor = System::Drawing::Color::SaddleBrown;
			this->linkLabel3->Location = System::Drawing::Point(267, 151);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(164, 25);
			this->linkLabel3->TabIndex = 13;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Register A Patient";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel3_LinkClicked);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->BackColor = System::Drawing::Color::PapayaWhip;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"linkLabel4.Image")));
			this->linkLabel4->LinkColor = System::Drawing::Color::SaddleBrown;
			this->linkLabel4->Location = System::Drawing::Point(267, 203);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(121, 25);
			this->linkLabel4->TabIndex = 14;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Generate Bill\r\n";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel4_LinkClicked);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(505, 92);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(207, 258);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->BackColor = System::Drawing::Color::Pink;
			this->linkLabel5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"linkLabel5.Image")));
			this->linkLabel5->LinkColor = System::Drawing::Color::SaddleBrown;
			this->linkLabel5->Location = System::Drawing::Point(516, 151);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(181, 25);
			this->linkLabel5->TabIndex = 16;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"Register Emlpoyees";
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->BackColor = System::Drawing::Color::Pink;
			this->linkLabel6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"linkLabel6.Image")));
			this->linkLabel6->LinkColor = System::Drawing::Color::SaddleBrown;
			this->linkLabel6->Location = System::Drawing::Point(516, 203);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(174, 25);
			this->linkLabel6->TabIndex = 17;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"Current Emlpoyees";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1299, 663);
			this->Controls->Add(this->linkLabel6);
			this->Controls->Add(this->linkLabel5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->llDoctors);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchtopatient = false; 
	public: bool switchtoappointment = false; 
	public: bool switchtoregisterdoctor = false;
	public: bool switchtoemployee = false; 
	public: bool switchtopatientregister = false; 
	public: bool switchtobill = false;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void llDoctors_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchtoregisterdoctor = true;
		this->Close();
	}

	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchtopatient = true; 
		this->Close();
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtoemployee = true; 
	this->Close();
}
private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtopatientregister = true;
	this->Close();

}
private: System::Void linkLabel1_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtoappointment = true; 
	this->Close();
}
private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchtobill = true; 
	this->Close();
}
};
}
