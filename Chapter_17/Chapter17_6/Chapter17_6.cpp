// Rozdzial_17_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "emp.h"
#include <fstream>

int main(void)
{
    const int MAX = 10;
    abstr_emp* pc[MAX];
    ofstream plik1("dane.txt", ios::app);
    bool program_otwarty = false;
    
    ifstream sprawdza_2("czy.txt");
    int wybor;
    char a;
    sprawdza_2.get(a);
    sprawdza_2.close();
    ofstream sprawdza;
    sprawdza.open("czy.txt", ios::app);
    if (a == '1') program_otwarty = true;
    else
    {
        sprawdza.put('1');
        sprawdza.close();
    }
  
    if (program_otwarty == true)
    {
        cout << "DANE Z PLIKU:\n";
        ifstream odczyt("dane.txt", ios::app);
        while (!odczyt.eof())
        {
            char b;
            odczyt.get(b);
            cout << b;
        }
    }
    cout << "Wybierz typ obiektu jaki chcesz stworzyc: \n (1 - employee, 2 - manager, 3 - fink, 4 - highfink, 0 - koniec dzialania programu\n";
    for (int i = 0; i != 10; i++)
    {
        cin >> wybor;
        switch (wybor)
        {
        case 1: pc[i] = new employee();  break;
        case 2: pc[i] = new manager(); break;
        case 3: pc[i] = new fink(); break;
        case 4: pc[i] = new highfink(); break;
        default: pc[i] = nullptr;
        }
        if (wybor == 0) break;
        if (pc[i])
        {
            pc[i]->SetAll();
            pc[i]->ShowAll();
            pc[i]->writeall(plik1, wybor);
        }
        cout << "Wybierz typ obiektu jaki chcesz stworzyc: \n (1 - employee, 2 - manager, 3 - fink, 4 - highfink, 0 - koniec dzialania programu\n";
    }
    plik1.close();
    return 0;
}