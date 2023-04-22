// Rozdzial_1_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void godzi(int h, int m)
{
    std::cout << h << ":" << m << std::endl;
}

int main()
{
    std::cout << "Podaj godzine i minute: \n";
    int godz, min;
    std::cin >> godz >> min;
    godzi(godz, min);
}

