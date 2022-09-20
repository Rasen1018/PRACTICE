#ifndef __pointemplate_H_
#define __pointemplate_H_
using namespace std;

template <typename T>
class Point {
	T xpos;
	T ypos;

public:
	Point(T x, T y);
	void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}

template <typename T>
void Point<T>::ShowPosition() const {
	cout << '[' << xpos << ',' << ypos << ']' << endl;
}

#endif
