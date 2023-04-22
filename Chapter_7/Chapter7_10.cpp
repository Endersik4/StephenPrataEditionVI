// Rozdzial_7_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double calculate(double a, double b, double (*fun)(double, double));
double add(double x, double y);
double multiply(double x, double y);
double substruct(double x, double y);

int main()
{
    double a, b;
    double (*pf[3])(double, double) = {&add, &substruct, &multiply};
    std::cout << "Podaj 2 liczby do wykoania trzech dzialan: ";
    while (std::cin >> a >> b)
    {
        for (int i = 0; i != 3; i++)
        {
            std::cout << "Kalkulacja: " << calculate(a, b, pf[i])<<std::endl;
        }
        std::cout << "Podaj 2 liczby do wykoania trzech dzialan: ";
    }
}

double calculate(double a, double b, double (*fun)(double, double))
{
    return fun(a, b);
}

double add(double x, double y)
{
    return x + y;
}

double multiply(double x, double y)
{
    return x*y;
}

double substruct(double x, double y)
{
    return x-y;
}
