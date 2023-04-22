#include "complex0.h"

complex::complex()
{
	rzecz = 0;
	urojo = 0;
}

complex::complex(double a, double b)
{
	rzecz = a;
	urojo = b;
}

complex::~complex()
{
}

complex complex::operator+(const complex& c)
{
	complex a;
	a.rzecz = rzecz + c.rzecz;
	a.urojo = urojo + c.urojo;
	return a;
}

complex complex::operator-(const complex& c)
{
	complex a;
	a.rzecz = rzecz - c.rzecz;
	a.urojo = urojo - c.urojo;
	return a;
}

complex complex::operator*(const complex& c)
{
	complex a;
	a.rzecz = (rzecz * c.rzecz) - (urojo * c.urojo);
	a.urojo = (rzecz * c.urojo) + (urojo * c.rzecz);
	return a;
}

complex operator*(const complex& c, double x)
{
	complex a;
	a.rzecz = x * c.rzecz;
	a.urojo = x * c.urojo;
	return a;
}

complex operator*(double x, const complex& c)
{
	complex a;
	a.rzecz = x * c.rzecz;
	a.urojo = x * c.urojo;
	return a;
}

complex operator~(const complex& c)
{
	return complex(c.rzecz, -c.urojo);
}

ostream& operator<<(ostream& os, const complex& c)
{
	os << "(" << c.rzecz << "," << c.urojo << "i)";
	return os;
}

istream& operator>>(istream& is, complex& c)
{
	cout << "Skladowa rzeczywista: ";
	is >> c.rzecz;
	cout << "Skladowa urojona: ";
	is >> c.urojo;
	return is;
}
