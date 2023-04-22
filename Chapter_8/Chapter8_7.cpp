// Rozdzial_8_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <typename T>
T SumArray(const T arr[], int n);

template <typename T>
T SumArray(const T* arr[], int n);

struct debts {
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = { 13, 31, 103, 301, 310, 130 };
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    const double* pd[3];

    for (int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }

    cout << "Ilosc rzeczy pana E.: " << SumArray(things, 6) << endl;
    
    cout << "Wyliczanie dlugow pana E.: " << SumArray(pd, 3) << endl;

    return 0;
}

template<typename T>
T SumArray(const T arr[], int n)
{
    T suma = 0;
    for (int i = 0; i != n; i++)
    {
        suma += arr[i];
    }
    return suma;
}

template<typename T>
T SumArray(const T* arr[], int n)
{
    T suma = 0;
    for (int i = 0; i != n; i++)
    {
        suma += *arr[i];
    }
    return suma;
}
