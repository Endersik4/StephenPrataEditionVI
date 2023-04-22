#include "stonewt.h"
#include <iostream>
using std::cout;

Stonewt::Stonewt(double lbs)
{
	stone = int (lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{

}

void Stonewt::show() const
{
	cout << "Waga w funtach: "<<pounds<<" | Waga w kamieniach: "<<stone<<" reszta "<<pds_left<<"\n";
}

bool Stonewt::operator==(const Stonewt& s)
{
	if (pounds == s.pounds) return true;
	else return false;
}

bool Stonewt::operator!=(const Stonewt& s)
{
	if (pounds != s.pounds) return true;
	else return false;
}

bool Stonewt::operator>(const Stonewt& s)
{
	if (pounds > s.pounds) return true;
	else return false;
}

bool Stonewt::operator<(const Stonewt& s)
{
	if (pounds < s.pounds) return true;
	else return false;
}

bool Stonewt::operator>=(const Stonewt& s)
{
	if (pounds >= s.pounds) return true;
	else return false;
}

bool Stonewt::operator<=(const Stonewt& s)
{
	if (pounds <= s.pounds) return true;
	else return false;
}
