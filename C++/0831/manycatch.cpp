#include <iostream>
using namespace std;

void inputName(char* name) {
	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	if (strlen(name) <= 2||!(strcmp(name, "������")))
		throw name;
}

int inputAge() {
	int age;
	cout << "���̸� �Է��ϼ���: ";
	cin >> age;
	if (age < 1||120<age)
		throw age;
	return age;
}

int main()
{
	char name[512];
	int age;

	try {
		inputName(name);
		age = inputAge();

		cout << "���� �̸��� " << name << "�Դϴ�." << endl;
		cout << "���� ���̴� " << age << "�Դϴ�." << endl;
	}

	catch (int e) {
		cout << "�߸��� ���� �Է�: " << e << endl;
	}

	catch (char* e) {
		cout << "�߸��� �̸� �Է�: " << e << endl;
	}
}