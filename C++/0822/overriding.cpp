#include <iostream>
#include <string>
#define NAME_LEN 20
using namespace std;

class Person
{
protected:
	char name[NAME_LEN];
	int age;

public:
	Person(const char* myname, int myage)
	{
		strcpy_s(name, NAME_LEN, myname);
		age = myage;
		cout << "Person::Person(name, age) ������ �Ϸ�" << endl;
	}

	~Person() {
		cout << "Person::~Person() �Ҹ��� �Ϸ�" << endl;
	}

	void introduce() {
		cout << "Person�� �̸� : " << name << endl;
		cout << "Person�� ���� : " << age << endl;
	}

	void eat() {
		cout << "Person�� �Դ´�" << endl;
	}

	void sleep() {
		cout << "Person�� �ܴ�" << endl;
	}
};

class Chulsoo : public Person {
private:
	int numOfBooks;
public:
	Chulsoo(const char* name, int age, int numOfBooks) : Person(name, age) {
		this->numOfBooks = numOfBooks;
		cout << "Chulsoo::chulsoo(name, age, numOfBooks) ������ �Ϸ�" << endl;
	}

	~Chulsoo() {
		cout << "Chulsoo::~Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}

	void introduce() const {
		cout << "ö���� �̸�: " << name << endl;
		cout << "ö���� ����: " << age << endl;
		// write(); -> ���� �߻� : const �޼���� const �޼��常 ȣ�� ����
	}

};

int main(void)
{
	Person person("���", 100);
	person.introduce();

	Chulsoo chulsoo("ö��", 42, 2);
	chulsoo.introduce();

	return 0;
}