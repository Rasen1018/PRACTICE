#include <stdio.h>

//Pointer: �������� ���μ����� ������ �ּ�

int main()
{
	double d;   //����(���� ����)
	double *dp; //������ ����(�޸� �ּ� ����) -> ���� ����ų �������� �ڷ����� ����
	char* ptr;
	int* ky;
	long long int* sob;

	d = 1.5; //��������
	printf("%lf, %p \n", d, &d);
	
	dp = &d; //�������� -> ����Ʈ ������(*dp): ���� ������(������ �ִ� �ּ�)�� ������ ���� ���� ���
	printf("%lf, %p \n", *dp, dp);

	ptr = &d;
	printf("%p \n", ptr);
	printf("%lf \n", *ptr);

	printf("%d, %d, %d, %d \n", sizeof(ky), sizeof(dp), sizeof(ptr), sizeof(sob));





	return 0;
}