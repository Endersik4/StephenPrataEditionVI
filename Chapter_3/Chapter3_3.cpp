// Rozdzial_2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Podaj dlugosc geograficzna w stopniach, minutach i godzinach: \n";
    double stopnie, min, sek;
    std::cin >> stopnie >> min >> sek;
    double suma = stopnie + (min / 60) + ((sek/60) / 60);
    std::cout << stopnie << " stopni, " << min << " minut, " << sek << " sekund = " << suma << " Stopni" << std::endl;
}


