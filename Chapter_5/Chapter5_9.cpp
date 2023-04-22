// Rozdzial_5_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>

std::string napis;
int ile;

int main()
{
    std::cout << "Podawaj slowa (kiedy skonczysz, napisz 'gotowe' \n";
    while (std::cin >> napis)
    {
        if (napis != "gotowe") ile++;
        else break;
    }
    std::cout << "Podano " << ile << " slow";
}