#include <iostream>
#include <string>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicup = hc;
}

void setgolf(golf& g)
{
	using namespace std;
	cout << "Podaj nazwisko: ";
	cin.getline(g.fullname, 40);
	cout << "Podaj handicap: ";
	cin >> g.handicup;
	if (*g.fullname == NULL) cout << "0\n";
	else cout<<"1\n";
}

void handicup(golf& g, int hc)
{
	g.handicup = hc;
}

void showgolf(const golf& g)
{
	if (g.fullname)
	{
		std::cout << "Nazwa: " << g.fullname << std::endl;
	}
	else std::cout << "NIe podano nazwy." << std::endl;
	
	std::cout << "Handicap: " << g.handicup << std::endl;
}
