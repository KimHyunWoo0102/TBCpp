#pragma once
#include<vector>
#include<iostream>
#include"Student.h"
#include"Teacher.h"

class Lecture {
private:
	std::string m_name;

	Teacher* teacher;
	std::vector<Student*> students;

public:
	Lecture(const std::string&name_in)
		:m_name(name_in)
	{}

	~Lecture() {
		//do Not delete teacher
		//do Not delete students
	}

	/*void assignTeacher(const Teacher& const teacher_in) {
		teacher = teacher_in;
	}*/

	void assignTeacher(Teacher* const teacher_input) {
		teacher = teacher_input;
	}

	/*void registerStudent(const Student& const student_in) {
		students.push_back(student_in);
	}*/

	void registerStudent(Student* const student_in) {
		students.push_back(student_in);
	}

	/*void study() {
		std::cout << m_name << " Study " << std::endl << std::endl;

		for (auto& element : students)
			element.setIntel(element.getIntel() + 1);
	}*/
	void study() {
		std::cout << m_name << " Study " << std::endl << std::endl;

		for (auto element : students)
			element->setIntel(element->getIntel() + 1);
	}

	friend std::ostream& operator<<(std::ostream& os, const Lecture& lecture) {
		os << lecture.m_name << std::endl;
		os << *lecture.teacher << std::endl;

		for (const auto student : lecture.students)
			os << *student << std::endl;
		return os << std::endl;
	}
};