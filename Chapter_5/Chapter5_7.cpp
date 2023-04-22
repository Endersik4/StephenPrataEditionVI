// Rozdzial_5_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct car
{
    std::string marka;
    int rok_budowy;

    void wyswietl()
    {
        std::cout << rok_budowy << " " << marka << std::endl;
    }
};

int main()
{
    int liczba_aut;
    std::cout << "Podaj liczbe katalogowanych aut: ";
    std::cin >> liczba_aut;
    car *samochody = new car[liczba_aut];
    for (int i = 0; i != liczba_aut; i++)
    {
        using namespace std;
        cout << "Samochod #" << i+1;
        cout << "\nProsze podac marke: ";
        cin.get();
        getline(cin, samochody[i].marka);
        cout << "Rok produkcji: ";
        cin >> samochody[i].rok_budowy;
    }
    for (int i = 0; i != liczba_aut; i++)
    {
        samochody[i].wyswietl();
    }
    delete[] samochody;
    samochody = nullptr;
}
