#pragma once
#ifndef CLASSIC_H_
#define CLASSIC_H_
#include "cd.h"

class Classic : public Cd
{
private:
	char main_event[50];
public:
	using Cd::Cd;
	Classic(const char* s3, const char* s1, const char* s2, int n, double x);
	Classic(const Classic& c);
	Classic();
	virtual ~Classic();
	virtual void Report() const;
	Classic& operator=(const Classic& c);
};

#endif 