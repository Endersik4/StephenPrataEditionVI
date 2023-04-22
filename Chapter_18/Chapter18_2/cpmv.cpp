#include "cpmv.h"

Cpmv::Cpmv()
{
	pi = new Info;
	pi->qcode = "Brak";
	pi->zcode = "Brak";
	std::cout << "Konstruktor Domyslny bez argumentow\n";
}

Cpmv::Cpmv(std::string q, std::string z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
	std::cout << "Konstruktor Domyslny z argumentami\n";
}

Cpmv::Cpmv(const Cpmv& cp)
{
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	std::cout << "Konstruktor kopiujacy\n";
}

Cpmv::Cpmv(Cpmv&& mv)
{
	pi = new Info;
	pi->qcode = mv.pi->qcode;
	pi->zcode = mv.pi->zcode;
	mv.pi->qcode = "\0";
	mv.pi->zcode = "\0";
	std::cout << "Konstruktor przenoszacy\n";
}

Cpmv::~Cpmv()
{
	std::cout << "Uzyto Destruktora\n";
	delete pi;
}

Cpmv& Cpmv::operator=(const Cpmv& cp)
{
	std::cout << "Przypisanie kopiujace\n";
	if (this == &cp) return*this;
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
}

Cpmv& Cpmv::operator=(Cpmv&& mv)
{
	std::cout << "Przypisanie przenoszace\n";
	if (this == &mv) return*this;
	delete pi;
	pi = new Info;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;

}

Cpmv Cpmv::operator+(const Cpmv& obj) const
{
	Cpmv konka;
	konka.pi->qcode = pi->qcode + obj.pi->qcode;
	konka.pi->zcode = pi->zcode + obj.pi->zcode;
	std::cout << "KOnkatenacja\n";
	return konka;
}

void Cpmv::Display() const
{
	if (pi)
	{
		std::cout << "QCODE = " << pi->qcode << std::endl;
		std::cout << "ZCODE = " << pi->zcode << std::endl;
	}
	else std::cout << "PI = " << pi << std::endl;
}
