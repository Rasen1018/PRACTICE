#include <stdio.h>

int main()
{
	char ch, i;
	char in_char;

	printf("input char?");
	in_char = getchar();
	
	for (i = 1; i <= 3; i++)
	{
		ch = 'A';
		while (ch <= 90)
		{
			printf("%c ", ch);
			if (ch == in_char)
				//break;
				goto move; // 자신의 함수 내에서만 점프
			ch++;
		}
		printf("\n");
	}

move: //레이블명
	printf("End \n");

	return 0;
}