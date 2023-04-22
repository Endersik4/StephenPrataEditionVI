// Rozdzial_16_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review {
    std::string title;
    int rating;
    double price;
};
bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool worseThen(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool cenaRosn(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool FillReview(std::shared_ptr<Review>& rr);
void ShowReview(const std::shared_ptr<Review>& rr);

int main()
{
    using namespace std;

    vector<shared_ptr<Review>> books;
    vector<shared_ptr<Review>> kopia;
    shared_ptr<Review> temp;
    kopia = books;

    while (FillReview(temp)) books.push_back(temp);
    int wybor;
    if (books.size() > 0)
    {
        cout << "\nJak chcesz wyswietlic liste ksiazek: "<<
            "\n(1 - normalnie, 2 - alfabetycznie, 3 - ocen rosnaco, 4 - ocen malejaca, \n5 - cen rosnaco, 6 - cen malejaco, 0 - zakoncz\n";
        while (cin >> wybor)
        {
            switch (wybor)
            {
            case 1: 
                for_each(kopia.begin(), kopia.end(), ShowReview);
                cout << "Tak jak wpisales: \nOcena\tKsiazka\tCena\n";
                break;
            case 2:
                sort(books.begin(), books.end());
                cout << "Posortowane wedlug tytulu:\nOcena\tKsiazka\tCena\n";
                break;
            case 3:
                sort(books.begin(), books.end(), worseThen);
                cout << "Posortowane wedlug ocen rosnaca:\nOcena\tKsiazka\tCena\n";
                break;
            case 4:
                sort(books.rbegin(), books.rend(), worseThen);
                cout << "Posortowane wedlug ocen malejaco:\nOcena\tKsiazka\tCena\n";
                break;
            case 5:
                sort(books.begin(), books.end(), cenaRosn);
                cout << "Posortowane wedlug cen rosnaco:\nOcena\tKsiazka\tCena\n";
                break;
            case 6:
                sort(books.rbegin(), books.rend(), cenaRosn);
                cout << "Posortowane wedlug cen malejaco:\nOcena\tKsiazka\tCena\n";
                break;
            case 0:
                break;
            default: cout << "Podaj poprawna opcje\n"; break;
            }
            if (wybor == 0) break;
            if (wybor > 1 && wybor <= 6) for_each(books.begin(), books.end(), ShowReview);
            cout << "\nJak chcesz wyswietlic liste ksiazek: " <<
                "\n(1 - normalnie, 2 - alfabetycznie, 3 - ocen rosnaco, 4 - ocen malejaca, \n5 - cen rosnaco, 6 - cen malejaco, 0 - zakoncz\n";
        }
    }
    else {
        cout << "Brak danych. ";
    }
    cout << "koniec.\n";
    return 0;
}

bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
    if (r1->title < r2->title)
    {
        return true;
    }
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool worseThen(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool cenaRosn(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
    if (r1->price < r2->price)
        return true;
    else
        return false;
}

bool FillReview(std::shared_ptr<Review>& rr)
{
    std::shared_ptr<Review> temp(new Review);
    rr = temp;
    std::cout << "Wpisz tytul ksiazki(koniec, aby zakonczyc): ";
    std::getline(std::cin, rr->title);
    if (rr->title == "koniec")
        return false;
    std::cout << "Wpisz ocene: ";
    std::cin >> rr->rating;
    std::cout << "Wpisz cene: ";
    std::cin >> rr->price;
    if (!std::cin)
        return false;
    while (std::cin.get() != '\n')
        continue;

    return true;
}

void ShowReview(const std::shared_ptr<Review>& rr)
{
    std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price <<std::endl;
}
