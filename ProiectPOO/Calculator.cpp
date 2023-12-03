#include <iostream>
using namespace std;

class Calculator {

private:
    bool readyForAction;
    static int nrCalcule;
    char* expresii;
public:
    Calculator() : readyForAction(false), expresii(nullptr)
    {
    }
    Calculator(const char* expresii) : readyForAction(false), expresii(nullptr)
    {
        setExpresii(expresii);
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
        if (this != &calcul) {
            readyForAction = calcul.readyForAction;
            setExpresii(calcul.expresii);
        }
        return *this;
    }

    const char* getExpresii()
    {
        return expresii;
    }

    void setExpresii(const char* expresii)
    {
        delete[] this->expresii;
        this->expresii = new char[strlen(expresii) + 1];
        strcpy_s(this->expresii, strlen(expresii) + 1 ,expresii);
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
            return a / b;
        default:
            throw exception("!!!Operator invalid!!!");
        }
    } 
    void ALTA_METODA();


    bool operator==(const Calculator& calcul)
    {
        return (strcmp(this->expresii, calcul.expresii) == 0);
    }

    char operator[](int index)
    {
        if (expresii && index >= 0 && index < static_cast<int>(strlen(expresii)))
        {
            return expresii[index];
        }
        else
            throw exception("Indexul nu e bun!");
            //tratam cazul in care indexul nu  e bun

    }

    friend ostream& operator<<(ostream& out, const Calculator& calculator);
    friend istream& operator>>(istream& in, Calculator& calculator);
};

int Calculator::nrCalcule = 0;
