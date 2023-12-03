#pragma once
#include <iostream>
#include "Expresie.h"


	Expresie::Expresie() : valori(nullptr), tokeni(nullptr), nrTokeni(0)
	{
	}

	Expresie::~Expresie()
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
				throw std::exception("!!IMPARTIRE LA 0!!");
			}
		default:
			throw std::exception("!!!Operator invalid!!!");
		}
	}


