#include <stdio.h>

int main()
{
	char c1, c2;

	printf("한글자만 입력하세요? ");
	c1 = getchar();
	printf("c1: %c\n", c1);

	//getchar(); //입력 함수 쓸 때 enter 버려주기
	while(getchar() != '\n');

	printf("한글자만 입력하세요? ");
	c2 = getchar();
	printf("c2: %c\n", c2);
	
	return 0;
}