#include <string>
#include <iostream>
#include "Circle.h"

Circle::Circle()
{
	radius = 10;
	color = "red";
}

Circle::Circle(double r, std::string c) 
{
		radius = r;
		color = c;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	return 3.1415 * radius * radius;
}

std::string Circle::getColor()
{
	return color;
}

Circle& Circle::compareArea(Circle &circle)
{
	if (this->radius > circle.radius) return *this;
	else return circle;
}

void Circle::setRadius(double r)
{
	radius = r;
}
void Circle::setColor(std::string c)
{
	color = c;
}

void Circle::describe()
{
	std::cout << "This is a " << color << " circle, with the radius of " << radius << " and the area of " << radius * radius * 3.1415 << std::endl;
}

