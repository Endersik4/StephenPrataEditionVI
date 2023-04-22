#pragma once
#ifndef CD_H_
#define CD_H_
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
class Cd {
private:
	char *performers;
	char *label;
	int selections;
	double playtime;
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	Cd& operator=(const Cd& d);
};

#endif 