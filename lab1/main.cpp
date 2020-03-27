#include <string>
#include <iostream>
#include "Circle.h"

int main()
{
	int n = 0;
	std::cout << "How many corcles would you like to create?\n:";
	std::cin >> n;
	Circle * array = new Circle[n];
	for (int i = 0; i < n; i++)
	{
		int choice = 1;
		std::cout << "To initialise circle with index " << i << " press 1. Press any key to initialise with default values (radius = 10, color = \"red\")\n";
		std::cin >> choice;
		if (choice == 1) 
		{
			double rad;
			std::string col;
			std::cout << "Enter radius\n";
			std::cin >> rad;
			std::cout << "Enter color\n";
			std::cin >> col;

			array[i].setRadius(rad);
			array[i].setColor(col);
		}
	}
	for (int i = 0; i < n; i++) array[i].describe();


	return 0;
}

