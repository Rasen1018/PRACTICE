#include <iostream>
#include <exception>
using namespace std;

void MyErrorHandler()
{
	cout << "ó������ ���� ���ܰ� �߻��߽��ϴ�." << endl;
	exit(-1);
}

int main(void)
{
	set_terminate(MyErrorHandler);
	try {
		throw 1;
	}
	catch (char* const ex) {
		// �� catch���� ������ ���ܸ� ó���� �� ����.
	}
	return 0;
}