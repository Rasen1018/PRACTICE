//�簢�� �������
#include <iostream>
#include <cstdio>

int main()
{
	unsigned int n, m;

	do {
		scanf("%d%d", &n, &m);
	} while (n< 1 || n > 100 || m < 1 || 100 < m);

	int i, j;
	int num = 1;
	for (i = 1; i < n+1; i++)
	{
		
		for (j = 1; j < m+1; j++)
		{
			if (i % 2 != 0) //Ȧ����
				printf("%d ", j + m*(i-1));

			else //¦����
				printf("%d ", i*m-j+1);
		}
		printf("\n");
	}


	return 0;
}