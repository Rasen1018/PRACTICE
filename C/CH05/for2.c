#include <stdio.h>

int main()
{
	// 1.�޸� �Ҵ�(��������)
	int i, sum = 0;
	int start, end, tmp;

	// 2. ������ �Է�
	printf("ó�� ����\n");
	scanf("%d", &start);
	printf("�� ����\n");
	scanf("%d", &end);

	// 3. ���μ��� ó��(����)

	if (start > end) // ��ȯ �˰���
	{
		tmp = start;
		start = end;
		end = tmp;
	}
	for (i = start; i <= end; i++)
	{
		sum += i;
		if (sum > 3000)
			break;
	}

	//if (start > end)
	//{
	//	for (i = end; i <= start; i++)
	//		sum += i;
	//}
	//else
	//{
	//	for (i = start; i <= end; i++)
	//		sum += i;
	//}

	// 4. ���
	if(sum<=3000) // if(i-1==end)
		printf("%d���� %d������ ���� %d�Դϴ�. \n", start, end, sum);
	else
		printf("%d���� %d������ ���� %d�Դϴ�. \n", start, i, sum);
	return 0;
}