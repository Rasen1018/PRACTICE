#include <iostream>
using namespace std;

class Restuarant {
public:
	int Steak; // ������ũ ����
};

class Chulsoo {
public:
	//int Eat(int SteakNum=20000); //����Ʈ ���ڴ� �Լ��� ����ο��� ��ġ
	void Eat(int SteakWeight);
	inline void EatInline(int SteakWeight); // �ζ��� �Լ� ����
};

//int Chulsoo::Eat(int SteakNum) {
//	SteakNum = 10000;
//	cout << "ö���� �Դ´�" << endl;
//	return SteakNum;
//}

int main(void)
{
	Chulsoo chulsoo;
	chulsoo.Eat(500);
	chulsoo.EatInline(500); //�ζ��� �Լ� ȣ��

	/*Restuarant restaurant;
	restaurant.Steak = 20000;*/

	//cout << "ö���� " << chulsoo.Eat(restaurant.Steak) << "�� ¥�� ������ũ���Ծ��ٰ� �������� �ߴ�." << endl;
	//cout << "��������� ö���� " << restaurant.Steak << "�� ¥�� ������ũ���Ծ��ٰ� �������� �ߴ�." << endl;

	return 0;
}

void Chulsoo::Eat(int SteakWeight)
{
	cout << "Eat():: ö���� " << SteakWeight \
		<< "g¥�� ������ũ�� �Դ´�" << endl;
}

inline void Chulsoo::EatInline(int SteakWeight) // �ζ��� �Լ� ����
{
	cout << "EatInline() :: ö���� " << SteakWeight \
		<< "g¥�� ������ũ�� �Դ´�" << endl;
}