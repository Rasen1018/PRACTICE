#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const {
		cout << '[' << xpos << ',' << ypos << ']' << endl;
	}
};

int main(void) {
	Point pos1(3, 4);
	pos1.ShowPosition();

	Point pos2(2.5, 3.6);
	pos2.ShowPosition();

	Point pos3('P', 'F');
	pos3.ShowPosition();
}

