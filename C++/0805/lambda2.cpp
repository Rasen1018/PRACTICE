#include <iostream>

using namespace std;

int main()
{
	int i = 10;
	[=]() mutable {cout << "i : " << ++i << endl; }();
	  //외부 값 i를 받아오고
			// int x 만들기  // int 리턴 함수 
	cout << [i](int x)->int {return i + x; }(20) << endl;
	cout << ">> i : " << i << endl;

	return 0;
}

