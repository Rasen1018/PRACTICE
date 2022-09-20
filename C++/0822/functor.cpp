#include <iostream>
using namespace std;
class Point
{
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

	void SetPos(int x = 0, int y = 0)
	{
		xpos = x;
		ypos = y;
	}

	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	friend ostream& operator<<(ostream&, const Point&);
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

class SmartPtr
{
	Point* posptr;

public:
	SmartPtr(Point* ptr) : posptr(ptr) {}

	Point& operator*() const
	{
		return *posptr;
	}

	Point* operator->() const
	{
		return posptr;
	}

	~SmartPtr()
	{
		delete posptr;
	}
};

int main()
{
	SmartPtr sptr1(new Point(1, 2));
	SmartPtr sptr2(new Point(2, 3));
	SmartPtr sptr3(new Point(4, 5));
	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;

	sptr1->SetPos(10, 20);
	sptr2->SetPos(30, 40);
	sptr3->SetPos(50, 60);

	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;

	return 0;
}