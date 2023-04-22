// Rozdzial_8_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
template <typename T>
T maxn(const T a[], int el);

template <> const char* maxn(const char* const a[],  int el);



int main()
{
    int tab[5] = { 1, 5, 2, 4, 3 };
    double tab2[4] = { 2.5, 5.5, 1.68, 4.77};
    std::cout << "Tablica int: " << maxn(tab, 5) << std::endl;
    std::cout << "Tablica double: " << maxn(tab2, 4) << std::endl;
    const char* tab3[5] = { "Uga", "Buga", "Minecraft", "Tralalala", "3W3N" };
    std::cout << "Adres najdluzszego lancucha z tablicy * char: " << (void *) maxn(tab3, 5) << std::endl;
}

template<typename T>
T maxn(const T a[], const int el)
{
    T maxa = a[0];
    for (int i = 1; i != el; i++)
    {
        if (maxa < a[i]) maxa = a[i];
    }
    return maxa;
}

template <> const char* maxn(const char* const a[],  int el)
{
    const char* max = a[0];

    for (int i = 1; i != el; i++)
    {
        if (strlen(max) < strlen(a[i]))
        {
            max = a[i];
        }
    }
    return max;
}
