// Rozdzial_6_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int liczba_wplacajacych;
bool czy_sa_wspaniali, czy_sa_zwykli;
struct donejtorzy {
    std::string nazwisko;
    double ile;
};

int main()
{
    std::cout << "Podaj liczbe osob wplacajacych: ";
    std::cin >> liczba_wplacajacych;
    donejtorzy* wplacajacy = new donejtorzy[liczba_wplacajacych];
    for (int i = 0; i != liczba_wplacajacych; i++)
    {
        std::cout << "Podaj nazwisko wplacajacego: ";
        std::cin >> wplacajacy[i].nazwisko;
        std::cout << "Podaj ile podana osoba wplacila: ";
        std::cin >> wplacajacy[i].ile;
        if (wplacajacy[i].ile >= 10000) czy_sa_wspaniali = true;
        else if (wplacajacy[i].ile < 10000) czy_sa_zwykli = true;
    }
    std::cout << "Nasi Wspaniali Sponsorzy!\n";
    if (czy_sa_wspaniali == true)
    {
        for (int i = 0; i != liczba_wplacajacych; i++)
        {
            if (wplacajacy[i].ile >= 10000)
            {
                std::cout << wplacajacy[i].nazwisko << " przekazal " << wplacajacy[i].ile << "zl!\n";
            }
        }
    }
    else std::cout << "Brak\n";

    std::cout << "Nasi Sponsorzy!\n";
    if (czy_sa_zwykli == true)
    {
        for (int i = 0; i != liczba_wplacajacych; i++)
        {
            if (wplacajacy[i].ile < 10000)
            {
                std::cout << wplacajacy[i].nazwisko << " przekazal " << wplacajacy[i].ile << "zl!\n";
            }
        }
    }
    else std::cout << "Brak\n";

    delete[] wplacajacy;
}

