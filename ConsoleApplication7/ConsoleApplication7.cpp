#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
#include "Student.h"
#include "Group.h"
int main()
{
	Student s1("Elgun", "Haqveridyev", 18, 12);
	Student s2("Emil", "Tagiyev", 28, 12);
	Student s3("Qalib", "Ismayilov", 16, 12);
	Student s4("Qabil", "Ismayilov", 6, 12);
	vector<Student> group{ s1, s2, s3 };

	Group g("FBMS_2_22_3", group);
	//g.studentsAddTextFile();
	g.delstudFile(s1);
}


