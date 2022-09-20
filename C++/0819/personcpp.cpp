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
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	Person& operator=(const Person& ref)
	{
		if (name != nullptr) delete[]name;
		int len = strlen(ref.name) + 1;	   //문자열의 null값을 위해 +1
		name = new char[len];			   //메모리 할당을 len만큼
		strcpy_s(name, len, ref.name);     //ref.name을 name에 복사
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