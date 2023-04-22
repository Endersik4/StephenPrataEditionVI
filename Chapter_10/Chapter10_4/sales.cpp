#include "sales.h"
#include <iostream>

SALES::Sales::Sales()
{
	Sales::setSales();
}

SALES::Sales::Sales(const double ar[], int n)
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
	sales[0] = min;
	sales[1] = sales[2] = sales[3] = 0.0;
	average = srednia;
	Sales::max = max;
	Sales::min = min;
}

void SALES::Sales::setSales()
{
	using namespace std;
	double min = 0.0;
	double max = 0.0;
	double srednia = 0.0;

	cout << "Podaj 4 dane dla 4 kwartalow: ";
	for (int i = 0; i != 4; i++)
	{
		cout << "Kwartal #" << i + 1 << endl;
		cin >> sales[i];
		if (i == 0)
		{
			min = sales[i];
			max = sales[i];
			srednia = sales[i];
		}
		else
		{
			if (min > sales[i]) min = sales[i];
			if (max < sales[i]) max = sales[i];
			srednia += sales[i];
		}
	}
	srednia /= 4;
	average = srednia;
	Sales::max = max;
	Sales::min = min;
}

void SALES::Sales::showSales()
{
	using namespace std;
	for (int i = 0; i != 4; i++)
		cout << "Wartosc kwartalu #" << i << " wynosi: " << sales[i] << endl;
	cout << "Sprzedaze: \n";
	cout << "Srednia: " << average << endl;
	cout << "Minimalna: " << min << endl;
	cout << "Maksymalna: " << max << endl;
}
