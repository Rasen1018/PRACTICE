#include <stdio.h>
#include <ctype.h>

int main()
{
	int num1,num2;
	char op;
	while (1)
	{
		do {
			printf("���ϱ�(a), ����(s), ���ϱ�(m), ������(d), ����(q) \n");
			printf("������ ù ���ڸ� �Է��ϼ��� ? ");
			op = toupper(getchar());   // A[enter]
			getchar();
			printf("\n");
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q');

		if (op == 'Q')
			break;

		printf("ù ��° �� : ");
		scanf("%d", &num1);  //100

		printf("�� ��° �� : ");
		scanf("%d%*c", &num2);    //30, ���͸� ������ ���� ���� ����

		if (op == 'A')
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
		else if (op == 'S')
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
		else if (op == 'D')
		{
			if (num2 != 0)
				printf("%d / %d = %d \n", num1, num2, num1 / num2);
			/*else
				printf("0���� ���� �� �����ϴ�.\n");*/
		}
		else if (op == 'M')
			printf("%d * %d = %d \n", num1, num2, num1 * num2);

		/*printf("\n ����ұ��? (Y/N)");
		scanf(" %c%*c", &op);
		if (op == 'Y' || op == 'y')
			continue;
		else
			break;*/
	}

	printf("End. \n");

	return 0 ;
}
