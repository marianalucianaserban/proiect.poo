#pragma once
#include <iostream>
#include "Expresie.h"





Expresie::Expresie()
{
}


string Expresie::stergeSpatii(std::string expresie)
{
	int n = expresie.size();
	std::string expresieFaraSpatii;
	for (int i = 0; i < n; ++i)
	{
		if (expresie[i] != ' ')
		{
			expresieFaraSpatii += expresie[i];
		}
	}

	return expresieFaraSpatii;
}

void Expresie::separaNumere(std::string expr)
{
	string* numere = new string[expr.size()];
	string* operatori = new string[expr.size()];

	int iNr = 0;
	int iOp = 0;

	for (int i = 0; i < expr.size(); i++)
	{
		while (isdigit(expr[i]))
		{
			numere[iNr] = expr[i];
			i++;
		}
		iNr++;
		if (!isdigit(expr[i]))
		{
			operatori[iOp] = expr[i];
			iOp++;
		}
	}
}

void gasesteParantezele(std::string expresie)
{
	for (int i = 0; i < 10; i++)
	{
		if (expresie[i] == '(')
			int beginP = i;
		if (expresie[i] == ')')
			int endP = i;
	}
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