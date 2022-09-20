#include <iostream>
#include <csting>

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len ,myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		std::cout << "�̸�: " << name << std::endl;
		std::cout << "����: " << age << std::endl;
	}

	~Person() // �ڵ����� �ҷ����� ������ ���� ȣ�� ����!!!!
	{
		delete[]name;
		std::cout << "called destructor!" << std::endl;

	}
};

int main()
{
	char name[10]= "������";
	Person hi(name, 20);
	//Person hi = Person(name, 20);
	hi.ShowPersonInfo();

	return 0;
}