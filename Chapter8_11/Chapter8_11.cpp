#include<iostream>

class Something {
public:
	static int getValue();
	int temp() { return 1024; }
private:
	static int value;
};

int Something::value = 10;

int Something::getValue()
{
	return value;
}

using namespace std;
int main() {
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;
	cout << s2.getValue() << endl;

	int(Something:: * fptr1)() = &Something::temp;
	cout << (s2.*fptr1)() << endl;

	int(*fptr2)() = &Something::getValue;
	cout << (*fptr2)() << endl;
}