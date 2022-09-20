#include <iostream>
using namespace std;

#if 1
class Person {
public:
	Person() {
		cout << "Person::Person() 생성자 호출" << endl;
	}
	~Person() {
		cout << "Person::~Person() 소멸자 호출" << endl;
	}
	virtual void write() = 0;

	void sleep()
	{
		cout << "잔다" << endl;
	}
};

class Chulsoo : public virtual Person {
public:
	Chulsoo() :Person() {
		cout << "Chulsoo::Chulsoo() 생성자 호출" << endl;
	}
	~Chulsoo() {
		cout << "Chulsoo::Chulsoo() 소멸자 호출" << endl;
	}

	void write() {
		cout << "책을 잘 쓴다" << endl;
	}
};

class Younghee : public virtual Person {
public:
	Younghee() :Person() {
		cout << "Younghee::Younghee() 생성자 호출" << endl;
	}
	~Younghee() {
		cout << "Younghee::~Younghee() 소멸자 호출" << endl;
	}

	void write() {
		cout << "책을 못 쓴다" << endl;
	}
};

class YC : public Chulsoo, public Younghee {
public:
	YC() : Chulsoo(), Younghee() {
		cout << "YC::YC() 생성자 호출" << endl;
	}
	~YC() {
		cout << "YC::~YC() 소멸자 호출" << endl;
	}
	void write() {
		Chulsoo::write();
	}
};

int main(void)
{
	YC yc;
	yc.write();
	yc.sleep();
	return 0;
}
#else
class BaseOne {
public:
	void SimpleFuncOne() {
		cout << "BaseOne" << endl;
	}
};

class BaseTwo {
public:
	void SimpleFuncTwo() {
		cout << "BaseTwo" << endl;
	}
};

class MultiDerived : public BaseOne, protected BaseTwo {
public:
	void ComplexFunc()
	{
		SimpleFuncOne();
		SimpleFuncTwo();
	}
};

int main(void)
{
	MultiDerived mdr;
	mdr.ComplexFunc();
	return 0;
}

#endif
