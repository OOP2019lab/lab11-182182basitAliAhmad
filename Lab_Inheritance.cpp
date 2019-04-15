#include "l182182_Faculty.h"
#include "l182182_Person.h"
#include "l182182_Student.h"

int main()
{
	Student s("Ted", "Thompson", 22, 3.91);
	Faculty f("Richard", "Karp", 45, 2, "420");

	s.printStudent();
	f.printFaculty();
    return 0;
}

/*
Output for exercise 5
Person() invoked
Student() invoked
Person() invoked
Faculty() invoked
~Faculty() invoked
~Person() invoked
~Student() invoked
~Person() invoked
Press any key to continue . . .
*/

