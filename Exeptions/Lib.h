#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>

using std::fixed;
using std::setprecision;

void example1()
{
	/*Функция которая будет исчислять квадратный корень
	из двух заданных чисел*/
	std::cout << "\n Input 2 numbers : " << std::endl;

	try
	{
		// 1-> Testing input correct 1-st number
		double a;
		std::cout << " First number: a = ";
		if (!(std::cin >> a))
			throw "First number input error!";

		// 2-> Testing input correct 2-nd number
		double b;
		std::cout << " First number: b = ";
		if (!(std::cin >> b))
			throw "Second number input error!";

		// -3> Testing division correct
		if (b == 0)
			throw "Division by zero error!";

		// -4> Testing char input numbers: 
		if (a * b < 0)
			throw "Sqrt by negative number error!";

		// -5> Calculating
		double res = sqrt(a / b);
		std::cout << "\n> Calculatin results are: " << std::endl;
		std::cout << "  sqrt(" << a << "/" << b << ") = " << res << std::endl;

		/*std::cout << " Calc to be continued! ... " << std::endl;*/
	}
	catch (const char* errMessage)
	{
		std::cerr << "Exception: " << errMessage << std::endl;
		std::cout << "Calculating is impossible!" << std::endl;
	}
}
