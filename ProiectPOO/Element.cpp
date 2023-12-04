#include <iostream>
#include <string>
#include "Element.h"

Element::Element() : elemente(nullptr)
{
}

Element::Element(const char* date) : elemente(nullptr)
{
    if (date != nullptr) {
        setElemente(date);
    }
}

Element::~Element()
{
    delete[] elemente;
}

const char* Element::getElemente()
{
    return elemente;
}

void Element::setElemente(const char* date)
{
    delete[] elemente;
    elemente = new char[strlen(date) + 1];
    strcpy_s(elemente, strlen(date) + 1, date);
};