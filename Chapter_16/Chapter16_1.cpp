// Rozdzial_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool palindrom(std::string& pali) {
    int j = pali.length()-1;
    for (int i = 0; i != pali.length(); i++, j--)
    {
        if (pali[i] != pali[j]) return false;
    }
    return true;
}

int main()
{
    using std::cout;
    using std::cin;
    std::string slowo;
    cout << "Podaj jakies slowo: ";
    while (cin >> slowo)
    {
        cout << "Podane slowo " << (palindrom(slowo) == true ? "jest " : "nie jest ") << "palindromem\n";
        cout << "Podaj jakies slowo: ";
    }
    
}

