#include <iostream>

using namespace std;
void swap(int* px, int* py);

int main()
{
	int x = 40, * px;
	int y = 50, * py;

	px = &x;
	py = &y;

	cout << x << "," << y << endl;

	swap(px, py);

	cout << x << "," << y << endl;

	return 0;
}

void swap(int *px, int *py)
{
	int tmp=0;
	tmp = *px;
	*px = *py;
	*py = tmp;

}