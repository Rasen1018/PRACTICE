#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "�� ���� ���� �Է�: " << endl;
	cin >> a >> b;

	try
	{
		if (b == 0) //b�� 0�̸� 
			throw b; //b�� ����
		cout << "�������� ��: " << a / b << endl;
		cout << "�������� ������: " << a % b << endl;
	}
	catch (int expn) // ���� b�� catch���� ����. int expn = b ����
	{
		cout << "������ " << expn << "�� �� �� �����ϴ�." << endl;
		cout << "���α׷��� �ٽ� �����ϼ���." << endl;
	}
	cout << "end of main" << endl;

	return 0;
}