#include<iostream>
using namespace std;

class A {
public:
	void print() { cout << "A" << endl; }
};

class B :public A {
public:
	virtual void print() { cout << "B" << endl; }
};

class C :public B {
public:
	void print() { cout << "C" << endl; }
};

int main() {
	A a;
	B b;
	C c;

	A& ref = b;
	ref.print();
	ref = c;
	ref.print();

	B& bref = c;
	bref.print();
}