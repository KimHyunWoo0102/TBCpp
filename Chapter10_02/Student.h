#pragma once

#include<string>
#include<iostream>

class Student {
private:
	std::string m_name;
	int m_intel;
public:
	Student(const std::string& name_in, const int& intel = 0) :m_name(name_in), m_intel(intel)
	{}

	void setName(const std::string& name_in) {
		m_name = name_in;
	}

	void setIntel(const int& intel_in) {
		m_intel = intel_in;
	}

	std::string getName() {
		return m_name;
	}

	const int getIntel() const{
		return m_intel;
	}

	friend std::ostream& operator<<(std::ostream& os, const Student& student) {
		return os<< student.m_name << " " << student.m_intel;
	}
};