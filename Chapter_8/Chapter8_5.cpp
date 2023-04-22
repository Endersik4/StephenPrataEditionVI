// Rozdzial_8_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <typename T>
T max5(const T a[]);

int main()
{
    double tab[5] = {2.5, 3.5, 1.8, 5.5, 5.6};
    int tab2[5] = { 1, 5, 7, 1, 2 };
    std::cout << "Tablica double: " << max5(tab) << std::endl;
    std::cout << "Tablica int: " << max5(tab2) << std::endl;
}

template <typename T>
T max5(const T a[])
{
    T maxa = a[0];
    for (int i = 1; i != 5; i++)
    {
        if (maxa < a[i]) maxa = a[i];
    }
    return maxa;
}
