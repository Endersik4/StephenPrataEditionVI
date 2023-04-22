// Rozdzial_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>

char znak;
std::string napis;

int main()
{
    std::cout << "Wpisuj rozne znaki z klawiatury (@ - konczy dzialanie programu): ";
    std::cin.get(znak);
    while (znak != 64)
    {
        if (isalpha(znak))
        {
                if (isupper(znak)) 
                {
                    znak = tolower(znak);
                    napis += znak;
                }
                else
                {
                    znak = toupper(znak);
                    napis += znak;
                }
        }
        std::cin.get(znak);
    }
    std::cout << napis << std::endl;
    std::cout << "KONIEC";
}

