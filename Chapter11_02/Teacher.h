#pragma once

#include"Person.h"

class Teacher :public Person{
private:

public:
	Teacher(const std::string& name_in = "No name")
		:Person(name_in)
	{
	}
};