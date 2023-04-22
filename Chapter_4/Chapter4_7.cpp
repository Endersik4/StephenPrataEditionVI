// Rozdzial_4_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct pizza
{
    std::string firma;
    int srednica;
    double waga;

    pizza() = default;
    pizza(std::string f, int s, double w)
    {
        this->firma = f;
        this->srednica = s;
        this->waga = w;
    }

    void zapis()
    {
        using namespace::std;
        cout<< "Podaj nazwe firmy: ";
        getline(cin, this->firma);
        cout << "Podaj srednice pizzy owej firmy: ";
        cin >> this->srednica;
        cout << "POdaj wage pizzy: ";
        cin >> this->waga;
    }

    void wys()
    {
        std::cout << "\n1Nazwa Firmy: " << this->firma << "\nSrednica pizzy: " << this->srednica << "\nWaga pizzy: " << this->waga << std::endl;
    }
};

int main()
{   
    int ile;
    std::cout << "Podaj ile firm chcesz stworzyc: ";
    std::cin >> ile;
    pizza *firma = new pizza[ile];
    for (int i = 0; i != ile; i++) {firma[i].zapis();}
    for (int i = 0; i != ile; i++) {firma[i].wys();}
    delete[] firma;
    firma = nullptr;
}
