#include <stdio.h>
#define EQ "============"    //��ũ�� ���
#define OMG "������ C ����"   //��ũ�� ���
#define SUM(x,y) x+y         //��ũ�� ���
//#���� �����ϴ� ������ ��ó�����̶� �Ѵ�(;�� X)

int main()
{
	printf("C ����� �ڷ���(DataType) \n");
	//������ �迭�� ������ �ڷ����� ũ�⸸ŭ �޸𸮸� �Ҵ�ް�,
	//�����Ϸ����� �ڷ����� �˸���.
	char ch; //char = 1byte
	int age = 23; //�ʱ�ȭ, int = 4byte
	double height = 175.1; //double = 8byte
	const float PI = 3.141592; //������ ���ȭ(�ݵ�� �ʱ�ȭ)

	printf("%s \n", EQ);
	printf("%s \n", OMG);
	ch = 'A';

	printf("������ �� : %c, %d, %lf, %f \n", ch, age, height, PI);
	printf("������ �ּ� : %p, %p ,%p, %p \n", &ch, &age, &height, &PI);

	age = 37;
	//PI = 1.5;
	printf("%c, %d, %lf, %f \n", ch, age, height, PI);

	//������ �޸� �Ҵ�ũ�� Ȯ��
	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d, %d \n", sizeof(ch), sizeof(age), sizeof(height));

	printf("%d \n", SUM(100, 200));
	printf("%s \n", EQ);

	return 0;
}