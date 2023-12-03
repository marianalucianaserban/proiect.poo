#pragma once
#include "Element.h"

class Expresie {
private:
    double* valori;
    Element** tokeni;
    int nrTokeni;

public:
    Expresie();
    ~Expresie();

    void eOperatie(const char* element);
    void eNumar(const char* element);
    double folosesteOperator(double a, double b, char Operator);
};
//de facut get si set