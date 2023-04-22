#include <iostream>
#include <string>
#include "golf.h"

golf::golf()
{
	using namespace std;
	cout << "Podaj nazwisko: ";
	cin.getline(fullname, 40);
	cout << "Podaj handicap: ";
	cin >> handicup;
}

golf::golf(const char* name, int hc)
{
	strcpy_s(fullname, name);
	handicup = hc;
}

void golf::handicup_f(int hc)
{
	handicup = hc;
}

void golf::showgolf() const
{
	if (fullname)
	{
		std::cout << "Nazwa: " << fullname << std::endl;
	}
	else std::cout << "NIe podano nazwy." << std::endl;

	std::cout << "Handicap: " << handicup << std::endl;
}
