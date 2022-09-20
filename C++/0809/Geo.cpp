#include "geo.h"

GeometricFigure::GeometricFigure()
{
	color = "white";
}

// ������ ������ Ŭ���� ��������! �Լ��� ������ ���� X
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