#pragma once
#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

class Person {
private:
	std::string imie;
	std::string nazwisko;
public:
	Person() : imie("Nie podano"), nazwisko("Nie podano") {}
	~Person() {};
	Person(const std::string& i, const std::string& n) : imie(i), nazwisko(n) {}
	virtual void Ustaw();
	virtual void Show() const = 0;
};

class Gunslinger : virtual public Person {
private:
	int naciecia_rewolwera;
	double czas_wyciagniecia_rew;
public:
	Gunslinger() : naciecia_rewolwera(0), czas_wyciagniecia_rew(0.0), Person() {}
	~Gunslinger() {}
	Gunslinger(int naciecie, double czas, const std::string& i, const std::string& n) : naciecia_rewolwera(naciecie), czas_wyciagniecia_rew(czas),
		Person(i, n) {}
	const double Draw() { return czas_wyciagniecia_rew; }
	virtual void Show() const;
	void Ustaw();
};

class Card {
private:
	std::string kolory[4] = { "kier", "pik", "trefl", "karo"};
	std::string kolor;
	int nr_karty;
public:
	Card();
	~Card() {}
	friend std::ostream& operator<<(std::ostream& os, const Card& c) {
		os << "Kolor karty: " << c.kolor;
		os << "\nNumer karty: " << c.nr_karty;
		return os;
	}
};

class PokerPlayer : virtual public Person {
private:
	Card karta;
public:
	PokerPlayer() : Person(), karta() {}
	PokerPlayer(std::string& i, std::string& n) : Person(i ,n), karta() {}
	~PokerPlayer() {}
	const Card& Draw() { return karta; }
	virtual void Show() const;
	void Ustaw();
};

class BadDude : public Gunslinger, public PokerPlayer {
public:
	BadDude() : Gunslinger(), PokerPlayer() {}
	BadDude(std::string& i, std::string& n, int na, double czas) : Gunslinger(na, czas, i, n), PokerPlayer(i, n) {}
	const double Gdraw() { return Gunslinger::Draw(); }
	const Card& Cdraw() { return PokerPlayer::Draw(); }
	virtual void Show() const;
	void Ustaw();
	~BadDude() {}
};

#endif PERSON_H_