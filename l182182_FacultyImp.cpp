#include "l182182_Faculty.h"



Faculty::Faculty()
{
}

Faculty::Faculty(string fName, string lName, unsigned int age, unsigned int courseCount, char* arr) : Person(fName, lName, age), course_count(courseCount)
{
	strcpy_s(extension, 4, arr);
	cout << "Faculty() invoked" << endl;
}


Faculty::~Faculty()
{
	cout << "~Faculty() invoked" << endl;
}

void Faculty::setCourseCount(unsigned int courseCount)
{
	this->course_count = courseCount;
}

unsigned int Faculty::getCourseCount() const
{
	return this->course_count;
}

void Faculty::setExtension(char* arr)
{
	strcpy_s(extension, 4, arr);
}

char * Faculty::getExtension() const
{
	return (char*)extension;
}

void Faculty::printFaculty() const
{
	cout << "Faculty Member name: " << this->getFirstName() << ' ' << getLastName() << ", Age: " << this->age << ", Number of Course: " << this->course_count << ", Ext. " << this->extension << endl;
}
