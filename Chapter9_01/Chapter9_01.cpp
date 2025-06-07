#include<iostream>

using namespace std;

class Cents {
	int m_cents;

public:
	Cents(int cents) :m_cents(cents) { cout << "make cents" << endl; }
	~Cents() { cout << "delete cents" << endl; }
	Cents operator+(const Cents& other) {
		return Cents(this->m_cents + other.m_cents);
	}
	int getCents() const { return m_cents; }
};

void add(const Cents& c1, const Cents& c2) {
	cout << c1.getCents() + c2.getCents() << endl;
}

//Cents operator+(const Cents& c1, const Cents& c2) {
//	return Cents(c1.getCents() + c2.getCents());
//}

int main() {
	Cents c1(10), c2(6);

	cout << (c1 + c2+Cents(20)).getCents() << endl;
	return 0;
}