#include <stdio.h>
#include <math.h>
//�Լ�: � ���� ó���ϴ� ������ �ڵ���� ����
/*�Լ����: 1.�Լ�����
            2. �Լ�ȣ��
			 3. �Լ�����(�ɼ�)*/

void funcA(); /* 3. �Լ����� : �����Ϸ����� �Լ��� ����(����)�� �˸���. 
�̸� �����ϸ� �����Ϸ��� ��� ���ڸ� int�� �����Ѵ�.*/
void funcB(int salary);
int funcD();
//float funcE(int salary, float rate);

float funcE(int salary, float rate)
{
	//printf("funcE() %d, %f \n", salary, rate);
	printf("funcE() ���� : %f \n", salary * rate);
	return salary * rate;
}

int main()
{
	int salary = 3400000; //��������(�ڽ��� ����� �Լ������� ���)
	int ����;
	float tax;

	printf("main() start. \n");

	funcA(); //�Լ�ȣ��(���μ�)
	funcB(salary); //���μ�

	���� = funcD();

	printf("main() ����: %d \n", ����);

	tax = funcE(salary+����, 0.03);
	printf("�Ǽ��ɾ�: %f \n", (salary + ����)-tax);

	printf("10�� ������: %lf \n", sqrt(10.0));

	printf("main() end. \n");

	return 0;
}

void funcA() //�Լ� ���
{            //�Լ� �ٵ�
	printf("funcA() start. \n");
	return; //��� �θ��Լ��� ����
	printf("funcA() end. \n");
} 

//���μ��� ���μ��� ������ �ڷ����� ���ƾ� �Ѵ�.
void funcB(int salary) //���μ�
{
	printf("funcB() salary: %d \n", salary);
}

int funcD() //int �Լ�() -> �⺻
{
	int over_time=15;
	//printf("funcD() ���� : %d \n", over_time * 37000);
	return over_time * 37000;
}