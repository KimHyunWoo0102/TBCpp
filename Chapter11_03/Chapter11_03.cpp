#include<iostream>

class Mother {
public:
	int m_i;

	Mother():m_i(1)
	{
		std::cout << "Mother construction " << std::endl;
	}
};

class Child :public Mother {
public:
	double m_d;
public:
	Child() :m_d(1.0)
	{
		std::cout << "Child construction " << std::endl;
	}
};

int main() {
	Child child1;

	return 0;
}