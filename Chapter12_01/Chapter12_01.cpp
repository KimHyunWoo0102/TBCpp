#include<iostream>
#include<string>
using namespace std;

class Animal {
protected:
	string m_name;

public:
	Animal(std::string name)
		:m_name(name)
	{}

public:
	string getName() { return m_name; }
	virtual void speak()const {
		cout << m_name << " ??? " << endl;
	}
};

class Cat :public Animal {
public:
	Cat(string name)
		:Animal(name)
	{}

	void speak()const {
		cout << m_name << " Meow" << endl;
	}
};

class Dog :public Animal {
public:
	Dog(string name)
		:Animal(name)
	{}

	void speak()const {
		cout << m_name << " Woof" << endl;
	}
};

int main() {
	Animal animal("my animal");
	Cat cat("my cat");
	Dog dog("my dog");

	animal.speak();
	cat.speak();
	dog.speak();

	Animal* ptrAnimal = &cat;
	ptrAnimal->speak();

	ptrAnimal = &dog;
	ptrAnimal->speak();
	return 0;
}