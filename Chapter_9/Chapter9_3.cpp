// Rozdzial_9_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct chaff
{
    char dross[20];
    int slag;
};

void setChaff(chaff* a);
void showChaff(const chaff* a);

int main()
{
    using namespace std;

    char bufor[200];
    chaff* buffor_ptr = new (bufor) chaff[2];

    cout << "WARINT 1\n";
    for (int i = 0; i != 2; i++)
    {
        if (i > 0) cin.get();
        setChaff(&buffor_ptr[i]);
    }

    for (int i = 0; i != 2; i++)
    {
        showChaff(&buffor_ptr[i]);
    }

    cout << "\n\nWARINT 2\n";
    chaff* ptr = new chaff[2];
    for (int i = 0; i != 2; i++)
    {
        cin.get();
        setChaff(&ptr[i]);
    }

    for (int i = 0; i != 2; i++)
    {
        showChaff(&ptr[i]);
    }

    delete[] ptr;
    ptr = nullptr;
}

void setChaff(chaff* a)
{
    using namespace std;
    cout << "Wprowadz nazwe: ";
    char name[20];
    cin.getline(name, 20);
    strcpy_s(a->dross, name);

    cout << "Wprowadz slag (int): ";
    int slag_for;
    cin >> slag_for;
    a->slag = slag_for;
}

void showChaff(const chaff* a)
{
    using namespace std;
    cout << "\nNazwa: ";
    cout << a->dross;
    cout << "\nSlag: ";
    cout << a->slag;
}
