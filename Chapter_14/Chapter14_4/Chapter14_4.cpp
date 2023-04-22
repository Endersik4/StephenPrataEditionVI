// Rozdzial_14_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "person.h"

const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Person* lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Podaj osobe:\n"
            << "r: rewolwerowiec  p: pokerzysta  "
            << "z: zly typek  w:wyjście\n";
        cin >> choice;
        while (strchr("rpzw", choice) == NULL)
        {
            cout << "Wpisz r, p, z lub w: ";
            cin >> choice;
        }
        if (choice == 'w')
            break;
        switch (choice)
        {
        case 'r': lolas[ct] = new Gunslinger;
            break;
        case 'p': lolas[ct] = new PokerPlayer;
            break;
        case 'z': lolas[ct] = new BadDude;
            break;
        default: lolas[ct] = nullptr;
        }
        cin.get();
        lolas[ct]->Ustaw();
    }

    cout << "\nLista pracowników:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }
    cout << "Koniec.\n";
    return 0;
}