#include <stdio.h>
#define PI 3.14159

//Ű����κ��� �������� �Է¹޾�(main())
// ���� ����(area()), ���� �ѷ�(cir())�� ���Ͽ� ����ϱ�
//������
//������ 7
//���� ����
//���� �ѷ�

double Area(int radius);
double Cir(int radius);

int main()
{
	//1. �޸� �Ҵ�(���� ����)
	int radius;
	double area, cir;

	//2. ������ �Է�
	printf("�������� �Է��Ͻÿ�.\n");
	scanf("%d", &radius);

	//3. ó��(����, �ѷ� ���)
	area=Area(radius);
	cir=Cir(radius);

	//4. ���
	printf("���� ���� : %lf\n", area);
	printf("���� �ѷ� : %lf\n", cir);

	printf("End");

	return 0;
}

double Area(int radius)
{
	return radius * radius * PI; 
}

double Cir(int radius)
{
	return 2 * radius * PI;
}
