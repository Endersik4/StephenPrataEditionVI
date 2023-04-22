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

void abstr_emp::writeall(std::ofstream& plik, int n)
{
	if (plik.is_open())
	{
		plik << "Nr: " << n << " | " << "Imie: " << fname << " | "<< "Nazwisko: " << lname << " | " << "Zawod: " << job;
	}
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

void employee::writeall(std::ofstream& plik, int n)
{
	abstr_emp::writeall(plik, n);
	if (plik.is_open()) plik << '\n';
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

void manager::writeall(std::ofstream& plik, int n)
{
	abstr_emp::writeall(plik, n);
	if (plik.is_open())
	{
		plik << " | " << "Ilosc zarzadzanymi osobami: " << inchargeof << '\n';
	}
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

void fink::writeall(std::ofstream& plik, int n)
{
	abstr_emp::writeall(plik, n);
	if (plik.is_open())
	{
		plik << " | " <<"Reportuje do: " << reportsto << '\n';
	}
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

void highfink::writeall(std::ofstream& plik, int n)
{
	abstr_emp::writeall(plik, n);
	if (plik.is_open())
	{
		plik << " | " << "Ilosc zarzadzanymi osobami: " << InChargeOf() << " | " << "Reportuje do: " << ReportsTo() << '\n';
	}
}
