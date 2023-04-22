// Rozdzial_4_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    Batonik snack("Mocha Munch", 2.3, 350);
    snack.wys();
}
