// Rozdzial_6_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

int main()
{
    std::fstream odczyt;
    odczyt.open("plik.txt");
    char znaki;
    int ile = 0;
    while (!odczyt.eof())
    {
        odczyt >> znaki;
        std::cout << znaki;
        ile++;
    }
    odczyt.close();
    std::cout << "\nW pliku jest " << ile << " znakow\n";
}
