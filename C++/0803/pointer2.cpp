#include <iostream>
using namespace std;

int main()
{
	int value = 100;
	int* pointerValue = &value;

	cout << value << endl;           // 100
	cout << &value << endl;          // 005BFEA0 (Value�� �ּ�)
	cout << pointerValue << endl;    // 005BFEA0 (pValue�� ��)
	cout << *pointerValue << endl;   // 100      (pValue�� ��� �ִ� �ּ��� ��)
	cout << &pointerValue << endl;   // 005BFE94 (pValue�� �ּ�)

	int** ppValue = &pointerValue;

	cout << "\n" << ppValue << endl; // 005BFE94 (pValue�� �ּ�)
	cout << *ppValue << endl;        // 005BFEA0 (ppValue�� ��� �ִ� �ּ��� ��)
	cout << &ppValue << endl;        // 005BFE88 (ppValue�� �ּ�)


	return 0;
}