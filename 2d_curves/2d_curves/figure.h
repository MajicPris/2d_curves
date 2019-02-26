#include<iostream>
using namespace std;

enum Figure_Type { Circle_ID, Ellipse_ID, Helixes_ID };

class Figure {
public:
	double rX, rY;
	double square;
	Figure_Type figure_type;
	virtual void setSquare() = 0;
	virtual void setRadius() = 0;
	virtual void show() = 0;
	virtual double getSquare()=0;
};

class Circle : public Figure {
public:
	Circle();
	void setSquare();
	void setRadius();
	void show();
	double getSquare();
};

class Ellipse : public Figure {
public:
	Ellipse();
	void setSquare();
	void setRadius();
	void show();
	double getSquare();

};

