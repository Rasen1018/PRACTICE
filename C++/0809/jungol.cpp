// 备备窜
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int s, e;
	int flag = 0;
	do {
		if (flag == 1)
			printf("INPUT ERROR!\n");
		scanf("%d%d", &s, &e);
		flag = 1;
	} while (2 > s || 9 < s || 2 > e || 9 < e);

	int i, j;
	
	if (s < e)
	{
		for (j = 1; j < 10; j++)
		{
			for (i = s; i < e + 1; i++)
				printf("%d * %d = %2d   ", i, j, i * j);
			printf("\n");
		};
	}

	else
	{
		for (j = 1; j < 10; j++)
		{
			for (i = s; i > e - 1; i--)
				printf("%d * %d = %2d   ", i, j, i * j);
			printf("\n");
		};
	};






	return 0;
}



/*


“个公霸+100-虐”
Obesity


*/