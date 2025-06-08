#pragma once
#include<iostream>

class Position2D {
private :
	int m_x;
	int m_y;

public:
	Position2D(const int& x_in, const int& y_in)
		:m_x(x_in), m_y(y_in)
	{}

	void set(const int& x_target, const int& y_target) {
		m_x = x_target;
		m_y = y_target;
	}
	void operator=(const Position2D& other) {
		this->m_x = other.m_x;
		this->m_y = other.m_y;
	}
	friend std::ostream& operator<<(std::ostream& os, const Position2D& pos) {
		return os << "(" << pos.m_x << "," << pos.m_y << ")";
	}
};