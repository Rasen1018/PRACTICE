#include <stdio.h>

int main()
{
	int x , y ;
	printf("x�� �Է��ϼ���. ");
	scanf("%d", &x); // �Է��Լ�. ������ �Է��� ���� �ּ��� �˾ƾ� �Ѵ�. &����
	printf("y�� �Է��ϼ���. ");
	scanf("%d", &y);

	printf("%d + %d = %d \n", x, y, x + y);
	printf("%d - %d = %d \n", x, y, x - y);
	printf("%d * %d = %d \n", x, y, x * y);
	printf("%d / %d = %d \n", x, y, x / y);
	printf("%d %% %d = %d \n", x, y, x % y);
	return 0;

}