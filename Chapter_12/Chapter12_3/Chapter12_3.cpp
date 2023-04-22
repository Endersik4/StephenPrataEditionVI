// Rozdzial_12_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stock20.h"
const int STKS = 4;
int main()
{
	Stock stocks[STKS] = { Stock("NanoSmart", 12, 20.0),
		Stock("BurakPOL", 200, 2.0),
		Stock("GruzPOL", 130, 3.25),
		Stock("FutroPOL", 60, 6.5) };
	std::cout << "Portfel inwestycyjny:\n";
	int st;
	for (st = 0; st < STKS; st++)
	{
		std::cout << stocks[st];
	}
	const Stock* top = &stocks[0];
	for (st = 0; st < STKS; st++)
	{
		top = &top->topval(stocks[st]);
	}
	std::cout << "\nNajabrdziej wartosciowy pakiet: \n";
	std::cout << *top;
	return 0;

}

