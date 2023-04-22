// Rozdzial_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double srednia_harmoniczna(double x, double y)
{
    return (2.0 * x * y) / (x + y);
}

int main()
{
    double x, y;
    std::cout << "Podaj pary liczb, gdy jedna z nich bedzie 0 to program konczy dzialanie\n";
    while (std::cin >> x >> y)
    {
        if (x == 0 || y == 0) break;
        std::cout << "Srednia harmoniczna liczb "<<x<<" i "<<y<<" wynosi: " << srednia_harmoniczna(x, y)<<"\n";
    }
}

