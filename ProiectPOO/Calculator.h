#pragma once

#include <iostream>
using namespace std;

class Calculator {
private:
    char* expresii; 
public:
    Calculator(); // Constructor implicit
    Calculator(const char* expresii); // Constructor cu parametri
    ~Calculator(); // Destructor
    Calculator(const Calculator& calcul); // Constructor de copiere
    Calculator& operator=(const Calculator& calcul); 
    // Metode de acces si setteri pentru atribut
    const char* getExpresii();
    void setExpresii(const char* expresii);
    // metode generice
    void FACEM_METODEGENERICE();
    void ALTA_METODA();

    bool operator==(const Calculator& calcul);

    char operator[](int index);

    friend ostream& operator<<(ostream& out, const Calculator& calculator);
    friend istream& operator>>(istream& in, Calculator& calculator);

};
