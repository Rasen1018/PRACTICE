#include "geo.h"

GeometricFigure::GeometricFigure()
{
	color = "white";
}

// 포인터 변수는 클래스 내에서만! 함수를 정의할 때는 X
GeometricFigure::GeometricFigure(const string color)
{
	this->color = color;
}

void GeometricFigure::SetColor(const string color)
{
	this->color = color;
}

bool GeometricFigure::IsPaint()
{
	return (color == "white") ? false : true;
}

string GeometricFigure::GetColor()
{
	return color;
}

int main()
{






	return 0;
}