// Rozdzial_17_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

class Store {
private:
    std::ofstream* plik;
public:
    Store(std::ofstream& a) : plik(&a) {}
    ~Store() {};
    Store operator()(const std::string& a)
    {
        if (plik->is_open())
        {
            size_t len = a.length();
            plik->write((char*)&len, sizeof(std::size_t));
            plik->write(a.data(), len);
            return *this;
        }
    }
};

void ShowStr(const std::string& a);
void GetStrs(std::ifstream& odczyt, std::vector<std::string>& ve);

int main()
{
    using namespace std;
    vector<string> vostr;
    string temp;

    cout << "Podaj lancuchy (aby zakonczyc, wprwoadz pusty wiersz):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Oto twoje dane wejsciowe.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    ofstream fout("lancuchy.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    
    fout.close();

    vector<string> vistr;
    ifstream fin("lancuchy.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "NIe mozna otwotrzyc pliku do odczytu.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nOto lancuchy odczytane z pliku: \n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;

}

void ShowStr(const std::string& a)
{
    std::cout << a << '\n';
}

void GetStrs(std::ifstream& odczyt, std::vector<std::string> &ve)
{
    char a ;
    std::string temp;
    size_t len;
   
    while (odczyt.read((char*)&len, sizeof(std::size_t)))
    {
        for (size_t i = 0; i != len; i++)
        {
            odczyt.read(&a, sizeof(char));
            temp.push_back(a);
        }
        ve.push_back(temp);
        temp.clear();
            
    }
}
