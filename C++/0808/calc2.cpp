#include <iostream>
// 함수(레퍼런스) 활용
using namespace std;

void add(int n, int n2, int* sum);
void sub(int n, int n2, int* sub);
void mul(int n, int n2, int* mul);
void div(int n, int n2, double* div);

int main()
{
	int n, n2;
	int sum, sub1, mul1;
	double div1;
	char sign, equal;
	do {
		cin >> n >> sign >> n2 >> equal;

		if (sign == '+')
			add(n, n2, &sum);

		else if (sign == '-')
			sub(n, n2, &sub1);

		else if (sign == '*')
			mul(n, n2, &mul1);

		else if (sign == '/')
			div(n, n2, &div1);

	} while (n2 == 0 && sign == '/');

	return 0;
}

void add(int n, int n2, int* sum)
{
	*sum = n + n2;
	cout << n << " + " << n2 << " = " << *sum << endl;
}

void sub(int n, int n2, int *sub)
{
	*sub = n - n2;
	cout << n << " - " << n2 << " = " << *sub << endl;
}

void mul(int n, int n2, int *mul)
{
	*mul = n * n2;
	cout << n << " * " << n2 << " = " << *mul << endl;
}

void div(int n, int n2, double *div)
{
	*div = (float)n / (float)n2;
	printf("%d / %d = %.2lf\n", n, n2, *div);
}