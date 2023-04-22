#include "stack.h"
#include <iostream>

Stack::Stack(int n)
{
	size = n;
	top = 0;
	pitems = new Item[size];
}

Stack::Stack(const Stack& st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0; i != size; i++) pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item& item)
{
	if (top < size)
	{
		pitems[top++] = item;
		return true;
	}
	else
	{
		std::cout << "Nie mozna dodac elementu na stos Stack - Stack jest pelen.\n";
		return false;
	}
}

bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
	{
		std::cout << "Nie mozna zabrac elementu ze stos Stack - Stack jest pusty.\n";
		return false;
	}
}

Stack& Stack::operator=(const Stack& st)
{
	if (this == &st) return *this;
	size = st.size;
	top = st.top;
	delete[] pitems;
	pitems = new Item[size];
	for (int i = 0; i != size; i++) pitems[i] = st.pitems[i];
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Stack& st)
{
	for (int i = st.top-1; i >= 0; i--)
	{
		os << "Element stosu na indeksie [" << i << "]: ";
		os << st.pitems[i] << std::endl;
	}
	return os;
}
