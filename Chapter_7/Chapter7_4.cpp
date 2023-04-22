// Rozdzial_7_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total, choices, total_mega, mega;
    cout << "Podaj najwiekszaz liczbe, jaka mozna wybrac, liczbe skreslen oraz najwieksza liczbe jaka mozna wybrac w megaliczbie i jedna liczbe:\n";
    while ((cin >> total >> choices >> total_mega >> mega) && choices <= total)
    {
        cout << "Szansa wygranej to jeden do ";
        cout << probability(total, choices) * probability(total_mega, mega);
        cout << ".\n";

        cout << "Nastepne dwie liczby (q, aby zakocnzcy): ";
    }
    cout << "do widzenia\n";
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p >  0; n--, p--)
        result = result * n / p;
    return result;
}
