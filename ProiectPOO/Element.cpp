#include <iostream>

class Element {
private:
    char* elemente;
    int nrElemente;

public:
    Element() : elemente(nullptr)
    {
    }
    Element(const char* date) : elemente(nullptr)
    {
        setElemente(date);
    }

    ~Element()
    {
        delete[] elemente;
        //nrElemente?
    }

    const char* getElemente()
    {
        return elemente;
    }

    void setElemente(const char* date)
    {
        delete[] elemente;
        elemente = new char[strlen(date) + 1];
        strcpy(elemente, date);
    }
};
