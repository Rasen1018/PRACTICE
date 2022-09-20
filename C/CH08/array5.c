#include <stdio.h>

int main()
{
	int num[3][4] = { 1,2,3,4,5,6,7,8,9,10,12,14 }; //정수 데이터는 4 bytes -> (x,y) 4byte * 12 -> 48 bytes
	int i, j;

	printf("%d, %d, %d \n", sizeof(num), sizeof(num[0][0]), sizeof(num[0])); //행렬의 크기, [0,0]의 크기
	printf("%p, %p, %p \n", num[0], num[1], num[2]); //첨자 하나는 행의 주소

	printf("%d, %p, %p \n", num[0][0], &num[0][0], num); //[0,0]의 값, [0,0]의 주소, 행렬의 주소

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%p: %3d,  ", &num[i][j], num[i][j]);
		printf("\n");
	}

	return 0;
}