// Rozdzial_10_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "list.h"

void multi(Item& a) { a *= a; }
void add_2(Item& a) { a += a; }

int main()
{
	using namespace std;
	List L_1;
	cout<<"Czy lista L_1 jest pusta: "<< (L_1.isempty() ? "Tak" : "Nie") <<endl;
	cout << "Dodawniie randomwoych 10 elementow do listy. \n";
	for (int i = 0; i != 10; i++)
	{
		L_1.add(rand() % 100 + 1);
	}
	cout << "Czy lista L_1 jest pusta: " << (L_1.isempty() ? "Tak" : "Nie") << endl;
	cout << "Czy lista L_1 jest pelna: " << (L_1.isfull() ? "Tak" : "Nie") << endl;
	L_1.showList();
	L_1.visit(multi, 3);
	L_1.showList(3);
	L_1.visit(add_2, 7);
	L_1.showList(7);
	L_1.showList();
}

