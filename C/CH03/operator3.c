#include <stdio.h>

int main()
{
	int x;
	printf("성별을 알려주세요. (0:남자, 1:여자) ");
	scanf("%d", &x);

	printf("%s \n", x==0 ? "남자" : x==1 ? "여자" : "ERRORㄸ&(*&(ERROR(&$(@*@ERROR");

	int n1 = 100, n2 = 200;
	int sum = 0;

	sum += n1;
	sum += n2;
	printf("sum : %d", sum);

	return 0;
}