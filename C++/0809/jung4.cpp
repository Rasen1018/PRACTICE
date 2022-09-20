// 사각형 순서대로(세로로 1234)
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	int flag = 0;
	do {
		if (flag == 1)
			printf("INPUT ERROR!\n");
		scanf("%d", &n);
		flag = 1;
	} while (1 > n || n > 100);

	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", i + j * n);
		}
			printf("\n");
	}

}
		