#pragma once
#ifndef WINEC_H_
#define WINEC_H_

#include "pair.h"
#include <valarray>


class Wine : private std::string, private std::valarray<int>
{
private:
	using ArrayInt = std::valarray<int>;
	using PairArray = Pair<ArrayInt, ArrayInt>;
	PairArray trzymak;
	int liczba_rocznikow;
public:
	Wine() : std::string("Brak"), liczba_rocznikow(0), trzymak(ArrayInt(), ArrayInt()) {}
	Wine(const char* l, int y, const int yr[], const int bot[]) : std::string(l), liczba_rocznikow(y), trzymak(ArrayInt(yr, y), ArrayInt(bot, y)) {}
	Wine(const char* l, int y) : std::string(l), liczba_rocznikow(y), trzymak(ArrayInt(y), ArrayInt(y)) {}
	void GetBottles();
	const std::string& Label() const { return (const std::string&)*this; }
	const int sum() const;
	void Show() const;
};

#endif WINEC_H_