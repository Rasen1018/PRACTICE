#include <stdio.h>

int main()
{
	int num;

	printf("input number ?");
	scanf("%d", &num);
	if (num >= 0)
		printf("positive \n");
	printf("quit...\n");
	main2();
	main3();
}


main1()
{
	int num;
	printf("정수를 입력하시오. ");
	scanf("%d", &num);
	if (num >= 0)
		printf("positive \n");
	else
		printf("negative \n");
	printf("quit...\n");
}

main2()
{
	int num;
	printf("정수를 입력하시오. ");
	scanf("%d", &num);
	if (num >= 0)
		printf("positive \n");
	else
		printf("negative \n");
	printf("quit...\n");

	return 0;
}

main3()
{
	int num;
	printf("숫자를 입력하시오. ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("짝수: %d \n", num);
		printf("정사각형 넓이: %d \n", num * num);
	}		
	else
	{
		printf("홀수: %d \n", num);
		printf("정사각형 둘레: %d \n", 4 * num);
	}

	return 0;

}

main4()
{
	int num;
	printf("점수를 입력해주세요. ");
	scanf("%d", &num);

	if (num >= 90)
		printf("A학점");
	else if (num >= 80)
		printf("B학점");
	else if (num >= 70)
		printf("C학점");
	else
		printf("노력하세요!");

	return 0;

}
