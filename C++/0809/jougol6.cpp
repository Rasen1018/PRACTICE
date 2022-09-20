#include <iostream>
using namespace std;

int main()
{
	int n;
	int flag = 0;
	do {
		scanf("%d", &n);
		

	} while (0 > n || 100 < n);

	int i, j;
	int n2, n3;

	for (i = 1, n2=n*n; i <= n; i++) {
		for (j = 0; j < n; ++j) {
			if (j % 2 == 0)
				printf("%d ", i + j * n);
			else
				printf("%d ", (n2/(1+n-j)));
			//	printf("%d ", (j*n)-i+n+1);
		}
		printf("\n");
	}

	return 0;
}



//A H I P	1	8 	9	16
//B G J O	2	7 	10	15
//C F K N	3	6 	11	14	
//D E L M	4	5 	12	13