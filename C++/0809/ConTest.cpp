#include "ConTest.h"

CON1::CON1(const int a) :c(200) // �̴ϼȶ���� ����, �״����� �ٵ�
{
	this->c = a; //��� ���� c�� �Ű� ����(����) a
	cout << "*** CON1�� ������***" << endl;
	cout << "c=" << a << endl; //this->c
}

CON1::~CON1()
{
	cout << "*** CON1�� �Ҹ���***" << endl;
}

CON2::CON2() : CON1(300)
{
	cout << "*** CON2�� ������***" << endl;
	cout << "c=" << c << endl;
}

CON2::~CON2()
{
	cout << "*** CON2�� �Ҹ���***" << endl;
}