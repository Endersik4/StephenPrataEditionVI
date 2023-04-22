// Rozdzial_16_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <fstream>
#include <vector>
using std::string;
std::vector<string>wordlist;

int main()
{
    using std::cout;
    using std::cin;
    using std::tolower;
    using std::endl;

    std::ifstream plik("plik.txt");
    string a;
    while (!plik.eof())
    {
        plik >> a;
        wordlist.push_back(a);
    }
    plik.close();
    const int NUM = wordlist.size();

    std::srand(std::time(0));
    char play;
    cout << "Czy chcesz zagrac w gre slowna? <t/n> ";
    cin >> play;
    play = tolower(play);
    while (play == 't')
    {
        string target = wordlist[std::rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Zgadnij moje skretne slowo. Ma ono " << length << " liter. Mozesz zgadywac\n po jednej literze naraz. Mozesz pomylic sie " << guesses << " razy.\n";
        cout << "Twoje slowo: " << attempt << endl;
        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Zgadnij litere: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {
                cout << "Ta litera juz byla. Sprobuj innej.\n"; 
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "Nie ma takiej litery!\n";
                --guesses;
                badchars += letter;
            }
            else
            {
                cout << "Poprawna litera!\n";
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Twoje slowo: " << attempt << endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)
                {
                    cout << "NIepoprawne litery: " << badchars << endl;        
                }
                cout << "Mozesz pomylic sie jeszcze " << guesses << " razy\n";
            }
        }
        if (guesses > 0) cout << "To juz cale slowo!\n";
        else cout << "NIestety to slowo to " << target << ".\n";

        cout << "Czy chcesz zagrac jsescze raz <t/n> ";
        cin >> play;
        play = tolower(play);
    }
    cout << "Koniec\n";

    return 0;
}
