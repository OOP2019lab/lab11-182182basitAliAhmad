#include<iostream>
#include <string>
using namespace std;

#pragma once
class Person
{
private:
	string firstName;
	string lastName;
protected:
	unsigned int age;

	void setFirstName(string);
	string getFirstName() const;

	void setLastName(string);
	string getLastName() const;

	void setAge(unsigned int);
	unsigned int getAge() const;

	void printInformation() const;

public:
	
	Person();
	Person(string, string, unsigned int);
	~Person();
};