#include <stdio.h>

//Pointer: 실행중인 프로세스의 임의의 주소

int main()
{
	double d;   //변수(값을 저장)
	double *dp; //포인터 변수(메모리 주소 저장) -> 내가 가르킬 데이터의 자료형을 따라감
	char* ptr;
	int* ky;
	long long int* sob;

	d = 1.5; //직접참조
	printf("%lf, %p \n", d, &d);
	
	dp = &d; //간접참조 -> 포인트 연산자(*dp): 내가 참조한(가지고 있는 주소)의 데이터 값을 볼때 사용
	printf("%lf, %p \n", *dp, dp);

	ptr = &d;
	printf("%p \n", ptr);
	printf("%lf \n", *ptr);

	printf("%d, %d, %d, %d \n", sizeof(ky), sizeof(dp), sizeof(ptr), sizeof(sob));





	return 0;
}