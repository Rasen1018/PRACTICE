#include <iostream>
#include <string>
using namespace std;


class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}

	void ShowPersonInfo() const {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	Person& operator=(const Person& ref)
	{
		if (name != nullptr) delete[]name;
		int len = strlen(ref.name) + 1;	   //���ڿ��� null���� ���� +1
		name = new char[len];			   //�޸� �Ҵ��� len��ŭ
		strcpy_s(name, len, ref.name);     //ref.name�� name�� ����
		age = ref.age;
		return *this;
	}

	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}

};

int main(void)
{
	Person man1("Lee jong goo", 28);
	Person man2("Hong sung joo", 26);
	man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}