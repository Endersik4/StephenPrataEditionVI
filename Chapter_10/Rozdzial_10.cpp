// Rozdzial_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class rachunek
{
private:
    std::string nazwisko;
    std::string numer_rachunku;
    double saldo;
public:
    rachunek() = default;
    rachunek(const std::string & n, const std::string & nr, double s)
    {
        nazwisko = n;
        numer_rachunku = nr;
        saldo = s;
    }

    void wyswietl() const
    {
        std::cout << "Nazwisko klienta: " << nazwisko << std::endl;
        std::cout << "Numer Rachunku klienta: " << numer_rachunku << std::endl;
        std::cout << "Saldo klienta: " << saldo << std::endl;
    }

    void wplata(double wplata)
    {
        saldo += wplata;
        std::cout << "Wplacono " << wplata << "zl. \nSaldo po wplacie: " << saldo << std::endl;
    }

    void wyplata(double wyplata)
    {
        if (wyplata < saldo)
        {
            saldo -= wyplata;
            std::cout << "Wyplacono " << wyplata << "zl. \nZostalo: " << saldo << std::endl;
        }
        else
        {
            std::cout << "NIe wystarczajaca ilosc srodkow.\n";
        }
    }


};

int main()
{
    using namespace std;

    string nazwa, nr;
    double saldo;

    cout << "Podaj nazwisko klienta: ";
    getline(cin, nazwa);
    cout << "Podaj nr rachunku klienta: ";
    getline(cin, nr);
    cout << "Podaj saldo klienta: ";
    cin >> saldo;
    
    rachunek klient1(nazwa, nr, saldo);
    klient1.wyswietl();
    klient1.wplata(55.2);
    klient1.wyplata(22);
    klient1.wyswietl();
}
