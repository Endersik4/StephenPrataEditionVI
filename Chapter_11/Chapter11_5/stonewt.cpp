#include "stonewt.h"
#include <iostream>
using std::cout;

Stonewt::Stonewt(double lbs, int wyb)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	wybor = wyb;
}

Stonewt::Stonewt(int stn, double lbs, int wyb)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	wybor = wyb;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = wybor = 0;
}

Stonewt::~Stonewt()
{

}
Stonewt Stonewt::operator+(const Stonewt& s)
{
	Stonewt b;
	b.stone = this->stone + s.stone;
	b.pounds = this->pounds + s.pounds;
	b.wybor = this->wybor + s.wybor;
	if (b.wybor > 2) b.wybor = 2;
	else if (b.wybor < 0) b.wybor = 0;
	return b;
}
Stonewt Stonewt::operator-(const Stonewt& s)
{
	Stonewt b;
	b.stone = this->stone - s.stone;
	b.pounds = this->pounds - s.pounds;
	b.wybor = this->wybor - s.wybor;
	if (b.wybor > 2) b.wybor = 2;
	else if (b.wybor < 0) b.wybor = 0;
	return b;
}
Stonewt Stonewt::operator*(const Stonewt& s)
{
	Stonewt b;
	b.stone = this->stone * s.stone;
	b.pounds = this->pounds * s.pounds;
	b.wybor = this->wybor * s.wybor;
	if (b.wybor > 2) b.wybor = 2;
	else if (b.wybor < 0) b.wybor = 0;
	return b;
}

Stonewt operator*(const Stonewt& s, double a)
{
	Stonewt b;
	b.stone = a * s.stone;
	b.pounds = a * s.pounds;
	b.wybor = a * s.wybor;
	if (b.wybor > 2) b.wybor = 2;
	else if (b.wybor < 0) b.wybor = 0;
	return b;
}

Stonewt operator*(double a, const Stonewt& s)
{
	Stonewt b;
	b.stone = a * s.stone;
	b.pounds = a * s.pounds;
	b.wybor = a * s.wybor;
	if (b.wybor > 2) b.wybor = 2;
	else if (b.wybor < 0) b.wybor = 0;
	return b;
}

ostream& operator<<(ostream& os, const Stonewt& s)
{
	if (s.wybor == 0)
	{
		os << s.stone << " kamieni\n";
	}
	else if (s.wybor == 1)
	{
		os << int(s.pounds) << " funtow\n";
	}
	else if (s.wybor == 2)
	{
		os << s.pounds << " funtow\n";
	}
	else os << "Podano bledny wybor reprezentacji\n";
	return os;
}
