// Rozdzial_9_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "sales.h"

using namespace SALES;

int main()
{
    Sales inter, nieinter;
    std::cout << "Sales stworzony interaktywnie:\n";
    setSales(inter);
    showSales(inter);

    std::cout << "Sales stworzony nieinteraktywnie:\n";
    double ar[10] = { 2,4,5,2.5,4.2,11.5,25.4, 5, 2, 10};
    setSales(nieinter, ar, 10);
    showSales(nieinter);
}
