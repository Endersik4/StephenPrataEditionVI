// Rozdzial_16_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Lotto(int nr_pol, int wybrane);

int main()
{
    using std::cout;
    using std::cin;
    std::vector<int>winners;
    int pola, losowe;
    cout << "Podaj liczbe pol na kuponie: ";
    cin >> pola;
    cout << "Podaj ilosc losowych liczb: ";
    cin >> losowe;
    winners = Lotto(pola, losowe);
    cout << "Wygrane liczby: ";
    for (int i = 0; i != winners.size(); i++)
    {
        cout << winners[i] << (i >= winners.size() ? " " : ", ");
    }

}

std::vector<int> Lotto(int liczba, int loso)
{
    std::vector<int> licz;
    for (int i = 1; i != liczba+1; i++) licz.push_back(i);
    std::random_shuffle(licz.begin(), licz.end());

    return std::vector<int>(licz.begin(), licz.begin()+loso);
}
