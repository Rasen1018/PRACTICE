#include <iostream>
using namespace std;

int main()
{
	double d, d2, d3;
	scanf("%lf%lf%lf", &d, &d2, &d3);
	int sum = (int)d + (int)d2 + (int)d3;
	int avg = (d + d2 + d3)/3;
	printf("Че: %d\n", sum);
	printf("ЦђБе: %d\n", avg);


	return 0;
}

//70.5 95.5 68.5