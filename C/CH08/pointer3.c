#include <stdio.h>

int main()
{
	int num[5] = { 100, 200, 300, 400, 500 };
	int i, *ptr;

	ptr = num;

	for (i = 0; i < 5; i++)                              //괄호 필수!!
		printf("%p: %d, %d, %d, %d \n", &num[i], num[i], *(ptr + i), *(num+i), ptr[i]);
	printf("\n");

	char msg[20] = "Hello World.";
	char* p2;

	p2 = msg;
	printf("%c, %c, %c, %,c \n", msg[0], *msg, *(msg + 1), *p2); //데이터 값
	printf("%p, %s, %s \n", msg, msg, p2); //데이터 주소

	//p2를 사용하여 H e l l o W o r l d . 를 출력하시오.

	for (i = 0; i < sizeof(msg); i++)
		if (*(msg + i) != 0)
			printf("%c ", *(msg + i));
		else
			break;

	printf("\n");

	while (*p2)
	{
		printf("%c ", *p2);
		p2++;
	}
	printf("\n");
	
	char* p3 = "multi campus !!!";
	//p3 = "multi campus !!!"; //문자열 상수 포인터를 반환
	printf("p3: %p, %s \n", p3, p3);







	return 0;
}