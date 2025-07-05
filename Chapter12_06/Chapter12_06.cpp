#include<iostream>

using namespace std;

class Base {
public:
	int a;
	double d;
	Base() { cout << "Base" << endl; }
	void func1() {};
};

class Derived :public Base {
public:
	float f;
	Derived() { cout << "Derived" << endl; }
};

int main() {
	Base base;
	Derived derived;

	cout << sizeof(Base) << endl;
	cout << sizeof(Derived) << endl;
	return 0;
}