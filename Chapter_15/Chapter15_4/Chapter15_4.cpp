// Rozdzial_15_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "sales.h"

int main()
{
    using namespace std;
    
    double vals1[12] = {
        1220, 1100, 1122, 2212, 1232, 2334,
        2884, 2393, 3302, 2922, 3002, 3544
    };

    double vals2[12] = {
        12, 11, 22, 21, 32, 34,
        28, 29, 33, 29, 32, 25
    };

    Sales sales1(2011, vals1, 12);
    LabeledSales sales2("Blogstar", 2012, vals2, 12);
    cout << "Pierwszy blok try:\n";
    try
    {
        int i;
        cout << "Rok = " << sales1.Year() << endl;
        for(i = 0; i < 12; i++)
        {
            cout << sales1[i]<<" ";
            if (i % 6 == 5) cout << endl;
        }
        cout << "Rok = " << sales2.Year() << endl;
        cout << "Etykieta = " << sales2.Label() << endl;
        for (i = 0; i <= 12; ++i) {
            cout << sales2[i] << " ";
            if (i % 6 == 5) cout << endl;
        }
        cout << "Koniec pierwszego bloku try.\n";

    }
    catch (exception& bad)
    {
        if (typeid(LabeledSales::nbad_index&) == typeid(bad))
        {
            LabeledSales::nbad_index & nbad = dynamic_cast<LabeledSales::nbad_index&>(bad);
            cout << nbad.what();
            cout << "Firma: " << nbad.label_val() << endl;
            cout << "Niepoprawny indeks: " << nbad.bi_val() << endl;
        }
        if (typeid(Sales::bad_index&) == typeid(bad))
        {
            Sales::bad_index& nbad = dynamic_cast<Sales::bad_index&>(bad);
            cout << nbad.what();
            cout << "Niepoprawny indeks: " << nbad.bi_val() << endl;
        }
    }
    cout << "\nKolejny blok try:\n";
    try
    {
        sales2[2] = 37.5;
        sales1[20] = 23345;
        cout << "Koniec drugiego bloku try.\n";
    }
    catch (exception& bad)
    {
        if (typeid(LabeledSales::nbad_index&) == typeid(bad))
        {
            LabeledSales::nbad_index& nbad = dynamic_cast<LabeledSales::nbad_index&>(bad);
            cout << nbad.what();
            cout << "Firma: " << nbad.label_val() << endl;
            cout << "Niepoprawny indeks: " << nbad.bi_val() << endl;
        }
        if (typeid(Sales::bad_index&) == typeid(bad))
        {
            Sales::bad_index& nbad = dynamic_cast<Sales::bad_index&>(bad);
            cout << nbad.what();
            cout << "Niepoprawny indeks: " << nbad.bi_val() << endl;
        }
    }
    cout << "Koniec\n";
    return 0;
}