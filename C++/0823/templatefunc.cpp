#include <iostream>
using namespace std;

template <typename R, typename T, typename U>
R const add(T const& a, U const& b) {
	return a + b;
}

#if 0
void ShowData(double num)
{
	cout << (T1)num << ", " << (T2num) << endl;
}

int main(void)
{
	ShowData<char, int>(65);
	ShowData<char, int>(67);
	ShowData<char, double>(68.9);
	ShowData<short, double>(69.2);
	ShowData<short, double>(70.4);
	return 0;

}

#else

int main() {
	double i = 5.1;
	int a = 5;
	cout << i << "+" << a << "=" << add<int, double, char>(i, a) << endl;

	return 0;
}

#endif