#include <iostream>
#include <string>
using namespace std;

class Point
{
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	//Point operator+(const Point &ref) // 후위증가
	//{
	//	Point pos(xpos + ref.xpos, ypos + ref.ypos);
	//	return *this;
	//}


	friend Point& operator+(const Point& pos1, const Point& pos2);
	 /* call by value */
	//friend Point operator+(const Point pos1, const Point pos2);
	friend ostream& operator<<(ostream&, const Point&);
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

Point& operator+(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}

/* call by value */
//Point operator+(const Point pos1, const Point pos2)
//{
//	return Point(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//}

class Adder
{
private:
	int pos1_, pos2_;

public:
	int operator()(const int& n1, const int& n2)
	{
		return n1 + n2;
	}
	double operator()(const double& e1, const double& e2)
	{
		return e1 + e2;
	}
	Point operator()(const Point& pos1, const Point& pos2)
	{
		return pos1 + pos2;
	}

	void ShowPosition() const
	{
		cout << '[' << pos1_ << "," << pos2_ << ']' << endl;
	}
};

int main()
{
	Adder adder;
	cout << adder(1, 3) << endl;
	cout << adder(1.5, 3.7) << endl;
	adder(Point(3, 4), Point(7, 9)).ShowPosition();
	cout << adder(Point(3, 4), Point(7, 9)) << endl;
	return 0;
}