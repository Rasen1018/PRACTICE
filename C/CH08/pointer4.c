#include <stdio.h>

//void swap(int* x, int* y);
int* swap(int* x, int* y);

int main()
{
	int x = 100, y = 200;
	int* sal;

	printf("before x: %d, y: %d \n", x, y);
	//swap(x, y); //call by value
	sal = swap(&x, &y); //call by reference
	printf("after x: %d, y: %d \n", x, y);

	printf("salary: %d \n", *sal);

	return 0;
}

int *swap(int *x, int *y)
{
	int tp;
	static int salary = 3700000; //정적변수

	tp = *x;
	*x = *y;
	*y = tp;

	return &salary;
}