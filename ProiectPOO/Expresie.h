#pragma once
#include "Element.h"

using namespace std;

class Expresie {
private:
    string expresie;




public:
    Expresie();

    string stergeSpatii(std::string expresie);
    void separaNumere(std::string expr);
    double folosesteOperator(double a, double b, char Operator);
    void gasesteParantezele(std::string expresie);


};
