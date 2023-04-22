// Rozdzial_4_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct Batonik
{
    std::string marka;
    double waga;
    int kalorie;

    Batonik() = default;
    Batonik(std::string m, double w, int k)
    {
        marka = m;
        waga = w;
        kalorie = k;
    }
    void wys()
    {
        std::cout << "Marka to " << marka << ". \nWazy " << waga << "g. \nKalorie to " << kalorie << "\n";
    }
};
int main()
{
    int ile;
    std::cout << "Podaj ile batonikow chcesz wpisac: ";
    std::cin >> ile;
    Batonik *snack = new Batonik[ile];
    for (int i = 0; i != ile; i++)
    {
        std::cout << "Wpisz Marke: ";
        std::cin >> snack[i].marka;
        std::cout << "Wpisz wage: ";
        std::cin >> snack[i].waga;
        std::cout << "Wpisz kalorie: ";
        std::cin >> snack[i].kalorie;
        std::cout << std::endl;
    }

    for (int i = 0; i != ile; i++)
    {
        snack[i].wys();
    }

    delete[] snack;
    snack = nullptr;
}


