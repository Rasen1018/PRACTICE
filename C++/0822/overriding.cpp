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
		cout << "Person::Person(name, age) 생성자 완료" << endl;
	}

	~Person() {
		cout << "Person::~Person() 소멸자 완료" << endl;
	}

	void introduce() {
		cout << "Person의 이름 : " << name << endl;
		cout << "Person의 나이 : " << age << endl;
	}

	void eat() {
		cout << "Person은 먹는다" << endl;
	}

	void sleep() {
		cout << "Person은 잔다" << endl;
	}
};

class Chulsoo : public Person {
private:
	int numOfBooks;
public:
	Chulsoo(const char* name, int age, int numOfBooks) : Person(name, age) {
		this->numOfBooks = numOfBooks;
		cout << "Chulsoo::chulsoo(name, age, numOfBooks) 생성자 완료" << endl;
	}

	~Chulsoo() {
		cout << "Chulsoo::~Chulsoo() 소멸자 완료" << endl;
	}

	void introduce() const {
		cout << "철수의 이름: " << name << endl;
		cout << "철수의 나이: " << age << endl;
		// write(); -> 에러 발생 : const 메서드는 const 메서드만 호출 가능
	}

};

int main(void)
{
	Person person("사람", 100);
	person.introduce();

	Chulsoo chulsoo("철수", 42, 2);
	chulsoo.introduce();

	return 0;
}