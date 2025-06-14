#include<iostream>
using namespace std;

class Mother {
private:
	int m_i;

public:
	Mother(int i_in=0):m_i(i_in){
		cout << "Mother constructor!" << endl;
	}

	void setValue(const int& i_in) {
		m_i = i_in;
	}

	int getValue() {
		return m_i;
	}
};

class Child :public Mother {
public:
	Child(int i_in = 0):Mother(i_in){
		cout << "Child constructor!" << endl;
	}
};
int main() {
	Mother mother;
	mother.setValue(10);
	std::cout << mother.getValue() << std::endl;
	
	Child child;
	child.setValue(20);
	cout << child.getValue() << endl;
}