#include <stdio.h>

int main()
{
	char x, y;
	x = -128;
	y = -x;

	printf("%x\n", x);
	printf("%x\n", y);

	if (x == y)
		printf("1\n");

	if ((x - y) == 0)
		printf("2\n");

	if ((x + y) == 2 * x)
		printf("3\n");

	if (x != -y)
		printf("4");



	return 0;
}