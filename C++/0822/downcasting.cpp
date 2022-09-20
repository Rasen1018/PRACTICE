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
	}

	void write() {
		cout << "철수는 책을 쓴다" << endl;
	}

	void introduce() const {
		cout << "철수의 이름: " << name << endl;
		cout << "철수의 나이: " << age << endl;
		cout << "철수가 쓴 책의 수: " << numOfBooks << endl;
		// write(); -> 에러 발생 : const 메서드는 const 메서드만 호출 가능
	}

	void SetAge(int age) /*const*/ {
		this->age = age;
	}
};

int main(void)
{
	cout << "=================(Chulsoo -> Person) 업캐스팅 (참조)====================" << endl;
	Chulsoo chulsooUpRef = Chulsoo("철수", 32, 3);
	Person& personUpRef = chulsooUpRef;
	personUpRef.introduce();
	cout << "=================(Chulsoo -> Person) 업캐스팅 (포인터)====================" << endl;
	Person* personUpPtr = new Chulsoo("철수", 30, 3);
	personUpPtr->introduce();
	cout << "=================(Chulsoo -> Person) 업캐스팅====================" << endl;
	Chulsoo chulsooUp = Chulsoo("철수", 28, 3);
	Person personUp = chulsooUp;
	personUp.introduce();
	cout << "=================(Chulsoo -> Person) 다운캐스팅====================" << endl;
	//Person personDown = Person("사람", 100);
	//Chulsoo chulsooDown = personDown;
	//chulsooDown.introduce();

	Person* pPersonDown = new Chulsoo("사람", 100, 3);
	Chulsoo* pChulsooDown = static_cast<Chulsoo*>(pPersonDown);
	pChulsooDown->write();

		return 0;
}