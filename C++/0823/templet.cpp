#include <iostream>
using namespace std;

template <typename T>
T const add(T const& a, T const& b)
{
	return a + b;
}

int main()
{
	int i = 5;
	int j = 10;

	double a = 18.18;
	double b = 8.2;

	cout << add(i, j) << endl;
	cout << add(a, b) << endl;
}
