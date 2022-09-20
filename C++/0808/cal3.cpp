#include <iostream>
// ����ü �̿�
using namespace std;

typedef struct CALC{            //���� ����ó�� ���
	float n, n2, result;

} calType;

void add(calType* calc);
void sub(calType* calc);
void mul(calType* calc);
void div(calType* calc);


int main()
{
	calType calc; // ���� �������� �ʾƵ� ��, �տ� �̸��� �� �� struct CALC calc;
	char sign, equal;

	do {
		cin >> calc.n >> sign >> calc.n2 >> equal;
	} while (calc.n2 == 0 && sign == '/');

		if (sign == '+')
			add(&calc);

		else if (sign == '-')
			sub(&calc);

		else if (sign == '*')
			mul(&calc);

		else if (sign == '/')
			div(&calc);

		printf("%.02f %c %.02f = %.02f\n", calc.n, sign, calc.n2, calc.result);



	return 0;
}

void add(calType *calc)
{
	calc->result = calc->n + calc->n2;
}

void sub(calType* calc)
{
	calc->result = calc->n - calc->n2;
}

void mul(calType* calc)
{
	calc->result = calc->n * calc->n2;
}

void div(calType* calc)
{
	calc->result = calc->n / calc->n2;
}