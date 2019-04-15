#pragma once
#include "l182182_Person.h"
class Faculty :	private Person
{
private:
	unsigned int course_count;
	char extension[4];

public:
	Faculty();
	Faculty(string, string, unsigned int, unsigned int, char*);
	~Faculty();

	void setCourseCount(unsigned int);
	unsigned int getCourseCount() const;

	void setExtension(char*);
	char* getExtension() const;

	void printFaculty() const;
};

