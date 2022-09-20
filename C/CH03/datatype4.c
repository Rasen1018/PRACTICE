#include <stdio.h>

int main()
{
	int x;
	float y;

	x = 100, y = 30.0;

	printf("%d \n", x / 30); // 정수끼리 나누기라 결과도 정수
	printf("%f \n", x / y); //묵시적 형변환
	printf("%f \n", (float)x / 30); //명시적 형변환
	//(자료형)변수 -> cast연산자(형변환연산자)

	typedef long long int llint;

	long long int n1 = 2700000000;
	printf("%lld \n", n1);

	llint n2 = 2800000000;
	printf("%lld \n", n2);

	return 0;
}