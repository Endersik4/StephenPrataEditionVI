// Rozdzial_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int a = 0;
void fun(const char* str, int param);

int main()
{
    std::cout << "Napis i parametr jest zerem: ";
    fun("Adamos Bartelos", 0);
    std::cout << "Napis i parametr jest zerem: ";
    fun("Adamos", 0);
    std::cout << "Napis i parametr jest zerem: ";
    fun("Bartelos", 0);
    std::cout << "Napis i parametr jest niezerowy (Funkcja wyswietla Napis tyle razy ile razy dotad wywolano ta funkcje):\n";
    fun("Bunga", 5);
    std::cout << "Napis i parametr jest zerem: ";
    fun("Karakan", 0);
}

void fun(const char* str, int param)
{
    if (param != 0)
    {
        for (int i = 0; i != a; i++)
        {
            std::cout << str << std::endl;
        }
    }
    else std::cout << str << std::endl;
    a++;
}