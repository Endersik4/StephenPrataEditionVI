#include "plorg.h"
#include <iostream>

Plorg::Plorg(const char* na, int syt)
{
	strcpy_s(name, na);
	sytosc = syt;
}

void Plorg::jesc(int syt)
{
	using namespace std;
	cout << name << " pojadl sobie " << syt << " punktow\n";
	sytosc += syt;
}

void Plorg::gada() const
{
	using namespace std;
	cout << "Plorg nazywac sie " << name << ". \n Najedzony byc na " << sytosc << " punktow\n";
}
