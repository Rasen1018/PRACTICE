#include <iostream>
using namespace std;

class Chulsoo {
public: // ����ü�� ������
	void Eat();
};

void Chulsoo::Eat() {
	cout << "������ �Դ´�" << endl;
}

int main(void)
{
	Chulsoo soojung;
	soojung.Eat();
	return 0;

}