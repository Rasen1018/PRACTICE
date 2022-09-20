#include <iostream>

using namespace std;
enum Days {SUN, MON, TUE, WED, THU, FRI, SAT};

int main()
{
	int i;
	printf("input the date(0~6) : ");
	scanf_s("%d", &i);

	if (i == SUN || i == SAT)
		printf("Thanks God, it's holiday\n");
	else
		printf("Whoops, it's working day\n");

	return 0;
} //const, enum