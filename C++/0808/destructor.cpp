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
		std::cout << "이름: " << name << std::endl;
		std::cout << "나이: " << age << std::endl;
	}

	~Person() // 자동으로 불러오기 때문에 직접 호출 금지!!!!
	{
		delete[]name;
		std::cout << "called destructor!" << std::endl;

	}
};

int main()
{
	char name[10]= "문성훈";
	Person hi(name, 20);
	//Person hi = Person(name, 20);
	hi.ShowPersonInfo();

	return 0;
}