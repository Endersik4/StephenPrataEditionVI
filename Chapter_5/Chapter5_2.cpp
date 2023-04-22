// Rozdzial_5_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

const int ArSize = 101;

int main()
{
    std::array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1.0;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;

}

