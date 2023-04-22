// Rozdzial_16_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>

bool palindrom(std::string& pali) {
    pali.erase(std::remove_if(pali.begin(), pali.end(), isspace), pali.end());
    int j = pali.length() - 1;
    for (int i = 0; i != pali.length(); i++, j--)
    {
        if (isupper(pali[i]) == true) pali[i] = tolower(pali[i]);
        if (isupper(pali[j]) == true) pali[j] = tolower(pali[j]);
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
    while (std::getline(cin, slowo))
    {
        cout << "Podane slowo " << (palindrom(slowo) == true ? "jest " : "nie jest ") << "palindromem\n";
        cout << "Podaj jakies slowo: ";
    }

}

