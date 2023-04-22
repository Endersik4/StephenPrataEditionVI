#include "tv.h"
#include <iostream>

bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else return false;
}

bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	else return false;
}

void Tv::chanup()
{
	if (channel < maxchannel) channel++;
	else channel = 1;
}

void Tv::chandown()
{
	if (channel > 1) channel--;
	else channel = maxchannel;
}

void Tv::settings() const
{
	using std::cout;
	using std::endl;
	cout << "Telewizor jest " << (state == Off ? "Wylaczaony" : "Wlaczony") << endl;
	if (state == On)
	{
		cout << "Glosnosc = " << volume << endl;
		cout << "Program = " << channel << endl;
		cout << "Tryb = " << (mode == Antenna ? "antena" : "kabel") << endl;
		cout << "Wejscie = " << (input == TV ? "TV" : "DVD") << endl;
	}
}

void Tv::zmien_tryb(Remote& r)
{
	if (state == On)
	{
		r.ustaw_tryb();
	}
	else std::cout << "Nie mozna zmienic trybu pilota - telewizor jest wylaczony.\n";
}

void Remote::ustaw_tryb()
{
	if (tryb == normal) tryb = inter;
	else tryb = normal;
	std::cout << "Zmieniono tryb pilota.\n";
}

void Remote::pokaz_tryb() const
{
	std::cout << "Tryb pilota: " << (tryb == normal ? "normalny" : "interaktywny") << std::endl;
}
