#include <stdio.h>

int main()
{
	int x , y ;
	printf("x를 입력하세요. ");
	scanf("%d", &x); // 입력함수. 변수를 입력할 때는 주소을 알아야 한다. &변수
	printf("y를 입력하세요. ");
	scanf("%d", &y);

	printf("%d + %d = %d \n", x, y, x + y);
	printf("%d - %d = %d \n", x, y, x - y);
	printf("%d * %d = %d \n", x, y, x * y);
	printf("%d / %d = %d \n", x, y, x / y);
	printf("%d %% %d = %d \n", x, y, x % y);
	return 0;

}