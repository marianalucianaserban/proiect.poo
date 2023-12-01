#pragma once
#include <iostream>
#include "Calcul.h"

class Calcul
{
private:
    static int nrCalcule;
    bool readyForAction = false;
    char* expresie;

public:
    Calcul();
    Calcul(const char* expresie);
    ~Calcul();

    void gasesteParantezele();
    void setExpresie();
    const char* getExpresie();
    static int getNrCalcule();
};
