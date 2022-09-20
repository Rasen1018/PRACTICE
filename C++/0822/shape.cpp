#include <iostream>
using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) : m_x(x), m_y(y) {}

	int getX() {
		return m_x;
	}

	int getY() {
		return m_y;
	}

	void Print() const
	{
		cout << '[' << m_x << "," << m_y << ']' << endl;
	}

private:
	int m_x;
	int m_y;
};

//--------------------------------------------------------------------------------

class Shape {
public:
	Shape(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0) {
		SetStartPoint(x1, y1);
		SetEndPoint(x2, y2);
	}
	
	void SetStartPoint(int x1, int y1);
	void SetEndPoint(int x2, int y2);
	virtual void Draw() =0;

protected:
	Point m_start;
	Point m_end;
};

void Shape::SetStartPoint(int x1, int y1) {
	m_start = Point(x1, y1);
}
void Shape::SetEndPoint(int x2, int y2) {
	m_end = Point(x2, y2);
}

//--------------------------------------------------------------------------------

class Rectangle : public Shape {
public:
	Rectangle(int x1=0, int y1=0, int x2=0, int y2=0) 
		: Shape(x1, y1, x2, y2) {}
	int GetWidth();
	int GetHeight();
	void Draw();
};

int Rectangle::GetWidth() {
	return m_end.getX() - m_start.getX();
}

int Rectangle::GetHeight() {
	return m_end.getY() - m_start.getY();
}

void Rectangle::Draw() {
	cout << "Rectangle()" << endl;
}

//--------------------------------------------------------------------------------
class Ellipse : public Shape {
public:
	Ellipse(int x1=0, int y1=0, int x2=0, int y2=0) :
		Shape(x1, y1, x2, y2) {}
	bool Iscircle();
	void Draw();
};

bool Ellipse::Iscircle() {
	
	return true;
}

void Ellipse::Draw() {
	cout << "Ellipse()" << endl;
}

//--------------------------------------------------------------------------------
 

int main()
{
	Shape* pShape1 = new Rectangle;


	 

	return 0;
}