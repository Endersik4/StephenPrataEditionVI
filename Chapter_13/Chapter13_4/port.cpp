#include "port.h"

#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

Port::Port(const char* br, const char* st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strcpy_s(style, st);
	bottles = b;
}

Port::Port(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy_s(style, p.style);
	bottles = p.bottles;
}

Port& Port::operator=(const Port& p)
{
	if (this == &p) return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy_s(style, p.style);
	bottles = p.bottles;
	return *this;
}

Port& Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port& Port::operator-=(int b)
{
	if (bottles > 0) bottles -= b;
	return *this;
}

void Port::Show() const
{
	using namespace std;
	cout << "Marka: " << brand << endl;
	cout << "Rodzaj: " << style << endl;
	cout << "Butelek: " << bottles << endl;
}

ostream& operator<<(ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}
