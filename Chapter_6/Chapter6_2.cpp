// Rozdzial_6_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>

double tab[10];
int ile;
double srednia;
char a;

int main()
{
    std::cout << "Wpisz liczby do policzenia sredniej (Wartosc nieliczbowa - konczy dzialanie programu): ";
    for (int i = 0; i != 10; i++)
    {
        std::cin >> a;
        if (isdigit(a)) tab[i] = a - '0';
        else break;
        srednia += tab[i];
        ile++;
    }
    srednia /= ile;
    std::cout << "Srednia wynosi: " << srednia << std::endl;
    for (int i = 0; i != ile; i++)
    {
        if (tab[i] > srednia) std::cout << tab[i] << std::endl;
    }
    std::cout<<"asd";
}
