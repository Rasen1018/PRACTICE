#include <iostream>
using namespace std;

int getSize()
{
	return 200;
}

int main()
{
	const int size = 100;
	const int bufferSize = getSize();
	//size = 200; // �̹� ���ȭ�� ������ �ٽ� ���� X
	const int count=50; // ���ȭ�� �ʱ�ȭ �ʼ�

	return 0;
}


