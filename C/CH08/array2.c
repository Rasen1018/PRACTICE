#include <stdio.h>

#define Arr_size 5
int main()
{
	//1. �迭�� ����� �����Ѵ�.
	int a1[5];
	int a2[Arr_size];
	int n = 5; //�����Ͽ��� �ڷ����� �ľ�, ����ÿ� ���� ����
	//int a3[n];
	const int m = 5;
	//int a4[m];

	//2. �迭����� �迭 ���������� ������ �� ����.
	int x1[5] = { 1,2,3,4,5 };
	int x2[5];
	int i;

	//x2 = x1;

	for (i = 0; i < 5; i++)
	{
		x2[i] = x1[i]; //�迭 �������� ������� �� ���� ���� �� ����.
		printf("%d, ", x2[i]);
	}
	printf("\n");

	//3. �迭�ʱ�ȭ
	//int x3[5];
	int x3[5] = { 100,200 };
	//int x3[5] = { 100,200,300,400,500 };

	// int x[20][50] = {0}; -> ������ �迭���� 0���� �̷���� �迭�� ����� ���� ��, �ʱ�ȭ�� �̿�
	for (i = 0; i < 5; i++)
		printf("%d, ", x3[i]);
	printf("\n");

	//4. unsized �迭(�迭�� ����� ���ÿ� �ʱ�ȭ�� �� ����)
	int x4[] = { 100,200,300,400,500,600,700 };
	int x5[][3] = { 1,2,3,4,5,6 };

	for (i = 0; i < sizeof(x4) / sizeof(x4[0]); i++)
		printf("%d, ", x4[i]);
	printf("\n");

	printf("x4 sizeof: %d \n", sizeof(x4));





	return 0;
}