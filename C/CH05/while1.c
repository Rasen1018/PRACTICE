#include <stdio.h>

//while�� : �ݺ�Ƚ���� �� �� �ַ� ���
int main()
{
	char ch;

	ch = 'a';
	while (ch <= 90)
	{
		printf("%c", ch);
		ch++;
	} //���̸� �ݺ�
	printf("\n");

	ch = 'a';
	do {
		printf("%c", ch);
		ch++;
	} while (ch <= 90); //���̸� �ݺ�
	printf("\n");

	return 0;
}