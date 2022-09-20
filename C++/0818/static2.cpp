#include <iostream>
using namespace std;

class Chulsoo {
	int age;
	static int chulsooPrivateCounter;
protected:
	static int chulsooProtectedCounter;
public:
	static int chulsooPublicCounter;
	Chulsoo(int age) : age(age) {
		chulsooPrivateCounter++;
		chulsooProtectedCounter++;
		chulsooPublicCounter++;

		cout << "Chulsoo::Chulsoo(age) �����ڷ� ��������� " << chulsooPrivateCounter <<
			"(Private) ��° ��ü ���� �Ϸ�" << endl;
		cout << "Chulsoo::Chulsoo(age) �����ڷ� ��������� " << chulsooProtectedCounter <<
			"(Protected) ��° ��ü ���� �Ϸ�" << endl;
		cout << "Chulsoo::Chulsoo(age) �����ڷ� ��������� " << chulsooPublicCounter <<
			"(Public) ��° ��ü ���� �Ϸ�" << endl;
	}
};

int Chulsoo::chulsooPrivateCounter = 0;
int Chulsoo::chulsooProtectedCounter = 0;
int Chulsoo::chulsooPublicCounter = 0;

class Younghee {
	int age=0;
public:
	Younghee(int age) : age(age) {
		//Chulsoo::chulsooPrivateCounter++;
		//Chulsoo::chulsooProtectedCounter++;
		Chulsoo::chulsooPublicCounter++;
		cout << "Younghee::Younghee(age �����ڷ� ��������� " << Chulsoo::chulsooPublicCounter <<
			"��° ��ü ���� �Ϸ�" << endl;
	}
};

int main(void)
{
	Chulsoo chulsoo1(32);
	Chulsoo chulsoo2(32);
	Younghee younghee1(32);
	Younghee younghee2(30);

	return 0;
}