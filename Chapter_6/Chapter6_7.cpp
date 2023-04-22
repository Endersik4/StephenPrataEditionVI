// Rozdzial_6_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>

std::string slowa;
int spol, samo, bez;
int main()
{
    std::cout << "Podawaj slowa (pojedyczne q konczy)\n";
    while (std::cin>>slowa) {
        if (slowa[0] == 'q') break;
        if (isalpha(slowa[0]))
        {
            slowa[0] = tolower(slowa[0]);
            switch (slowa[0])
            {
                //samogloski
            case 'a': samo++; break;
            case 'e': samo++; break;
            case 'y': samo++; break;
            case 'i': samo++; break;
            case 'o': samo++; break;
            case 'u': samo++; break;
            default: spol++; break; //spolgloski
            }
        }
        else bez++;
    }
    std::cout << spol << " slow zaczyna sie od spolglosek.\n";
    std::cout << samo << " slow zaczyna sie od samoglosek.\n";
    std::cout << bez << " slow nie zalicza sie do zadnej z tych kateogrii.\n";
}

