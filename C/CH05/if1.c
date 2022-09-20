#include <stdio.h>
#include <stdlib.h> //exit(1)을 위한 전처리문
//제어문: 조건제어, 반복제어, 기타제어
//조건제어: if, switch
//반복제어: for, while, do..while
//기타제어: break, continue, goto


int main()
{
	int score;

	printf("점수를 입력하세요. ");
	scanf("%d", &score);

	if (score > 100 || score < 0)
	{
		printf("점수를 다시 입력하세요. ");
		exit(1);
	}
		
	if (score >= 90)
		printf("A학점\n");
	else if (score >= 80)
		printf("B학점\n");
	else if (score >= 70)
		printf("C학점\n");
	else if (score >= 60)
		printf("D학점\n");
	else
		printf("Fail");



	return 0;
}