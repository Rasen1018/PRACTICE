#include <iostream>
#include <exception>
using namespace std;


class MyException : public exception {
	int myValue;
public:
	MyException(int value) {
		myValue = value;
	}

	virtual const char* what() const throw() {
		if (myValue < 10)
			return "10�̻��� ���� �Է��ϼ���";
		else if (myValue > 500)
			return "500������ ���� �Է��ϼ���";
		else if (myValue % 7 != 0)
			return "7�� ��� ���� �Է��ϼ���";
		return "�߸��� ���� ����";
	}
};

int getMultiple() {
	int value;
	cout << "10�� 500������ 7�� ����� �Է��ϼ���: ";
	cin >> value;
	if (value < 10 || value>500 || value % 7 != 0)
		throw MyException(value);
	return value;
}

int getValue() {
	int value;
	value = getMultiple();
	return value;
}

int main()
{
	int value;

	while (1) {
		try {

			value = getValue();
			cout << "����!! 10�� 500������ 7�� ����� " << value << "�Դϴ�." << endl;
		}


		catch (MyException& e)
		{
			cout << e.what() << endl;
		}
	}

	return 0;
}