#pragma once
#include<iostream>
#include<string>
#include"Position2D.h"

class Monster {
private:
	std::string m_name;
	Position2D m_pos;

public:
	Monster(const std::string name_in, const Position2D& pos_in)
		:m_name(name_in), m_pos(pos_in)
	{
		
	}

	void moveTo(const Position2D& pos_target) {
		m_pos = pos_target;
	}

	friend std::ostream& operator<<(std::ostream& os, const Monster& monster) {
		return os << monster.m_name << ":" << monster.m_pos << std::endl;
	}
};