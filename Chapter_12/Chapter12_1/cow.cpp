#include "cow.h"
#include <iostream>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

using namespace std;

Cow::Cow()
{
	strcpy_s(name, "Brak");
	hobby = nullptr;
	weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wta)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wta;
}

Cow::Cow(const Cow& c)
{
	strcpy_s(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c) return *this;
	strcpy(this->name, c.name);
	delete[] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(this->hobby, c.hobby);
	this->weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout << "Imie: " << name << "\nHobby: " << hobby << "\nWaga: " << weight << endl;
}
