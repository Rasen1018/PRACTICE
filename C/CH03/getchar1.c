#include <stdio.h>

int main()
{
	char c1, c2;

	printf("�ѱ��ڸ� �Է��ϼ���? ");
	c1 = getchar();
	printf("c1: %c\n", c1);

	//getchar(); //�Է� �Լ� �� �� enter �����ֱ�
	while(getchar() != '\n');

	printf("�ѱ��ڸ� �Է��ϼ���? ");
	c2 = getchar();
	printf("c2: %c\n", c2);
	
	return 0;
}