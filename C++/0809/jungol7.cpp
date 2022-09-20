#include <iostream>
using namespace std;

int main()
{
	int n;
	int arr[105][105] = { {0} };
	int num = 1;

	do {
		scanf("%d", &n);
	} while (0 > n || 100 < n);
	
	int i, j;
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			arr[i][j] = (i + j*n); 
			printf("%d ", arr[i][j]);
		} printf("\n");
	} 




	return 0;
}