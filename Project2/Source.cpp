#include "MyForm.h"
#include "PatientForm1.h"
#include "DoctorsForm1.h"
#include "RegisterDoctorForm1.h"
#include "EmlpoyeeForm1.h"
#include "PatientRegisterForm1.h"
#include "appointment.h"
#include "generatebill.h"
#include<iostream>


using namespace System;
using namespace System::Windows::Forms;
using namespace std; 
class hospital {
private:
	int bed_capacity = 0; 
	string hospital_name; 
	string location; 
	int ratings; 
	string type_of_hospital;
public:
	hospital(int a, int b, string c , string d , string e) {
		this->bed_capacity = a; 
		this->ratings = b; 
		this->hospital_name = c; 
		this->location = d; 
		this->type_of_hospital = e; 

	}

};
class credentials {
private:
	string user_name;
	int cnic;
	int phone_number;
	int age;
	string gender;
public:
	credentials(string a, int b, int c, int d, string e) {
		this->user_name = a;
		this->cnic = b;
		this->phone_number = c;
		this->age = d;
		this->gender = e;

	}


};
class doctors : public credentials {

};

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	while (true) {
		Project2::MyForm MyForm;
		Project2::RegisterDoctorForm1 RegisterDoctorForm1; 
		MyForm.ShowDialog();
		if (MyForm.switchtoregisterdoctor) {
			MyForm.Close();
			Project2::RegisterDoctorForm1 RegisterDoctor1;
			RegisterDoctorForm1.ShowDialog();
			
		}
		else if (MyForm.switchtopatientregister) {
			MyForm.Close();
			Project2::PatientRegisterForm1 PatientRegisterForm1; 
			PatientRegisterForm1.ShowDialog();
		}
		
		else if (MyForm.switchtopatient) {
			MyForm.Close();
			Project2::PatientForm1 PatientForm1; 
			PatientForm1.ShowDialog();

		}
		else if (MyForm.switchtoappointment) {
			MyForm.Close();
			Project2::appointment appointment;
			appointment.ShowDialog();

		}
		else if (MyForm.switchtoemployee) {
			MyForm.Close();
			Project2::EmlpoyeeForm1 EmlpyeeForm1;
			EmlpyeeForm1.ShowDialog();
		}
		else if (MyForm.switchtobill) {
			MyForm.Close();
			Project2::generatebill generatebill; 
			generatebill.ShowDialog();


		}

	}
	
	return 0; 
	

	
}