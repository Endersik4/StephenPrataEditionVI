#pragma once
const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicup;
};

void setgolf(golf& g, const char* name, int hc);

void setgolf(golf& g);

void handicup(golf& g, int hc);

void showgolf(const golf& g);
