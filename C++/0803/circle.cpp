#include <iostream>
using namespace std;

int main()
{
	int r;
	float CArea, Cference;

	cout << "반지름 입력: ";
	cin >> r;
	CArea = r * r * 3.14;
	Cference = 2 * 3.14 * r;

	cout << "원 면적 : " << CArea << endl;
	cout << "원 둘레 : " << Cference << endl;





	return 0;
}