// 사각형 만들기
#include <iostream>
#include <cstdio>

int main()
{
	unsigned int n, m;
	
	do {
		scanf("%d%d", &n, &m);
	} while (n > 100 || 100 < m);

	int i, j;
	int num = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", num++);
		}
		printf("\n");
	}


	return 0;
}