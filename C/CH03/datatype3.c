#include <stdio.h>

int main()
{
	short int n1;     //%hd
	int n2;           //%d
	long int n3;      //%ld
	long long int n4; //%lld, 64 bit long int와 같음

	printf("%d, %d, %d, %d \n", sizeof(n1), sizeof(n2), 
		sizeof(n3), sizeof(n4));
	// 2,2,4 16bit OS환경 -- 2,4,4 32bit OS 환경 -- 2,4,8 64bit OS 환경

	signed char c1 = 'A'; //'signed'가 디폴트 -> 양수, 음수 저장 가능
	unsigned char c2 = 97; //양수만 표현 가능(양수 2배 저장 가능)
	printf("%d, %d \n", sizeof(c1), sizeof(c2));

	float f1 = 123456789123456789;
	double d1 = 123456789123456789; 
	// 실수는 숫자를 정확하게 표현하는 것이 아니라 근사치를 표현해서 오차가 발생함.
	// double이 더 정밀도가 높아 float보다 많이 사용 
	printf("f1: %lf \n", f1);
	printf("d1: %lf \n", d1);



	return 0; //생략가능
}