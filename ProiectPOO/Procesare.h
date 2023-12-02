#pragma once
#include <iostream>

class Procesare
{   
private:
	char* deProcesat = nullptr;

public:
	Procesare()
	{
	}

	~Procesare()
	{
	}
	void eOperatie()
	{
	}

	void eNumar()
	{

	}

	double folosesteOperator(double a, double b, char Operator) 
	{
		switch (Operator) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		default:
			throw exception("!!!Operator invalid!!!");
		}
	}

};
