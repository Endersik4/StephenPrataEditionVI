// Rozdzial_18_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cpmv.h"

int main()
{
    Cpmv one;
    std::cout << "Obiekt one:\n";
    one.Display();
    Cpmv two("first", "second");
    std::cout << "Obiekt two:\n";
    two.Display();
    std::cout << "\none = two:\n";
    one = two;
    std::cout << "Obiekt one:\n";
    one.Display();
    std::cout << "\nCpmv three = one + one:\n";
    Cpmv three = one + one;
    std::cout << "Obiekt three:\n";
    three.Display();
    std::cout << "Obiekt one:\n";
    one.Display();
    std::cout << "Obiekt two:\n";
    two.Display();
    Cpmv four = three;
    std::cout << "Obiekt four:\n";
    four.Display();
    four = std::move(two);
    std::cout << "Obiekt four po std::move(two):\n";
    four.Display();
    two.Display();
    std::cout << "Obiekt five po five(std::move(two)):\n";
    Cpmv five(std::move(four));
    return 0;
}
