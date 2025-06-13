#include "IntArray.h"
#include<iostream>

void IntArray::insertBefore(const int& value, const int& ix)
{
	//1. ����� ũ�Ⱑ m_length���� ū��? or 0���� ������?
	//2. 
	if (this->cur_idx >= this->m_length) {
		std::cout << "Error : array size full" << std::endl;
		exit(-1);
	}
	
	for (int i = this->cur_idx; i >ix; i--) {
		this->m_data[i] = this->m_data[i-1];
	}
	this->m_data[ix] = value;
	this->cur_idx++;
}

void IntArray::push_back(const int& value)
{
	insertBefore(value, this->cur_idx);
}
