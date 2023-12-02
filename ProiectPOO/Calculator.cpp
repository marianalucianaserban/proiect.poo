#include <iostream>
using namespace std;

class Calculator {

private:
    bool readyForAction = false;
    static int nrCalcule;
    char* expresii = nullptr;
public:
    Calculator()
    {

    }
    Calculator(const char* expresii)
    {

    }
    ~Calculator()
    {
        delete[] expresii;

    }
    Calculator(const Calculator& calcul)
    {

    }

    void gasesteParantezele()
    {
        for (int i = 0; i < strlen(expresii); i++)
        {
            if (expresii[i] == '(')
                int beginP = i;
            if (expresii[i] == ')')
                int endP = i;
        }
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

int nrCalcule = 0;
