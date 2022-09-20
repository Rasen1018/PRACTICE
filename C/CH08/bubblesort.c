#include <stdio.h>

int main()
{
	int num[5] = {59,-99, 4, -6, 7};
	int i, j, tmp;

	for (i = 0; i < 5; i++)
		printf("%d, ", num[i]);
	printf("\n");

	//bubble sorting
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (num[j] > num[j + 1]) // 오름차순
			//if (num[j] < num[j + 1]) // 내림차순
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	printf("\nsort result\n");
	for (i = 0; i < 5; i++)
		printf("%d, ", num[i]);
	printf("\n");


	return 0;
}