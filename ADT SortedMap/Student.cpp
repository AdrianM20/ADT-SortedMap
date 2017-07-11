#include "Student.h"

Student::Student()
{
}

Student::Student(const std::string & name, const std::string & username, const double & finalgrade)
{
	this->name = name;
	this->username = username;
	this->finalGrade = finalgrade;
}

Student::~Student()
{
}
