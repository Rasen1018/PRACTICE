#include <stdio.h>
#include <stdlib.h> //exit(1)�� ���� ��ó����
//���: ��������, �ݺ�����, ��Ÿ����
//��������: if, switch
//�ݺ�����: for, while, do..while
//��Ÿ����: break, continue, goto


int main()
{
	int score;

	printf("������ �Է��ϼ���. ");
	scanf("%d", &score);

	if (score > 100 || score < 0)
	{
		printf("������ �ٽ� �Է��ϼ���. ");
		exit(1);
	}
		
	if (score >= 90)
		printf("A����\n");
	else if (score >= 80)
		printf("B����\n");
	else if (score >= 70)
		printf("C����\n");
	else if (score >= 60)
		printf("D����\n");
	else
		printf("Fail");



	return 0;
}