#include <iostream>
// 구조체 이용
using namespace std;

typedef struct CALC{            //전역 변수처럼 사용
	float n, n2, result;

} calType;

void add(calType* calc);
void sub(calType* calc);
void mul(calType* calc);
void div(calType* calc);


int main()
{
	calType calc; // 값을 선언하지 않아도 됨, 앞에 이름을 쓸 땐 struct CALC calc;
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