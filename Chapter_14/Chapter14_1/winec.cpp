#include "winec.h"

void Wine::GetBottles()
{
	using std::cout;
	using std::endl;
	using std::cin;
	cout << "Podaj roczniki butelek i podaj ilosc tych butelek: " << endl;
	for (int i = 0; i != liczba_rocznikow; i++)
	{
		cin >> roczniki[i];
		cin >> butelki[i];
	}
	trzymak.first() = roczniki;
	trzymak.second() = butelki;
}

const int Wine::sum() const
{
	return butelki.sum();
}

void Wine::Show() const
{
	using namespace std;
	cout << "Nazwa wina: " << nazwa << "\nLaczna liczba rocznikow: " << liczba_rocznikow<<"\n";
	for (int i = 0; i != liczba_rocznikow; i++)
	{
		cout << "Rocznik " << roczniki[i] << ": " << butelki[i] << " szt.\n";
	}
}