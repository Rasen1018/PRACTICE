#include <stdio.h>

int main()
{
	short int n1;     //%hd
	int n2;           //%d
	long int n3;      //%ld
	long long int n4; //%lld, 64 bit long int�� ����

	printf("%d, %d, %d, %d \n", sizeof(n1), sizeof(n2), 
		sizeof(n3), sizeof(n4));
	// 2,2,4 16bit OSȯ�� -- 2,4,4 32bit OS ȯ�� -- 2,4,8 64bit OS ȯ��

	signed char c1 = 'A'; //'signed'�� ����Ʈ -> ���, ���� ���� ����
	unsigned char c2 = 97; //����� ǥ�� ����(��� 2�� ���� ����)
	printf("%d, %d \n", sizeof(c1), sizeof(c2));

	float f1 = 123456789123456789;
	double d1 = 123456789123456789; 
	// �Ǽ��� ���ڸ� ��Ȯ�ϰ� ǥ���ϴ� ���� �ƴ϶� �ٻ�ġ�� ǥ���ؼ� ������ �߻���.
	// double�� �� ���е��� ���� float���� ���� ��� 
	printf("f1: %lf \n", f1);
	printf("d1: %lf \n", d1);



	return 0; //��������
}