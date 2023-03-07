#pragma once
class Student
{
private:
	string name;
	string surname;
	short age;
	short average;
public:
	Student(string name, string surname, short age, short average)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->average = average;
	}

	bool operator!=(const Student& s)
	{
		if (name != s.name || surname != s.surname || age != s.age || average != s.average)
			return true;
		else
			return false;
	}

	string getName() { return name; }
	string getSurname() { return surname; }
	short getAge() { return age; }
	short getAverage() { return average; }
};
