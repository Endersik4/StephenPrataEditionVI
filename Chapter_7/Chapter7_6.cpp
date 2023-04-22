// Rozdzial_7_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int fill_array(double tab[], int len);
void show_array(double tab[], int len);
void reverse_array(double tab[], int len);

int main()
{
    int le = 0;
    std::cout << "Podaj dlugsoc tablicy: ";
    std::cin >> le;
    double* tab = new double[le];
    int len1 = fill_array(tab, le);
    show_array(tab, len1);
    reverse_array(tab, len1);
    show_array(tab, len1);

    delete[] tab;
    tab = nullptr;
}

int fill_array(double tab[], int len)
{
    std::cout << "Prosze podac wartosci typu double do tablicy: ";
    int ile = 0;
    for (int i = 0; i != len; i++)
    {
        if (std::cin >> tab[i]) ile++;

    }
    return ile;
}

void show_array(double tab[], int len)
{
    std::cout << "Zawartosc tabeli typu double: \n";
    for (int i = 0; i != len; i++)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
    }
}

void reverse_array(double tab[], int len)
{
    double* tab2 = new double[len];
    int j = len-1;
    for (int i = 0; i != len; i++, j--)
    {
        tab2[i] = tab[j];
    }
    for (int i = 0; i != len; i++) tab[i] = tab2[i];
    delete[] tab2;
    tab2 = nullptr;
    std::cout << "Tablica zostala odwrocona\n";
}
