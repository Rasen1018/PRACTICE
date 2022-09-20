#include <stdio.h>

#define Arr_size 5
int main()
{
	//1. 배열은 상수로 선언한다.
	int a1[5];
	int a2[Arr_size];
	int n = 5; //컴파일에선 자료형만 파악, 실행시에 값을 배정
	//int a3[n];
	const int m = 5;
	//int a4[m];

	//2. 배열복사는 배열 변수명으로 복사할 수 없다.
	int x1[5] = { 1,2,3,4,5 };
	int x2[5];
	int i;

	//x2 = x1;

	for (i = 0; i < 5; i++)
	{
		x2[i] = x1[i]; //배열 변수명은 상수여서 한 번에 받을 수 없다.
		printf("%d, ", x2[i]);
	}
	printf("\n");

	//3. 배열초기화
	//int x3[5];
	int x3[5] = { 100,200 };
	//int x3[5] = { 100,200,300,400,500 };

	// int x[20][50] = {0}; -> 다차원 배열에서 0으로 이루어진 배열을 만들고 싶을 때, 초기화를 이용
	for (i = 0; i < 5; i++)
		printf("%d, ", x3[i]);
	printf("\n");

	//4. unsized 배열(배열이 선언과 동시에 초기화될 때 가능)
	int x4[] = { 100,200,300,400,500,600,700 };
	int x5[][3] = { 1,2,3,4,5,6 };

	for (i = 0; i < sizeof(x4) / sizeof(x4[0]); i++)
		printf("%d, ", x4[i]);
	printf("\n");

	printf("x4 sizeof: %d \n", sizeof(x4));





	return 0;
}