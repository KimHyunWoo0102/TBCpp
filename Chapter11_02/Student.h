#pragma once

#include"Person.h"
#include<iostream>
#include<string>

class Student:public Person {
private :
	int m_intel; //intelligence

public:
	Student(const std::string &name_in="No name",const int&intel_in=0)
		:Person(name_in), m_intel(intel_in)
	{ }
};