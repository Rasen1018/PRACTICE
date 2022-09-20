#include <iostream>
using namespace std;

#if 1
class Person {
public:
	Person() {
		cout << "Person::Person() ������ ȣ��" << endl;
	}
	~Person() {
		cout << "Person::~Person() �Ҹ��� ȣ��" << endl;
	}
	virtual void write() = 0;

	void sleep()
	{
		cout << "�ܴ�" << endl;
	}
};

class Chulsoo : public virtual Person {
public:
	Chulsoo() :Person() {
		cout << "Chulsoo::Chulsoo() ������ ȣ��" << endl;
	}
	~Chulsoo() {
		cout << "Chulsoo::Chulsoo() �Ҹ��� ȣ��" << endl;
	}

	void write() {
		cout << "å�� �� ����" << endl;
	}
};

class Younghee : public virtual Person {
public:
	Younghee() :Person() {
		cout << "Younghee::Younghee() ������ ȣ��" << endl;
	}
	~Younghee() {
		cout << "Younghee::~Younghee() �Ҹ��� ȣ��" << endl;
	}

	void write() {
		cout << "å�� �� ����" << endl;
	}
};

class YC : public Chulsoo, public Younghee {
public:
	YC() : Chulsoo(), Younghee() {
		cout << "YC::YC() ������ ȣ��" << endl;
	}
	~YC() {
		cout << "YC::~YC() �Ҹ��� ȣ��" << endl;
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
