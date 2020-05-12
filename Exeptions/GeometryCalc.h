#pragma once
#include "Lib.h"
class GeometryCalc
{
	double a;
	double b;
	double c;
	double P;
	double S;
	std::string units;
	void inputSideA();
	void inputSideB();
	void inputSideC();
	void inputUnits();
	void checkExists();
public:
	GeometryCalc();
	bool inputData();
	void calcResult();
	void displayResult();
	void displayInfo();
};

