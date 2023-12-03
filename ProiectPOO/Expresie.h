#pragma once
#include <iostream>

using namespace std;

class Expresie
{   
private:
	double* valori;
	char* deProcesat = nullptr;//?

public:
	Expresie()
	{
	}

	~Expresie()
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
