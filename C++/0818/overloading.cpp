#include <iostream>
using namespace std;
class Chulsoo {
	int age;
public:
	Chulsoo(int age) : age(age) {
		cout << "Chulsoo::chulsoo(age) ������ �Ϸ�" << endl;
	}

	void introduce()
	{
		cout << "ö���� ���̴� " << age << "�� �Դϴ�." << endl;
	}

Chulsoo operator+(const Chulsoo& chulsooObj);  																	
Chulsoo operator-(const Chulsoo& chulsooObj);															
Chulsoo operator*(const Chulsoo& chulsooObj);																		
Chulsoo operator/(const Chulsoo& chulsooObj);				
														
};

int main(void)
{
	Chulsoo chulsoo1(30);
	Chulsoo chulsoo2(15);
	chulsoo1.introduce();
	chulsoo2.introduce();

	Chulsoo ChulsooAdd = chulsoo1 + chulsoo2;
	ChulsooAdd.introduce();
	Chulsoo ChulsooSub = chulsoo1 - chulsoo2;
	ChulsooSub.introduce();
	Chulsoo ChulsooMul = chulsoo1 * chulsoo2;
	ChulsooMul.introduce();
	Chulsoo ChulsooDiv = chulsoo1 / chulsoo2;
	ChulsooDiv.introduce();

	return 0;
}

Chulsoo Chulsoo::operator+(const Chulsoo& chulsooObj) {
	cout << "Chulsoo::operator+()" << endl;
	Chulsoo chulsoo(this->age + chulsooObj.age);
	return chulsoo;
}

Chulsoo Chulsoo::operator-(const Chulsoo& chulsooObj) {
	cout << "Chulsoo::operator-()" << endl;
	Chulsoo chulsoo(this->age - chulsooObj.age);
	return chulsoo;
}

Chulsoo Chulsoo::operator*(const Chulsoo& chulsooObj) {
	cout << "Chulsoo::operator*()" << endl;
	Chulsoo chulsoo(this->age * chulsooObj.age);
	return chulsoo;
}

Chulsoo Chulsoo::operator/(const Chulsoo& chulsooObj) {
	cout << "Chulsoo::operator/()" << endl;
	Chulsoo chulsoo(this->age / chulsooObj.age);
	return chulsoo;
}
