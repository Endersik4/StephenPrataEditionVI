#include "winec.h"

void Wine::GetBottles()
{
	using std::cout;
	using std::endl;
	using std::cin;
	cout << "Podaj roczniki butelek i podaj ilosc tych butelek: " << endl;
	for (int i = 0; i != liczba_rocznikow; i++)
	{
		cout << "Rocznik: ";
		cin >> trzymak.first()[i];
		cout << "Ilosc: ";
		cin >> trzymak.second()[i];
	}
}

const int Wine::sum() const
{
	return trzymak.second().sum();
}

void Wine::Show() const
{
	using namespace std;
	cout << "Nazwa wina: " << (const std::string&)*this << "\nLaczna liczba rocznikow: " << liczba_rocznikow << "\n";
	for (int i = 0; i != liczba_rocznikow; i++)
	{
		cout << "Rocznik " << trzymak.first()[i] << ": " << trzymak.second()[i] << " szt.\n";
	}
}