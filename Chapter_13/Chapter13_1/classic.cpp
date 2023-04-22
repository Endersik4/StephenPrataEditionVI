#include "classic.h"
#include <iostream>

Classic::Classic(const char* s3, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x)
{
	strcpy_s(main_event, s3);
}

Classic::Classic(const Classic& c) : Cd(c)
{
	strcpy_s(main_event, c.main_event);
}

Classic::Classic()
{
	strcpy_s(main_event, "Brak tytulu");
}

Classic::~Classic()
{
}

void Classic::Report() const
{
	using std::cout;
	using std::endl;
	Cd::Report();
	cout << "Tytul glownego utworu: " << main_event << endl;
}

Classic& Classic::operator=(const Classic& c)
{
	if (this == &c) return *this;
	Cd::operator=(c);
	strcpy_s(main_event, c.main_event);
	return *this;
}
