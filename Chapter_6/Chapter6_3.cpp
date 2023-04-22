// Rozdzial_6_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char opcja;
    std::cout << "r) roslinozerca       p) pianista\nd) drzewo         g) gra\n";
    std::cout << "Prosze podac litere r, p, d lub g: ";
    std::cin >> opcja;
    while (opcja != 'r' && opcja != 'p' && opcja != 'd' && opcja != 'g')
    {
        std::cout << "Prosze podac litere r, p, d lub g: ";
        std::cin >> opcja;
    }
    switch (opcja)
    {
    case 'r': std::cout << "Jedzonko Roslinek\n"; break;
    case 'p': std::cout << "Interstellar na Pianinie\n"; break;
    case 'd': std::cout << "Klon jest drzewem\n"; break;
    case 'g': std::cout << "Cyberpunk 2077\n"; break;
    default: std::cout << "Blad\n";
    }

}

