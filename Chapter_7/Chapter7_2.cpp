// Rozdzial_7_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int wprowadzanie(double tab[])
{
    int el =0;
    for (int i = 0; i != 10; i++)
    {
        if (std::cin >> tab[i]) el++;
        
    }
    return el;
}
void wyswietlanie(double tab[], int el)
{
    std::cout << "\nWyswietlenie calej tablicy: \n";
    for (int i = 0; i != el; i++) std::cout << tab[i] << ", ";
}
double srednia(double tab[], int el)
{
    int ile = 0;
    double suma = 0;
    for (int i = 0; i != el; i++)
    {
        suma += tab[i];
        ile++;
    }
    return suma / ile;
}

int main()
{
    double tab[10];
    std::cout << "Podaj do 10 wynikow golfowych do obliczenia sredniej (wpisz inny znak niz cyfra aby zakonczyc)\n";
    int ilosc_el = wprowadzanie(tab);
    wyswietlanie(tab, ilosc_el);
    std::cout<<"\nSrednia wynosi: "<<srednia(tab, ilosc_el);

}