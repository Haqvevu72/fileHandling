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
		bool flag = true;
		try
		{
			if (Group.tellp()==0)
				throw exception("File is empty!");
		}
		catch (const exception& ex)
		{
			cout << ex.what() << endl;
		}
		for (Student i : group)
		{
			if (!(i != s))
				flag = false;

		}
		try
		{
			if (flag)
				throw exception("This student doesn't exist in this group");
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
		}
		catch (const exception& ex)
		{
			cout<<ex.what()<<endl;
		}
		 
		Group.close();
	}

};
