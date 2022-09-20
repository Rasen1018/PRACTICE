#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "두 개의 숫자 입력: " << endl;
	cin >> a >> b;

	try
	{
		if (b == 0) //b가 0이면 
			throw b; //b를 던짐
		cout << "나눗셈의 몫: " << a / b << endl;
		cout << "나눗셈의 나머지: " << a % b << endl;
	}
	catch (int expn) // 던진 b는 catch에서 받음. int expn = b 대입
	{
		cout << "제수는 " << expn << "이 될 수 없습니다." << endl;
		cout << "프로그램을 다시 실행하세요." << endl;
	}
	cout << "end of main" << endl;

	return 0;
}