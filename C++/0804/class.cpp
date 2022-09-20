#include <iostream>
using namespace std;

class Chulsoo {
public: // 구조체와 차이점
	void Eat();
};

void Chulsoo::Eat() {
	cout << "수정은 먹는다" << endl;
}

int main(void)
{
	Chulsoo soojung;
	soojung.Eat();
	return 0;

}