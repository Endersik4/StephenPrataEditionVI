// Rozdzial_12_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stack.h"

int main()
{
    using namespace std;
    Stack s1(6);
    Stack s2(1);
    Stack s3;
    cout << "Sprawdzanie czy stack S1 jest pusty: " << ((s1.isempty()) ? "Tak" : "Nie") << endl;
    cout << "Sprawdzanie czy stack S1 jest pelny: " << ((s1.isfull()) ? "Tak" : "Nie") << endl;

    cout << s1.r_top() << endl;
    cout << "Dodanie jednego elementu do S1: " << s1.push(25) << endl;
    cout << s1.r_top() << endl;
    cout << "Dodanie kolejnego elementu do S1: " << s1.push(45) << endl;
    cout << s1.r_top() << endl;
    cout << "Dodanie kolejnego elementu do S1: " << s1.push(65) << endl;
    cout << s1.r_top() << endl;
    cout << "Dodanie kolejnego elementu do S1: " << s1.push(15) << endl;
    cout << s1.r_top() << endl;
    cout << "\nTak aktualnie wyglada stos: " << endl;
    cout << s1 << endl;

    cout << "-Kopiowanie stosu S1-" << endl;
    Stack s4(s1);

    Item a, b;
    cout << s1.r_top() << endl;
    cout << "Usuwanie jednego elementu z S1: " << s1.pop(a) << endl;
    cout << s1.r_top() << endl;
    cout << "Usuniety element: " << a << endl;
    cout << "Usuwanie kolejnego elementu z S1: " << s1.pop(b) << endl;
    cout << "Usuniety element: " << b << endl;
    cout << "\nTak aktualnie wyglada stos: " << endl;
    cout << s1 << endl;

    cout << "Przypisanie s2 do s3: ";
    s3 = s2;
    cout << "\nTak aktualnie wyglada stos: " << endl;
    cout << s3 << endl;

    //cout << "Sprawdzanie czy stack S1 jest pusty: " << s1.isempty() << endl;
    //cout << "Sprawdzanie czy stack S1 jest pelny: " << s1.isfull() << endl;
}
