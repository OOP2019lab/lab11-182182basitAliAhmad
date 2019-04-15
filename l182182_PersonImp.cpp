#include "l182182_Person.h"

Person::Person()
{

}

Person::Person(string fName, string lName, unsigned int age) : firstName(fName), lastName(lName), age(age)
{
	cout << "Person() invoked" << endl;
}

Person::~Person()
{
	cout << "~Person() invoked" << endl;
}

void Person::setFirstName(string fName)
{
	this->firstName = fName;
}

string Person::getFirstName() const
{
	return this->firstName;
}

void Person::setLastName(string lName)
{
	this->lastName = lName;
}

string Person::getLastName() const
{
	return this->lastName;
}

void Person::setAge(unsigned int age)
{
	this->age = age;
}

unsigned int Person::getAge() const
{
	return this->age;
}

void Person::printInformation() const
{
	cout << firstName << ' ' << lastName << " is " << age << " years old";
}
