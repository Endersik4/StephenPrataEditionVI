// Rozdzial_7_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
const int Max = 5;

double * fill_array(double* begin, const double* end);
void show_array(double* begin, const double* end);
void revalue(double r, double* begin, const double* end);

int main()
{
	using namespace std;
	double properties[Max];

	double * size = fill_array(properties, properties + Max);
	show_array(properties, size);
	if (size > 0)
	{
		cout << "Podaj czynnik  zmiany wartosci: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Niepoprawna wartosc, podaj liczbe: ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Gootwe\n";
	cin.get();
	return 0;
}

double * fill_array(double* begin, const double* end)
{
	using namespace std;
	double temp;
	double *i;
	int ile = 0;
	for (i = begin; i < end; i++, ile++)
	{
		cout << "Podaj wartosc nr " << (ile + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprwoadzaenie danych przerwane.\n";
			break;
		}
		else if (temp < 0)
			break;
		*i = temp;
	}

	return i-1;
}

void show_array(double* begin, const double* end)
{
	const double* i;
	int ile = 0;
	using namespace std;
	for (i = begin; i <= end; i++, ile++)
	{
		cout << "Nieruchomosc nr " << (ile + 1) << ": ";
		cout << *i << endl;
	}
}

void revalue(double r, double* begin, const double* end)
{
	for (double * i = begin; i <= end; i++)
	{
		*i *= r;
	}
}
