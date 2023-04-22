#include "cd.h"
#include <iostream>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(performers, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[1];
	performers[0] = '\0';
	label = new char[1];
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
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

	delete[] performers;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);

	delete[] label;
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);

	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
