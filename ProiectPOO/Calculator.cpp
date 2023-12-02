#include <iostream>
using namespace std;

class Calculator {

private:
    char* expresii; 

public:
    Calculator()
    {

    }
    Calculator(const char* expresii)
    {

    }
    ~Calculator()
    {

    }
    Calculator(const Calculator& calcul)
    {

    }
    Calculator& operator=(const Calculator& calcul)
    {

    }

    const char* getExpresii()
    {
    }

    void setExpresii(const char* expresii)
    {
    }
    void FACEM_METODEGENERICE();
    void ALTA_METODA();


    bool operator==(const Calculator& calcul)
    {
        return this->expresii == calcul.expresii;
    }

    char operator[](int index)
    {
    }

    friend ostream& operator<<(ostream& out, const Calculator& calculator);
    friend istream& operator>>(istream& in, Calculator& calculator);
};