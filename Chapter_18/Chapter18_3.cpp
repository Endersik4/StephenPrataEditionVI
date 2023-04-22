// Rozdzial_18_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <initializer_list>
template <class T>
long double sum_values(std::initializer_list<T> a);

int main()
{
    using namespace std;
    cout << sum_values({ 15.4, 10.7, 9.0 }) << endl;

    cout << sum_values({ 20, 30, 19, 17, 45, 38 }) << endl;

    cout << sum_values<double>({ 'A', 70, 65.33, 22 }) << endl;
}

template<class T>
long double sum_values(std::initializer_list<T> a)
{
    T suma = NULL;
    for (auto c : a)
    {
        suma += c;
    }
    return suma;
}
