#pragma once
#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
	static const int LEN = 19;
	char name[LEN];
	int sytosc;
public:
	Plorg(const char* na = "Plorga", int syt = 50);
	void jesc(int syt);
	void gada() const;
};

#endif // !PLORG_H_
