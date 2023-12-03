#include "Calculator.h"
#include <string>

int Calculator::nrCalcule = 0;

Calculator::Calculator() : readyForAction(false), expresii(nullptr)
{
}

Calculator::Calculator(const char* expresii) : readyForAction(false), expresii(nullptr)
{
    setExpresii(expresii);
}

Calculator::~Calculator()
{
    delete[] expresii;
}

Calculator::Calculator(const Calculator& calcul)
{
}

void Calculator::gasesteParantezele()
{
}

Calculator& Calculator::operator=(const Calculator& calcul)
{
    if (this != &calcul) {
        readyForAction = calcul.readyForAction;
        setExpresii(calcul.expresii);
    }
    return *this;
}

const char* Calculator::getExpresii()
{
    return expresii;
}

void Calculator::setExpresii(const char* expresii)
{
    delete[] this->expresii;
    this->expresii = new char[strlen(expresii) + 1];
    strcpy_s(this->expresii, strlen(expresii) + 1, expresii);
}

void Calculator::ALTA_METODA()
{
}

bool Calculator::operator==(const Calculator& calcul)
{
    return (strcmp(this->expresii, calcul.expresii) == 0);
}

char Calculator::operator[](int index)
{
    if (expresii && index >= 0 && index < static_cast<int>(strlen(expresii))) {
        return expresii[index];
    }
    else {
        throw std::exception("Indexul nu este valid!");
    }
}

std::ostream& operator<<(std::ostream& out, const Calculator& calculator)
{

    return out;
}

std::istream& operator>>(std::istream& in, Calculator& calculator)
{

    return in;
}