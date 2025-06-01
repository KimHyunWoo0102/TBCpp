#include<iostream>
#include"constants.h"
extern int a;

void doSomething();

int main() {
	std::cout << Constants::PI << " " << &Constants::PI << std::endl;
	doSomething();
	return 0;
}