#pragma once
#include <string>

class Student
{
private:
	std::string name;
	std::string username;
	double finalGrade;

public:
	//default constructor
	Student();
	//constructor with parameters
	Student(const std::string& name, const std::string& username, const double& finalgrade);
	//default destructor
	~Student();

	std::string getName() const { return this->name; }
	std::string getUsername() const { return this->username; }
	double getFinalGrade() const { return this->finalGrade; }
};