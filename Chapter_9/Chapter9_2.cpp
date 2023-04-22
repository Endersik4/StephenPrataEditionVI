// Rozdzial_9_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void strcount(std::string str);

int main()
{
    using namespace std;
    string input;
    char next;
    cout << "Wprowadz wiersz (pusty wiersz konczy wprowadzanie):\n";
    while (getline(cin, input))
    {
        if (input == "") break;
        strcount(input);
        cout << "Wprowadz nastepny wiersz (pusty wiersz konczy wprowadzanie):\n";
    }
    cout << "Koniec:\n";
    return 0;
}

void strcount(std::string str)
{
    using namespace std;
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" zawiera ";
    total += str.length();
    cout << str.length() << " znakow\n";
    cout << "Lacznie " << total << " znakow\n";
}
