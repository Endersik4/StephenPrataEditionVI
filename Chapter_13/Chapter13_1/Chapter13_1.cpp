// Rozdzial_13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "classic.h"
using namespace std;

void Bravo(const Cd& disk);

int main()
{
    Cd c1("Beatle", "Capitol", 14, 35.5);
    Classic c2 = Classic("Sonata fortepianowa B-dur, Fantazja C-moll", "Alfred Brendel", "Philips", 2, 57.17);
    Cd* pcd = &c1;

    cout << "Bezposrednie uzycie obiektu:\n";
    c1.Report();
    c2.Report();

    cout << "Uzycie wskaznika na typ Cd:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    cout << "Wywolywanie funkcji z argumentem w postaci referencji do typu Cd:\n";
    Bravo(c1);
    Bravo(c2);

    cout << "Test przypisania: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd& disk)
{
    disk.Report();
}
