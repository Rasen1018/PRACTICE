#include <iostream>

using namespace std;

int main()
{
	int i = 10;
	[=]()mutable {cout << "i= " << ++i << endl; }(); //���� ���� ������ ��ȭ��ų�� ()mutable ���
	cout << ">> i : " << i << endl;
	return 0;
}