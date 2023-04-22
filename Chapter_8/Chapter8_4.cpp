// Rozdzial_8_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
    char* str; //lancuch
    int ct; //dlugosc lancucha
};

void set(stringy & bean, const char * test);
void show(const stringy & bean, const int ile = 1);
void show(const char* bean, const int ile = 1);

int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe!");
    delete[] beany.str;
    beany.str = nullptr;
    return 0;
}

void set(stringy& bean, const char* test)
{
    bean.str = new char[strlen(test) + 1];
    strcpy_s(bean.str, (strlen(test)+1), test);
    bean.ct = strlen(test);
}

void show(const stringy& bean, const int ile)
{
    for (int i = 0; i != ile; i++)
    {
        cout << "Lanuch: ";
        cout << bean.str << std::endl;
    }
}

void show(const char* bean, const int ile)
{
    for (int i = 0; i != ile; i++)
    {
        cout << "Lanuch: ";
        cout << bean << std::endl;
    }
}
