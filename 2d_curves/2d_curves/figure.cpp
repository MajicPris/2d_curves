#include<iostream>
#include"figure.h"
#include<math.h>
#define PI 3.14159265

using namespace std;
//RANDOM FUNC
float random(float min, float max)
{
	return (float)(rand()) / RAND_MAX * (max - min) + min;
}


Circle::Circle() {
	figure_type = Circle_ID;
}
void Circle::setRadius() {
	rX = random(1.0, 100.0);
	rY = random(1.0, 100.0);
}
void Circle::setSquare(){
	square = rX * rX*PI;
	
}
double Circle::getSquare() {
	return square;
}
void Circle::show()
{
	cout << "circle" << "  Radius:" << rX << "  Square: " << getSquare() << endl;
}

Ellipse::Ellipse() {
	figure_type = Ellipse_ID;
}
void Ellipse::setRadius() {
	rX = random(1.0, 100.0);
	rY = random(1.0, 100.0);
}
void Ellipse::setSquare() {
	square = rX * rY*PI;
	
}
double Ellipse::getSquare() {
	return square;
}
void Ellipse::show()
{
	cout << "ellipse" << "  Radius:" << rX << " " <<rY << "  Square: " << getSquare() << endl;
}