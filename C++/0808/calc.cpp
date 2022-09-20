#include <iostream>
// 단순 계산기
using namespace std;

void add(int n, int n2, int* sum);

int main()
{
	int n, n2;
	int sum, sub, mul;
	double div;
	char sign, equal;
	do {
		cin >> n >> sign >> n2 >> equal;

		if (sign == '+')
		{
			add(n, n2, &sum);
			cout << n << ' ' << sign << ' ' << n2 << " = " << sum << endl;
		}
		else if (sign == '-')
		{
			sub = n - n2;
			cout << n << ' ' << sign << ' ' << n2 << " = " << sub << endl;
		}
		else if (sign == '*')
		{
			mul = n * n2;
			cout << n << ' ' << sign << ' ' << n2 << " = " << mul << endl;
		}
		else if (sign == '/')
		{
				div = (float)n / (float)n2;
				printf("%d / %d = %.2lf\n", n, n2, div);
		}
	} while (n2==0 && sign=='/');

	return 0;
}

void add(int n, int n2, int* sum)
{
	*sum = n + n2;
}