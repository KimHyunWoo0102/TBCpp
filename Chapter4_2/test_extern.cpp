#include "test_extern.h"
#include"constants.h"
#include<iostream>
int a = 10;

void doSomething()
{
	std::cout << "test_extern : " << Constants::PI << " " << &Constants::PI << std::endl;
}
