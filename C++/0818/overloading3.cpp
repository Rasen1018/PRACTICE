#include <iostream>
using namespace std;

class Point
{
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	
	const Point operator++(int)		//후위증가
	{
		const Point retobj(xpos, ypos);
		xpos += 1;
		ypos += 1;
		return retobj;
	}

	friend Point& operator--(Point& ref);
	friend Point& operator--(Point& ref, int);
};

Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

Point& operator--(Point& ref, int)		// 후위감소
{
    Point retobj(ref);
	retobj.xpos -= 1;
	retobj.ypos -= 1;
	return retobj;
}

int main(void)
{
	Point pos(1, 2);
	pos.operator++();
	pos.ShowPosition();
	++(pos.operator++());
	pos.ShowPosition();
	--(operator--(pos, 0));
	pos.ShowPosition();

	return 0;
}