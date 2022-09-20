#include <iostream>
// °´Ã¼ È°¿ë
using namespace std;

class CALC { 
private:
	float n, n2;
	char sign;
public:
	CALC(float n = 0, char sign = '+', float n2=0) : n(n), sign(sign), n2(n2) {}
	
	void calculate()
	{
		float result;

		if (sign == '+')
			result = n + n2;

		else if (sign == '-')
			result = n - n2;

		else if (sign == '*')
			result = n * n2;

		else if (sign == '/')
			result = n / n2;

		printf("%.02f %c %.02f = %.02f\n", n, sign, n2, result);
	}
};


int main()
{
	float n, n2;
	char sign, equal;
	do {
		cin >> n >> sign >> n2 >> equal;
	} while (n2 == 0 && sign == '/');

	CALC c(n, sign, n2);
	c.calculate();

	return 0;
}

