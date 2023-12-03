#pragma once
#include <iostream>
#include "Element.h"

using namespace std;

class Expresie
{
private:
	double* valori;
	Element** tokeni;
	int nrTokeni;


public:
	Expresie() : valori(nullptr), tokeni(nullptr), nrTokeni(0)
	{
	}

	~Expresie()
	{
		delete[] valori;

		for (int i = 0; i < nrTokeni;i++) 
		{
			delete tokeni[i];
		}
		delete[] tokeni;
	}

	void eOperatie(const char* element)
	{
	}

	void eNumar(const char* element)
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
			if (b != 0) {
				return a / b;
			}
			else {
				throw exception("!!IMPARTIRE LA 0!!");
			}
		default:
			throw exception("!!!Operator invalid!!!");
		}
	}

};
