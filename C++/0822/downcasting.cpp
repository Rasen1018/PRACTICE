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
	}

	void write() {
		cout << "ö���� å�� ����" << endl;
	}

	void introduce() const {
		cout << "ö���� �̸�: " << name << endl;
		cout << "ö���� ����: " << age << endl;
		cout << "ö���� �� å�� ��: " << numOfBooks << endl;
		// write(); -> ���� �߻� : const �޼���� const �޼��常 ȣ�� ����
	}

	void SetAge(int age) /*const*/ {
		this->age = age;
	}
};

int main(void)
{
	cout << "=================(Chulsoo -> Person) ��ĳ���� (����)====================" << endl;
	Chulsoo chulsooUpRef = Chulsoo("ö��", 32, 3);
	Person& personUpRef = chulsooUpRef;
	personUpRef.introduce();
	cout << "=================(Chulsoo -> Person) ��ĳ���� (������)====================" << endl;
	Person* personUpPtr = new Chulsoo("ö��", 30, 3);
	personUpPtr->introduce();
	cout << "=================(Chulsoo -> Person) ��ĳ����====================" << endl;
	Chulsoo chulsooUp = Chulsoo("ö��", 28, 3);
	Person personUp = chulsooUp;
	personUp.introduce();
	cout << "=================(Chulsoo -> Person) �ٿ�ĳ����====================" << endl;
	//Person personDown = Person("���", 100);
	//Chulsoo chulsooDown = personDown;
	//chulsooDown.introduce();

	Person* pPersonDown = new Chulsoo("���", 100, 3);
	Chulsoo* pChulsooDown = static_cast<Chulsoo*>(pPersonDown);
	pChulsooDown->write();

		return 0;
}