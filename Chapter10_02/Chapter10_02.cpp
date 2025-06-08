#include<iostream>
#include"Lecture.h"
#include"Student.h"
int main() {
	using namespace std;

	Student std1("Jack Jack", 0);
	Student std2("Dash", 1);
	Student std3("Violet", 2);

	Teacher t1("Prof. Hong");
	Teacher t2("Prof. Good");

	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(&t1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(&t2);
	lec2.registerStudent(&std1);

	//test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}
	return 0;
}