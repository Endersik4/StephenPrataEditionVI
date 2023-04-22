#pragma once
#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
using namespace std;

class complex
{
private:
	double rzecz; //rzeczywista
	double urojo; //urojona
public:
	complex();
	complex(double a, double b);
	~complex();
	complex operator+(const complex& c);
	complex operator-(const complex& c);
	complex operator*(const complex& c);
	friend complex operator~(const complex& c);
	friend complex operator*(const complex& c, double x);
	friend complex operator*(double x, const complex& c);
	friend ostream& operator<<(ostream& os, const complex& c);
	friend istream& operator>>(istream& is, complex& c);
};

#endif // !COMPLEX0_H_
