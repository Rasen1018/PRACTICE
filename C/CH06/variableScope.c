#include <stdio.h>

int salary = 3500000; //��������

int main()
{
	int age = 23; //���������� �Լ� �� �������� �۵�, ���μ�&���μ��� �������� ��(�ּҰ� �ٸ�)
	printf("main() age: %d, %p / salary:%d, %p \n", age, &age, salary, &salary);
	funcA(age);
	printf("main() age: %d, %p / salary: % d, % p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age: %d, %p / salary: % d, % p \n", age, &age, salary, &salary);

	funcD();
	funcD();
	funcD();

	return 0;
}

funcD()
{
	int sum1 = 1;
	static int sum2 = 1; //��������
	printf("sum1: %d, sum = %d \n", sum1++, sum2++);
}

funcA(int age)
{
	printf("funcA() age: %d, %p / salary:%d, %p \n", age, &age, salary, &salary);
	age = 35;
	salary += 200000;
}

funcB()
{
	int age = 23;
	int salary = 100000;

	printf("funcB() age: %d, %p / salary:%d, %p \n", age, &age, salary, &salary);
	age = 40;
	salary += 4567;
}