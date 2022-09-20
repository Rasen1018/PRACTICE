#ifndef _GEO_H_
#define _GEO_H_

#define BUFSIZ 10

#include <iostream>
#include <string>
using namespace std;

class GeometricFigure {
public:
	GeometricFigure();
	GeometricFigure(const string color);
	void SetColor(const string color);
	bool IsPaint();
	string GetColor();
protected:
	string color;

};


#else
#endif

