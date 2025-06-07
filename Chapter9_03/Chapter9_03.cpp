#include<iostream>

class Cents {
private:
	int m_cents;

public:
	Cents(int cents=0):m_cents(cents){}

	bool operator!() {
		return (m_cents == 0) ? true : false;
	}

	bool operator>(const Cents&other) {
		return m_cents > other.m_cents;
	}
	bool operator<(const Cents& other) {
		return m_cents < other.m_cents;
	}
	//prefix
	Cents operator++() {
		m_cents++;
		return *this;
	}
	//post
	Cents operator++(int) {
		Cents tmp(m_cents);
		++(*this);
		return tmp;
	}

	friend std::ostream& operator<<(std::ostream& os, const Cents c);
};

std::ostream& operator<<(std::ostream& os, const Cents c)
{
	return os << c.m_cents;
	// TODO: 여기에 return 문을 삽입합니다.
}


int main() {
	Cents c1(10), c2(8);

	std::cout << (c1 > c2) << std::endl;
	std::cout << !c1 << std::endl;

	std::cout << c2++ << std::endl;
	std::cout << c2 << std::endl;
	std::cout << ++c2 << std::endl;

}