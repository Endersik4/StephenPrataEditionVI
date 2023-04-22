// Rozdzial_8_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>

void toup(std::string& str);

int main()
{
    std::string napis;
    std::cout << "Podaj lancuch (q, aby skonyczc): ";
    while (getline(std::cin, napis))
    {
        if (napis == "q") break;
        toup(napis);
        std::cout << "Nastepny lanuch (q, aby skonczyc): ";
    }
    std::cout << "Do widzenia\n";
}

void toup(std::string& str)
{
    for (int i = 0; i != str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    std::cout << str << std::endl;
}

