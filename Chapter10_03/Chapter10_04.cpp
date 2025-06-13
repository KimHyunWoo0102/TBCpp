#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Patient; //전방 선언이 있다면 제휴 관계구나 추론 가능

class Doctor {
private:
	string m_name;
	vector<Patient*> m_patient;

public:
	Doctor(string name_in)
		:m_name(name_in)
	{}

	void addPatient(Patient* new_patient) {
		m_patient.push_back(new_patient);
	}
	void meetPatient();
	friend class Patient;
};

class Patient {
	string m_name;
	vector<Doctor*> m_doctors;

public:
	Patient(string name_in)
		:m_name(name_in)
	{}
	void addDoctor(Doctor* new_doctor) {
		m_doctors.push_back(new_doctor);
	}

	void meetDoctors() {
		for (auto& ele : m_doctors)
		{
			cout << "Meet doctor : " << ele->m_name << endl;
		}
	}

	friend class Doctor;
};

void Doctor::meetPatient() {
	for (auto& ele : m_patient)
	{
		cout << "Meet patient : " << ele->m_name << endl;
	}
}

int main() {
	Patient* p1 = new Patient("Jack Jack");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Violet");

	Doctor* d1 = new Doctor("Doctor k");
	Doctor* d2 = new Doctor("Doctor p");

	p1->addDoctor(d1);
	p1->addDoctor(d2);

	d1->addPatient(p1);
	d2->addPatient(p1);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	p3->addDoctor(d2);
	d2->addPatient(p3);

	cout << "p1 meets doctors" << endl;
	p1->meetDoctors();
	cout << "p2 meets doctors" << endl;
	p2->meetDoctors();
	cout << "p3 meets doctors" << endl;
	p3->meetDoctors();

	cout << "d1 meets patiens" << endl;
	d1->meetPatient();
	cout << "d2 meets patiens" << endl;
	d2->meetPatient();

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;
	return 0;
}