#include "sales.h"
#include <iostream>

void SALES::setSales(SALES::Sales& s, const double ar[], int n)
{
	double min = ar[0];
	double max = ar[0];
	double srednia = ar[0];
	for (int i = 1; i != n; i++)
	{
		if (min > ar[i]) min = ar[i];
		if (max < ar[i]) max = ar[i];
		srednia += ar[i];
	}
	srednia /= n;
	s.sales[0] = min;
	s.sales[1] = s.sales[2] = s.sales[3] = 0.0;
	s.average = srednia;
	s.max = max;
	s.min = min;
}

void SALES::setSales(SALES::Sales& s)
{
	using namespace std;
	double min = 0.0;
	double max = 0.0;
	double srednia = 0.0;

	cout << "Podaj 4 dane dla 4 kwartalow: ";
	for (int i = 0; i != 4; i++)
	{
		cout << "Kwartal #" << i+1 << endl;
		cin >> s.sales[i];
		if (i == 0)
		{
			min = s.sales[i];
			max = s.sales[i];
			srednia = s.sales[i];
		}
		else
		{
			if (min > s.sales[i]) min = s.sales[i];
			if (max < s.sales[i]) max = s.sales[i];
			srednia += s.sales[i];
		}
	}
	srednia /= 4;
	s.average = srednia;
	s.max = max;
	s.min = min;
}

void SALES::showSales(const SALES::Sales& s)
{
	using namespace std;
	for (int i = 0; i != 4; i++)
		cout << "Wartosc kwartalu #" << i << " wynosi: " << s.sales[i] << endl;
	cout << "Sprzedaze: \n";
	cout << "Srednia: " << s.average << endl;
	cout << "Minimalna: " << s.min << endl;
	cout << "Maksymalna: " << s.max << endl;

}
