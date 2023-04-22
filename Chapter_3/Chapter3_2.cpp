// Rozdzial_2_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Podaj wzrost w stopach i calach oraz wage w funtach: \n";
    double stopy, cale, funty;
    std::cin >> stopy >> cale >> funty;
    stopy *= 12;//cale
    stopy *= 0.0254;//metry
    cale *= 0.0254; //metry
    funty /= 2.2; //kg
    std::cout << "Twoje BMI wynosi: " << funty / pow(stopy, 2) << std::endl;
}

