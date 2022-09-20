#include <iostream>

void foo(int& ref);

int main()
{
	int x = 10;
	foo(x);
	std::cout << "x= " << x << std::endl;

	return 0;
}

void foo(int &ref)
{
	ref++;
}