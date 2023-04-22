// Rozdzial_6_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

int liczba_wplacajacych;
bool czy_sa_wspaniali, czy_sa_zwykli;
char znaki;
struct donejtorzy {
    std::string nazwisko;
    double ile;
};

int main()
{
    std::ifstream odczyt;
    odczyt.open("plik.txt");
    odczyt >> liczba_wplacajacych;
    
    donejtorzy* wplacajacy = new donejtorzy[liczba_wplacajacych];
    for (int i = 0; i != liczba_wplacajacych; i++)
    {
        odczyt.get(znaki);
        while (odczyt.get(znaki))
        {
            if (znaki == '\n') break;
            wplacajacy[i].nazwisko += znaki;
        }
        odczyt >> wplacajacy[i].ile;
        if (wplacajacy[i].ile >= 10000) czy_sa_wspaniali = true;
        else if (wplacajacy[i].ile < 10000) czy_sa_zwykli = true;
    }
    odczyt.close();

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

