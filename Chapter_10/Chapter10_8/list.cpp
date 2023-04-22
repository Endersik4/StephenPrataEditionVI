#include "list.h"
#include <iostream>

List::List()
{
	top = 0;
}

bool List::add(const Item& a)
{
	if (top < MAX)
	{
		items[top++] = a;
		return true;
	}
	else return false;
}

void List::visit(void(*pf)(Item&), int ind)
{
	if (ind <= top)
	{
		(*pf)(items[ind]);
	}
	else std::cout << "Bledny index\n";
}

bool List::isempty() const
{
	return top == 0;
}

bool List::isfull() const
{
	return top == MAX;
}

void List::showList() const
{
	std::cout << "\nZawartosc listy: \n";
	for (int i = 0; i != top; i++)
	{
		std::cout << "Item #" << i << " = " << items[i]<<std::endl;
	}
}

void List::showList(const int ind) const
{
	std::cout << "\nWyswietlenie konkretnego elementu w liscie.\n";
	std::cout << "Element w indeksie [" << ind << "] = " << items[ind];
}
