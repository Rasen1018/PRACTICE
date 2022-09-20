#include <iostream>
using namespace std;

void swap();

int main()
{
	int x = 40, y = 50;
	int &refx=x, &refy=y; // int *px, *py;
						  // px = &x, py = &y;

	cout << refx << ',' << refy << endl;

	swap(refx, refy); // swap(px, py);

	cout << refx << ',' << refy << endl;

	return 0;
}

void swap(int &refx, int &refy) // swap(int *px, *py)
{
	int tmp=0;   
	tmp = refx;  // tmp = *px;
	refx = refy; // *px = *py;
	refy = tmp;  // *py = tmp;
}