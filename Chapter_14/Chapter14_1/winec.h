#pragma once
#ifndef WINEC_H_
#define WINEC_H_

#include "pair.h"
#include <valarray>


class Wine {
private:
	std::string nazwa;
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray; //Pierwsza skladowa - rocznik wina, Druga skladowa - liczba posiadancyh butelek
	PairArray trzymak;
	ArrayInt roczniki;
	ArrayInt butelki;
	int liczba_rocznikow;
public:
	Wine() : nazwa("Brak"), liczba_rocznikow(0), roczniki(), butelki(), trzymak() {}
	Wine(const char* l, int y, const int yr[], const int bot[]) : nazwa(l), liczba_rocznikow(y), roczniki(yr, y), butelki(bot, y) {}
	Wine(const char* l, int y) : nazwa(l), liczba_rocznikow(y), roczniki(y), butelki(y) {}
	void GetBottles();
	const std::string& Label() const {return nazwa;}
	const int sum() const;
	void Show() const;
};

#endif WINEC_H_