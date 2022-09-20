#include "ConTest.h"

CON1::CON1(const int a) :c(200) // 이니셜라이즈가 먼저, 그다음에 바디
{
	this->c = a; //멤버 변수 c와 매개 변수(인자) a
	cout << "*** CON1의 생성자***" << endl;
	cout << "c=" << a << endl; //this->c
}

CON1::~CON1()
{
	cout << "*** CON1의 소멸자***" << endl;
}

CON2::CON2() : CON1(300)
{
	cout << "*** CON2의 생성자***" << endl;
	cout << "c=" << c << endl;
}

CON2::~CON2()
{
	cout << "*** CON2의 소멸자***" << endl;
}