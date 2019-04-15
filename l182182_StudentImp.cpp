#include "l182182_Student.h"



Student::Student()
{
}

Student::Student(string fName, string lName, unsigned int age, float cGPA) : Person(fName, lName, age), cgpa(cGPA)
{
	cout << "Student() invoked" << endl;
}

Student::~Student()
{
	cout << "~Student() invoked" << endl;
}

void Student::setCGPA(float CGPA)
{
	this->cgpa = CGPA;
}

float Student::getCGPA() const
{
	return this->cgpa;
}

void Student::printStudent() const
{
	this->printInformation();
	cout << ", his CGPA is " << cgpa << endl;
}
