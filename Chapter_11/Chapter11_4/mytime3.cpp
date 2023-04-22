#include "mytime3.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

const Time operator+(const Time& b, const Time& t)
{
	Time sum;
	sum.minutes = b.minutes + t.minutes;
	sum.hours = b.hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

const Time operator-(const Time& b, const Time& t)
{
	Time diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = b.minutes + 60 * b.hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}

const Time operator*(const Time& t, double n)
{
	Time result;
	long totalminutes = t.hours * n * 60 + t.minutes * n;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

ostream& operator<<(ostream& os, const Time& t)
{
	os << t.hours << " godzin, " << t.minutes << " minut";
	return os;
}
