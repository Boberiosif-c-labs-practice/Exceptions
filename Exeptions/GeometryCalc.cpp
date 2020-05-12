#include "GeometryCalc.h"

GeometryCalc::GeometryCalc()
	: a(0.0), b(0.0), c(0.0), P(0.0), S(0.0), units("Undef!")
{}

void GeometryCalc::inputSideA()
{
	std::cout << " a = ";
	if (!(std::cin >> a))
		throw std::exception("Input error for side [a]!");
	if (a <= 0)
		throw std::exception("Side [a] must be posotive!");
}

void GeometryCalc::inputSideB()
{
	std::cout << " b = ";
	if (!(std::cin >> b))
		throw std::exception("Input error for side [b]!");
	if (b <= 0)
		throw std::exception("Side [b] must be posotive!");
}

void GeometryCalc::inputSideC()
{
	std::cout << " c = ";
	if (!(std::cin >> c))
		throw std::exception("Input error for side [c]!");
	if (c <= 0)
		throw std::exception("Side [c] must be posotive!");
}

void GeometryCalc::inputUnits()
{
	std::cout << " units: ";
	std::cin >> units;
	if (units != "sm" && units != "inches")
		throw std::exception("Units can be only [sm] or [inches]!");
}

void GeometryCalc::checkExists()
{
	if (a >= b + c || b >= a + c || c >= b + c)
		throw std::exception("Triangle does not exists!");
}

bool GeometryCalc::inputData()
{
	try
	{
		std::cout << "\n> Input sides of your triangle: " << std::endl;
		inputSideA();
		inputSideB();
		inputSideC();
		checkExists();
		inputUnits();
		return true;
	}
	catch (const std::exception &except)
	{
		std::cerr << "\n> Exception: " << except.what();
		std::cout << "  Calculating is impossible!" << std::endl;
		return false;
	}
}

void GeometryCalc::calcResult()
{
	P = a + b + c;
	double p = P / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c)); // Geron formule
}

void GeometryCalc::displayResult()
{
	std::cout << "\n> Results of calcculating are:" << std::endl;
	std::cout << "  Triangle length: P = " << P << std::endl;
	std::cout << "  Triangle Square: S = " << fixed << setprecision(2);
	std::cout << S << std::endl;
}

void GeometryCalc::displayInfo()
{
	std::cout << "\n> Your triangle geometry paraneters are: " << std::endl;
	std::cout << "  a = " << a << std::endl;
	std::cout << "  b = " << b << std::endl;
	std::cout << "  c = " << c << std::endl;

}
