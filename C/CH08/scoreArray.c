#include <stdio.h>

int main()
{
	//char name[3][20];
	//int i;

	//for (i = 0; i < 3; i++)
	//{
	//	printf("input name? ");
	//	gets(name[i]); //행 주소 활용하여 이름 넣기

	//}

	//for (i = 0; i < 3; i++)
	//printf("name : %s \n", name[i]);

	int score[5][7] = {
		{56, 90, 49, 60}, {78, 66, 37, 80}, {80, 77, 88, 90},
		{80, 67, 55, 70}, {80, 57, 77, 99}
	}; // 중괄호 안에 중괄호

	int i, j;
	char stdNames[5][20] = { "강남","강북","강서","강동","중앙" };


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			score[i][4] += score[i][j];
		}
			score[i][5] = score[i][4] / 4;

	}

	for (i = 0; i < 5; i++)
	{
		int rank=1;
		for (j = 0; j < 5; j++)
		{
			if (score[i][5] < score[j][5])
				rank++;
		}
		score[i][6] = rank;
	}

	heading();

	for (i = 0; i < 5; i++)
	{
		printf(" %4s, ", stdNames[i]);
		for (j = 0; j < 7; j++)
			printf("%3d,  ", score[i][j]);
		printf("\n");
	}

	return 0;
}

heading()
{
	printf("===================================================\n");
	printf(" 성명  국어  영어  수학  과학  총점  평균  석차 \n");
	printf("===================================================\n");
}