#include <stdio.h>

int main()
{
	printf("%s \n", "Hello World");
	puts("Hello World"); //오로지 문자열만 출력

	putchar('A'); //한문자만 출력
	putchar(66); //ASCI 코드 66 = B 출력
	putchar('\n');
	
	return 0;
}