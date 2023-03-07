#pragma once
class Group
{
private:
	string name;
	vector<Student> group;
public:
	Group(string name, vector<Student>group)
	{
		this->name = name;
		this->group = group;
	}
	void studentsAddTextFile()
	{
		ofstream Group;
		Group.open("Group.txt", ios::out);
		for (Student s : group)
		{
			Group << "Name: " << s.getName() << endl;
			Group << "Surname: " << s.getSurname() << endl;
			Group << "Age: " << s.getAge() << endl;
			Group << "Average: " << s.getAverage() << endl << endl;
		}
		Group.close();
	}

	// Delete Student From File
	void delstudFile(const Student& s)
	{
		ofstream Group;
		Group.open("Group.txt", ios::out);
		for (Student& i : group)
		{
			if (i != s)
			{
				Group << "Name: " << i.getName() << endl;
				Group << "Surname: " << i.getSurname() << endl;
				Group << "Age: " << i.getAge() << endl;
				Group << "Average: " << i.getAverage() << endl << endl;
			}
		}
		Group.close();
	}

};
