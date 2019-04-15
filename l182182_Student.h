#pragma once
#include "l182182_Person.h"

class Student :	public Person
{
private:
	float cgpa;

public:
	Student();
	Student(string, string, unsigned int, float);
	~Student();

	void setCGPA(float);
	float getCGPA() const;

	void printStudent() const;
};