#include <iostream>

using namespace std;

int main()
{
	int i = 10;
	[=]() mutable {cout << "i : " << ++i << endl; }();
	  //�ܺ� �� i�� �޾ƿ���
			// int x �����  // int ���� �Լ� 
	cout << [i](int x)->int {return i + x; }(20) << endl;
	cout << ">> i : " << i << endl;

	return 0;
}

