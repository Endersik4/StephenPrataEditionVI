#include <iostream>
#include <string>
using namespace std;
int main()
{
    string imie, nazw;
    cout << "Podaj imie: \n";
    getline(cin, imie);
    cout << "Podaj nazwisko: \n";
    getline(cin, nazw);
    nazw += ", " + imie;
    cout << nazw;
}