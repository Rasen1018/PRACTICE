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
	printf("������ �Է��Ͻÿ�. ");
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
	printf("������ �Է��Ͻÿ�. ");
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
	printf("���ڸ� �Է��Ͻÿ�. ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("¦��: %d \n", num);
		printf("���簢�� ����: %d \n", num * num);
	}		
	else
	{
		printf("Ȧ��: %d \n", num);
		printf("���簢�� �ѷ�: %d \n", 4 * num);
	}

	return 0;

}

main4()
{
	int num;
	printf("������ �Է����ּ���. ");
	scanf("%d", &num);

	if (num >= 90)
		printf("A����");
	else if (num >= 80)
		printf("B����");
	else if (num >= 70)
		printf("C����");
	else
		printf("����ϼ���!");

	return 0;

}
