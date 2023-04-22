// Rozdzial_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
char ANSI_UNDERLINE[9] = "\u001B[4m";
const double kon = 0.3937;
const double stop = 0.0328;

int main()
{
    std::cout << "Podaj wzrost w cm\n";
    double cm;
    std::cin >> cm;
    std::cout << ANSI_UNDERLINE << "Wynosi: " << cm * kon << " cali\n";
    std::cout << ANSI_UNDERLINE << "Wynosi: " << cm * stop << " stop\n" << ANSI_UNDERLINE;
}
