#include <stdio.h>
#define SIZE 10

//�迭(Array): �ϳ��� �̸����� �����Ǵ� ���� �ڷ����� ���� �ڵ���� ����(�������� �޸� ����)
int main()
{
	int num[SIZE + 4] = { 0 }; //�迭����
	int cn;
	int i; /*sum = 0, max, min;
	float avg;*/

	for (i = 0; i < SIZE; i++)
	{
	printf("%d: ���� �Է��ϼ���.(�Է�����:0)", i+1);
	scanf("%d", &num[i]);

	if (num[i] == 0)
		break;
	num[SIZE] += num[i];

	}
	
	cn = i;

	num[SIZE + 1] = num[SIZE] / cn;

	//for (i = 0; i < cn; i++)
	//	num[SIZE] += num[i];


	num[SIZE+2] = num[SIZE+3] = num[0];
	for (i = 1; i < cn; i++)
	{
		if (num[SIZE + 2] < num[i]) //�ִ�
			num[SIZE + 2] = num[i];

		if (num[SIZE + 3] > num[i]) //�ּڰ�
			num[SIZE + 3] = num[i];
	}

	for (i = 0; i < cn; i++)
		printf("%d, ", num[i]);
	printf("\n");

	printf("��: %d, ���: %d \n", num[SIZE], num[SIZE + 1]);
	printf("max: %d, min: %d \n", num[SIZE + 2], num[SIZE + 3]);

	return 0;
}