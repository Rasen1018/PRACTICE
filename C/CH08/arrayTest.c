#include <stdio.h>
#define SIZE 10

//배열(Array): 하나의 이름으로 참조되는 같은 자료형을 갖는 코드들의 집합(연속적인 메모리 공간)
int main()
{
	int num[SIZE + 4] = { 0 }; //배열변수
	int cn;
	int i; /*sum = 0, max, min;
	float avg;*/

	for (i = 0; i < SIZE; i++)
	{
	printf("%d: 숫자 입력하세요.(입력종료:0)", i+1);
	scanf("%d", &num[i]);

	if (num[i] == 0)
		break;
	num[SIZE] += num[i];

	}
	
	cn = i;

	num[SIZE + 1] = num[SIZE] / cn;

	//for (i = 0; i < cn; i++)
	//	num[SIZE] += num[i];


	num[SIZE+2] = num[SIZE+3] = num[0];
	for (i = 1; i < cn; i++)
	{
		if (num[SIZE + 2] < num[i]) //최댓값
			num[SIZE + 2] = num[i];

		if (num[SIZE + 3] > num[i]) //최솟값
			num[SIZE + 3] = num[i];
	}

	for (i = 0; i < cn; i++)
		printf("%d, ", num[i]);
	printf("\n");

	printf("합: %d, 평균: %d \n", num[SIZE], num[SIZE + 1]);
	printf("max: %d, min: %d \n", num[SIZE + 2], num[SIZE + 3]);

	return 0;
}