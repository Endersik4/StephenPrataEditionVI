#include "emp.h"

void abstr_emp::ShowAll() const
{
	std::cout << "Imie: " << fname << std::endl;
	std::cout << "Nazwisko: " << lname << std::endl;
	std::cout << "Zawod: " << job << std::endl;
}

void abstr_emp::SetAll()
{
	using std::cout;
	using std::cin;
	cout << "Podaj imie: ";
	cin >> fname;
	cout << "Podaj nazwisko: ";
	cin >> lname;
	cout << "Podaj wykonywany zawod: ";
	cin >> job;
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
{
	os << "Imie: " << e.fname << "\nNazwisko: " << e.lname;
	return os;
}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Liczba pracownikow ktorymi zarzadza: " << inchargeof << std::endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Podaj ilosc pracownikow ktorymi zarzadza: ";
	std::cin >> inchargeof;
}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Przesyla raport do: " << reportsto << std::endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Podaj do kogo przesyla raport: ";
	std::cin >> reportsto;
}

void highfink::ShowAll() const
{
	using std::cout;
	cout << "-Glowny donosiciel-\n";
	abstr_emp::ShowAll();
	cout << "Ilosc pracownikow ktorymi zarzadza: " << manager::InChargeOf() << std::endl;
	cout << "Przesyla raport do: " << fink::ReportsTo() << std::endl;
}

void highfink::SetAll()
{
	using std::cout;
	cout << "-Glowny donosiciel-\n";
	abstr_emp::SetAll();
	std::cout << "Podaj ilosc pracownikow ktorymi zarzadza: ";
	std::cin >> manager::InChargeOf();
	std::cout << "Podaj do kogo przesyla raport: ";
	std::cin >> fink::ReportsTo();

}
