// Rozdzial_10_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "sales.h"

using namespace SALES;

int main()
{
    double ar[10] = { 2,4,5,2.5,4.2,11.5,25.4, 5, 2, 10 };
    Sales inter, nieinter(ar, 10);
    std::cout << "Sales stworzony interaktywnie:\n";
    inter.showSales();

    std::cout << "Sales stworzony nieinteraktywnie:\n";
    nieinter.showSales();
}
