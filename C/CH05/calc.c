#include <stdio.h>
#include <ctype.h>

int main()
{
	int num1,num2;
	char op;
	while (1)
	{
		do {
			printf("더하기(a), 빼기(s), 곱하기(m), 나누기(d), 종료(q) \n");
			printf("연산할 첫 문자를 입력하세요 ? ");
			op = toupper(getchar());   // A[enter]
			getchar();
			printf("\n");
		} while (op != 'A' && op != 'S' && op != 'M' && op != 'D' && op != 'Q');

		if (op == 'Q')
			break;

		printf("첫 번째 값 : ");
		scanf("%d", &num1);  //100

		printf("두 번째 값 : ");
		scanf("%d%*c", &num2);    //30, 엔터를 버리는 것은 좋은 습관

		if (op == 'A')
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
		else if (op == 'S')
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
		else if (op == 'D')
		{
			if (num2 != 0)
				printf("%d / %d = %d \n", num1, num2, num1 / num2);
			/*else
				printf("0으로 나눌 수 없습니다.\n");*/
		}
		else if (op == 'M')
			printf("%d * %d = %d \n", num1, num2, num1 * num2);

		/*printf("\n 계속할까요? (Y/N)");
		scanf(" %c%*c", &op);
		if (op == 'Y' || op == 'y')
			continue;
		else
			break;*/
	}

	printf("End. \n");

	return 0 ;
}
