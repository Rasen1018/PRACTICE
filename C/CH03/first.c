#include <stdio.h> //헤더파일(입,출력과 관련된 함수 정보를 제공)
//#: 전처리문

//함수의 집합
funcA() //호출될 때 실행
{
	printf("funcA() start. \n");
	printf("funcA() end.\n");
}

int main() //main(): 자동으로 실행하는 진입점 함수
{
	printf("main() start. \n"); //출력함수
	funcA(); //함수호출
    printf("main() end. \n");

	return 0;
}

