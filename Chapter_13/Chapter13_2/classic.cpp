#include "classic.h"
#include <iostream>

Classic::Classic(const char* s3, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x)
{
	main_event = new char[strlen(s3) + 1];
	strcpy(main_event, s3);
}

Classic::Classic(const Classic& c) : Cd(c)
{
	main_event = new char[strlen(c.main_event) + 1];
	strcpy(main_event, c.main_event);
}

Classic::Classic()
{
	main_event = new char[1];
	main_event[0] = '\0';
}

Classic::~Classic()
{
	delete[] main_event;
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
	delete[] main_event;
	main_event = new char[strlen(c.main_event) + 1];
	strcpy(main_event, c.main_event);
	return *this;
}
