/*
	���� �޸� �Ҵ�
*/
#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "���� ����: ";
	cin >> size;

	int* arr = new int[size];

	cout << "������ �Է��Ͻÿ�.\n";

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	
	int sum = 0;
	
	for (int i = 0; i < size; i++)
		sum += arr[i];

	float ave = (float)sum / (float)size;

	cout << "��=" << sum << ", ��� =" << ave << endl;
}


