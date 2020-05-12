#include <iostream>
#include "GeometryCalc.h"
int main()
{
	GeometryCalc* gc = new GeometryCalc();
	std::string choice;
	do
	{
		if (gc->inputData())
		{
			gc->calcResult();
			gc->displayInfo();
			gc->displayResult();
		}
		std::cout << "\n> Continue (y/n)? - ";
		std::cin >> choice;
	} while (choice == "y");

	delete gc;
	std::cout << "\n> Finish " << std::endl;
}
