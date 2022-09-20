// 문자 사각형
#include <iostream>
#include <cstdio>

int main()
{
	int n, n2;

	do {
		scanf("%d", &n);
	} while (1 > n || 100 < n);

	int i, j;
	//int c = 'P';

	for (i = 1, n2=n*n; i <= n; i++) {
		for (j = 0; j < n; j++) {
			printf("%c ", 'A'+(n2-(i + n * j))%26);
		}
		printf("\n");
	}
}