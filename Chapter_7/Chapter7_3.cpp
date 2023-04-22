// Rozdzial_7_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

void f1(pudlo a)
{
    std::cout << "Producent to " << a.producent << "\nWysokosc pudla: " << a.wysokosc;
    std::cout << "\nSzerokosc pudla: " << a.szerokosc << "\nDlugosc pudla: " << a.dlugosc << "\nOBjetosc pudla: " << a.objetosc;
}

void f2(pudlo* a)
{
    a->objetosc = a->wysokosc * a->szerokosc * a->dlugosc;
}

int main()
{
    pudlo p1;
    std::cout << "Podaj producenta pudla: ";
    std::cin >> p1.producent;
    std::cout << "Podaj wysokosc pudla: ";
    std::cin >> p1.wysokosc;
    std::cout << "Podaj szerokosc pudla: ";
    std::cin >> p1.szerokosc;
    std::cout << "Podaj dlugosc pudla: ";
    std::cin >> p1.dlugosc;
    f2(&p1);
    f1(p1);


}

