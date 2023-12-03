#pragma once

class Element {
private:
    char* elemente;

public:
    Element();
    Element(const char* date);
    ~Element();

    const char* getElemente();
    void setElemente(const char* date);
};
