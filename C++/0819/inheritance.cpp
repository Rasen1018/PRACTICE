/*
상속 구조에서의 대입 연산자 호출
*/

#include <iostream>
using namespace std;

class First {
public:
	First(int n1=0, int n2=0) : num1(n1), num2(n2) {}

	void ShowData() {
		cout << num1 << ", " << num2 << endl;
	}

	First& operator=(const First& ref)
	{
		cout << "First& operator=()" << endl;
		num1 = ref.num1;
		num2 = ref.num2;
		return *this;
	}

private:
	int num1, num2;

};

class Second : public First
{
public:	
	Second(int n1=0, int n2=0, int n3=0, int n4=0) : First(n1, n2), num3(n3), num4(n4) {}

	void ShowData()
	{
		First::ShowData();
		cout << num3 << "," << num4 << endl;
	}

	//대입 연산자 : 컴파일러가 기본으로 생성
	//Second& operator=(const Second& ref)
	//{
	//	cout << "Second& operator=()" << endl;
	//	First::operator=(ref);
	//	num3 = ref.num3;
	//	num4 = ref.num4;
	//	return *this;
	//}

private:
	int num3, num4;
};


class Third
{
public:
	Third() : num1(0), num2(0), num3(0), num4(0) {}

private:
	int num1, num2, num3, num4;
};


int main()
{
	First first(33, 33);
	first.ShowData();
	Second second1(10, 20);
	Second second2(15, 25, 35, 45);
	second1.ShowData();

	first = second1;

	first.ShowData();

	second1 = second2;

	second1.ShowData();

	return 0;
}