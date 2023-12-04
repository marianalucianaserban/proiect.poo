#pragma once
#include <iostream>

class Calculator {
private:
    bool readyForAction;
    static int nrCalcule;
    char* expresii;

public:
    Calculator();
    Calculator(const char* expresii);
    ~Calculator();
    Calculator(const Calculator& calcul);

    void gasesteParantezele();

    Calculator& operator=(const Calculator& calcul);
    bool operator==(const Calculator& calcul);
    char operator[](int index);

    const char* getExpresii();
    void setExpresii(const char* expresii);
    void ruleaza();

    friend std::ostream& operator<<(std::ostream& out, const Calculator& calculator);
    friend std::istream& operator>>(std::istream& in, Calculator& calculator);
};