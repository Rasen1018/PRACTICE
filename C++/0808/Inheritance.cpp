#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char name[50];
	int age;
public:
	Person(char* myname, int myage) : age(myage)
	{
		strcpy_s(name, strlen(name) +1, myname);
	}

	void WhatYourName() const
	{
		std::cout << "My name is " << name << std::endl;
	}

	void HowOldAreYou() const
	{
		std::cout << "I'm " << age << " years old." << std::endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];
public:
	UnivStudent(char* myname, int myage, char* mymajor) : Person(myname, myage)
	{
		strcpy_s(major, strlen(major) +1, mymajor);
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main()
{
	char name[10] = "±è°³¶Ë";
	char major[10] = "°æ¿µÇÐºÎ";
	Person a(name, 20);
	a.WhatYourName();
	a.HowOldAreYou();

	UnivStudent b(name, 25, major);
	b.WhoAreYou();

	return 0;
}