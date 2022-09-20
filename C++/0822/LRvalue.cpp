#include <iostream>

int Add(int x, int y) {
	return x + y;
}

int& inc(int& x) {
	return ++x;
}

int print(int& x) {
	std::cout << "print (int&x)";
	return x;
}

int print(const int& x) {
	std::cout << "print (const int &x)" << std::endl;
	return x;
}

int print(int&& x) {
	std::cout << "print (int &&x))" << std::endl;
	return x;
}

int main()
{
	//int x = 5;
	//int y = x * 5;
	//++x = 7;

	//int&& r1 = 10;
	//int&& r2 = Add(1, 2);
	//int x = 1;
	//int&& r3 = x;
	//int& ref = x;
	//const int& ref2 = 3;

	const int& x = 3;
	print(x);
	print(3);
}