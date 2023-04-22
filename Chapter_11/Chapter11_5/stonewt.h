#pragma once
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
using namespace std;

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 }; //liczba funtow na kamien
	int stone; //masa w calych kamieniach
	double pds_left; //reszta w funtach
	double pounds; //masa w funtach
	int wybor; // 0 - liczba kamieni, 1 - liczbie funtow bez czesci ulamkowej, 2 - liczbie funtow z czescia ulamkowa
public:
	Stonewt(double lbs, int wyb);
	Stonewt(int stn, double lbs, int wyb);
	Stonewt();
	~Stonewt();
	Stonewt operator+(const Stonewt& s);
	Stonewt operator-(const Stonewt& s);
	Stonewt operator*(const Stonewt& s);
	friend Stonewt operator*(const Stonewt& s, double a);
	friend Stonewt operator*(double a, const Stonewt& s);
	friend ostream& operator<<(ostream& os, const Stonewt& s);

};

#endif