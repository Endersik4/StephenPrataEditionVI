// Rozdzial_7_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const char * Snames[Seasons] = { "Wiosna", "Lato", "Jesien", "Zima" };

//Podpunkt A
void fill(double wydatki[]);
void show(const double wydatki[]);

//Podpunkt B
struct tablica {
    double wydatki[Seasons];
};

void fill_b(tablica * wydatki);
void show_b(const tablica wydatki);
//

int main()
{
    double tab[Seasons];
    tablica tab2;

    std::cout << "-======PODPUNKT A)======-\n";
    fill(tab);
    show(tab);
    std::cout << "-======PODPUNKT B)======-\n";
    fill_b(&tab2);
    show_b(tab2);
    return 0;
}

void fill(double wydatki[])
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >> " << Snames[i] << " <<: ";
        cin >> wydatki[i];
    }
}

void show(const double wydatki[])
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << wydatki[i] << " zl" << endl;
        total += wydatki[i];
    }
    cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}

//Podpunkt B
void fill_b(tablica * wydatki)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >> " << Snames[i] << " <<: ";
        cin >> wydatki->wydatki[i];
    }
}

void show_b(const tablica wydatki)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << wydatki.wydatki[i] << " zl" << endl;
        total += wydatki.wydatki[i];
    }
    cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}

