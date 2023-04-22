#pragma once
#ifndef CPMV_H
#define CPMV_H
#include <iostream>

class Cpmv
{
public:
    struct Info
    {
        std::string qcode;
        std::string zcode;
    };
private:
    Info* pi;
public:
    Cpmv();
    Cpmv(std::string q, std::string z);
    Cpmv(const Cpmv& cp);
    Cpmv(Cpmv&& mv); //Konstruktor przenoszacy
    ~Cpmv();
    Cpmv& operator=(const Cpmv& cp); //przypisania kopiujace
    Cpmv& operator=(Cpmv&& mv);//przypisania przenoszace
    Cpmv operator+(const Cpmv& obj) const;
    void Display() const;
};
#endif