#include <iostream>
using namespace std;

int getSize()
{
	return 200;
}

int main()
{
	const int size = 100;
	const int bufferSize = getSize();
	//size = 200; // 이미 상수화된 변수라 다시 정수 X
	const int count=50; // 상수화는 초기화 필수

	return 0;
}


