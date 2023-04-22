// Rozdzial_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int pierwsza, druga, suma = 2;
    std::cout << "Podaj dwie liczby calkowite: ";
    std::cin >> pierwsza >> druga;
    if (pierwsza > druga)
    {
        for (int i = pierwsza; i > druga; i--)
        {
            suma += i;
        }
    }
    else for (int i = druga; i > pierwsza; i--) { suma += i; }
    std::cout << "Suma liczb calkowitych podanego zakresu wynosi: " << suma << std::endl;
}


