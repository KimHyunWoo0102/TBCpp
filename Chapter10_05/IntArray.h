#pragma once
#include<iostream>
#include<memory>

class IntArray
{
private:
	int m_length;
	int cur_idx;
	int* m_data = nullptr;

public:
	IntArray(int size = 0) :m_length(size),cur_idx(0)
	{
		m_data = new int[size] {0, };
	}
	~IntArray() {
		delete[] m_data;
	}

	void reset() {
		delete[] m_data;
		m_data = new int[m_length] {0, };
	}

	void resize(int size) {
		int* tmp = new int[size];
		memcpy(tmp, m_data, m_length * sizeof(int));
		delete[] m_data;
		m_data = tmp;
		m_length = size;
	}

	void insertBefore(const int& value, const int& ix);
	void push_back(const int& value);

	friend std::ostream& operator<<(std::ostream& os, const IntArray& intArr) {
		for (int i = 0; i < intArr.cur_idx; i++)
			os << intArr.m_data[i] << "\n";

		return os;
	}
};

