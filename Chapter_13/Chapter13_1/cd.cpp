#include "cd.h"
#include <iostream>

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	strcpy_s(performers, s1);
	strcpy_s(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	strcpy_s(performers, d.performers);
	strcpy_s(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	strcpy_s(performers, "Brak nazwy");
	strcpy_s(label, "Brak etykiety");
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
	using std::cout;
	using std::endl;
	cout << "Nazwa performes: " << performers << endl;
	cout << "Nazwa etykiety: " << label << endl;
	cout << "Wartosc selection: " << selections << endl;
	cout << "Wartosc playtime: " << playtime << endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d) return *this;
	strcpy_s(performers, d.performers);
	strcpy_s(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
