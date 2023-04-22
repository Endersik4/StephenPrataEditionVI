// Rozdzial_18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <initializer_list>

template <class T>
T average_list(std::initializer_list<T> a);
int main()
{
    using namespace std;

    auto q = average_list({ 15.4, 10.7, 9.0 });
    cout << q << endl;

    cout << average_list({ 20, 30, 19, 17, 45, 38 }) << endl;

    auto ad = average_list<double>({ 'A', 70, 65.33 });
    cout << ad << endl;
    return 0;
}

template<class T>
T average_list(std::initializer_list<T> a)
{
    T suma = NULL;
    int ile = 0;
    for (auto c : a)
    {
        suma += c;
        ile++;
    }
    suma /= ile;
    return T(suma);
}
