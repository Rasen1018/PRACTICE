#include <iostream>

using namespace std;

int main()
{
	int i = 10;
	[=]()mutable {cout << "i= " << ++i << endl; }(); //람다 내에 변수를 변화시킬때 ()mutable 사용
	cout << ">> i : " << i << endl;
	return 0;
}