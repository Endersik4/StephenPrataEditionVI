// Rozdzial_13_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "dma.h"

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;

	DMA* p_dma[4];
	char temp[200] = "Brak";
	
	int rating;
	char kind;

	for (int i = 0; i < 4; i++)
	{
		cout << "Podaj tytul etykiety: ";
		cin.getline(temp, 200);
		cout << "Podaj klase: ";
		cin >> rating;
		cout << "Wpisz 1 dla baseDMA, 2 dla lacksDMA lub 3 dla hasDMA: ";
		while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
			cout << "Wpisz 1, 2 lub 3: ";
		if (kind == '1')
			p_dma[i] = new baseDMA(temp, rating);
		else if (kind == '2') {
			char c_color[50] = "Brak";
			cout << "Podaj kolor: ";
			cin.get();
			cin.get(c_color, 50);
			p_dma[i] = new lacksDMA(c_color, temp, rating);
		}
		else
		{
			char c_style[50] = "Brak";
			cout << "Podaj styl: ";
			cin.get();
			cin.get(c_style, 50);
			p_dma[i] = new hasDMA(c_style, temp, rating);
		}
		while (cin.get() != '\n')
			continue;
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		p_dma[i]->View();
		cout << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		delete p_dma[i];
	}
	cout << "Gotowe.\n";

	return 0;
}

