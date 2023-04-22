// Rozdzial_12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cow.h"


int main()
{
    Cow c1("UgaBuga", "ASd",  23), c2;
    std::cout << "Cow stworzona konstruktorem z argumentami\n";
    c1.ShowCow();
    std::cout << "Cow2 stworzona za pomoca przypisania\n";
    c2 = c1;
    c2.ShowCow();
    std::cout << "Cow3 stworzona konstruktora z argumentem Cow\n";
    Cow c3(c2);
    c3.ShowCow();
}
