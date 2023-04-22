// Rozdzial_3_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
long double pop_sw, pop_pl;
int main()
{
    std::cout << "Podaj populacje Swiata: \n";
    std::cin >> pop_sw;
    std::cout << "Podaj populacje Polski: \n";
    std::cin >> pop_pl;
    std::cout << "Populacja polski stanowi " << (pop_pl * 100) / pop_sw << "% populacji swiata" << std::endl;
}

