/*
	동적 메모리 할당
*/
#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "정수 개수: ";
	cin >> size;

	int* arr = new int[size];

	cout << "정수를 입력하시오.\n";

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	
	int sum = 0;
	
	for (int i = 0; i < size; i++)
		sum += arr[i];

	float ave = (float)sum / (float)size;

	cout << "합=" << sum << ", 평균 =" << ave << endl;
}


