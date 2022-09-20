#include <iostream>
using namespace std;

int main()
{
	int value = 100;
	int* pointerValue = &value;

	cout << value << endl;           // 100
	cout << &value << endl;          // 005BFEA0 (Value의 주소)
	cout << pointerValue << endl;    // 005BFEA0 (pValue의 값)
	cout << *pointerValue << endl;   // 100      (pValue가 담고 있는 주소의 값)
	cout << &pointerValue << endl;   // 005BFE94 (pValue의 주소)

	int** ppValue = &pointerValue;

	cout << "\n" << ppValue << endl; // 005BFE94 (pValue의 주소)
	cout << *ppValue << endl;        // 005BFEA0 (ppValue가 담고 있는 주소의 값)
	cout << &ppValue << endl;        // 005BFE88 (ppValue의 주소)


	return 0;
}