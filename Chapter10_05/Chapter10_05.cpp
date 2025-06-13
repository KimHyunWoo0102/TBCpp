#include<iostream>
#include"IntArray.h"

int main() {
	IntArray iarr(10);

	for (int i = 0; i < 10; i++)
		iarr.push_back(i);
	std::cout << iarr;
	iarr.resize(15);
	std::cout << iarr;
	iarr.insertBefore(202, 7);
	std::cout << iarr;
}