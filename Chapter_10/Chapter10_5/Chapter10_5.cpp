// Rozdzial_10_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stack.h"
#include <cctype>

int main()
{
    using namespace std;
    Stack st;
    char ch;
    customer po = {"Bartelos Adamos", 14.0};
    double naleznosc = 0.0;

    cout << "Nacisnij D, aby dodac nowa platnosc. \n" << "P, aby usunac platnosc, lub K aby zakonczyc.\n";
    while (cin >> ch && toupper(ch) != 'K')
    {
        while (cin.get() != '\n')
        {
            continue;
        }
        if (!isalpha(ch))
        {
            cout << "\a";
            continue;
        }
        switch (ch)
        {
        case 'D': 
        case 'd':
            cout << "Poddaj nowa platnosc: ";
            cin >> po.payment;
            if (st.isfull())
                cout << "Stos peleN!\n";
            else
            {
                st.push(po);
           
            }
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "Stos pusty!\n";
            else
            {
                naleznosc += po.payment;
                st.pop(po);
                cout << "Platnosc " << po.payment << " zostala usunieta\n";
            }
            break;
        }
        cout << "Nacisnij D, aby dodac nowa platnosc. \n" << "P, aby usunac platnosc, lub K aby zakonczyc.\n";

    }
    cout << "Fajrant!\n";
    return 0;
}

