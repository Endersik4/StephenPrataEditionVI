#include "stock20.h"
#include <cstring>
#include <iostream>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

Stock::Stock()
{
	company = new char[1];
	company[0] = '\0';
	shares = 0;
	share_val = 0;
	total_val = 0;
}

Stock::Stock(const char* co, long n, double pr)
{
	company = new char[strlen(co) + 1];
	strcpy(company, co);

	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna; ustalam liczbe udzialow w " << company << " na 0.\n";
		shares = 0;
	}
	else shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	delete[] company;
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Liczba nabywanych udzialow nie moze byc ujemna. Transakcja przerwana.\n";
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num > 0)
	{
		cout << "Liczba sprzedawanych udzialow nie mzoe byc ujemna. Transakcja przerwana.\n";
	}
	else if(num > shares)
	{
		cout << "NIe mozesz sprzedac wiecej udzialow, niz posiadasz! Transakcja przerwana.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

const Stock& Stock::topval(const Stock& s) const
{
	if (s.total_val > total_val) return s;
	else return *this;
}

std::ostream& operator<<(std::ostream& os, const Stock& s)
{
	using namespace std;
	ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = os.precision(3);
	os << "Spolka: " << s.company << " Liczba udzialow: " << s.shares << '\n' << "Cena udzialu: " << s.share_val << " zl";
	os.precision(2);
	os << " LAczna wartosc udzialow: " << s.total_val << " zl" << '\n';
	os.setf(orig, ios_base::floatfield);
	os.precision(prec);
	return os;
}
