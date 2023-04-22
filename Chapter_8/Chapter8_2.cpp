// Rozdzial_8_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Batonik
{
    const char * producent;
    double waga;
    int kalorie;
};

void wpisanie(Batonik& bat, const char* prod = "Millennium Munch", double wag = 2.85, int kalor = 350);
void wypisanie(const Batonik& bat);

int main()
{
    Batonik mars, twix;
    std::cout << "Twix: \n";
    wpisanie(twix, "Twix", 3.2, 366);
    wypisanie(twix);
    std::cout << "Mars: \n";
    wpisanie(mars, "Mars", 3.7, 455);
    wypisanie(mars);

}

void wpisanie(Batonik& bat, const char* prod, double wag, int kalor)
{
    bat.producent = prod;
    bat.waga = wag;
    bat.kalorie = kalor;
}

void wypisanie(const Batonik& bat)
{
    std::cout << "Producent to " << bat.producent << std::endl;
    std::cout << "Waga batonika to " << bat.waga << std::endl;
    std::cout << "Kalorie to " << bat.kalorie << std::endl;
}
