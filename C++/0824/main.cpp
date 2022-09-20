#include <iostream>
#include "pointemplate.h"

int main(void)
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();
	Point<double> pos2(2.5, 3.6);
	pos2.ShowPosition();
	Point<char> pos('P', 'F');

	return 0;
}
