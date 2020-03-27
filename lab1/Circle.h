#include <string>

class Circle {
	public:
	Circle();
	Circle(double r, std::string c);
	double getRadius();
	double getArea();
	std::string getColor();
	Circle& compareArea(Circle &circle);
	void setRadius(double r);
	void setColor(std::string c);
	void describe();

	private:
	double radius;
	std::string color;
};
