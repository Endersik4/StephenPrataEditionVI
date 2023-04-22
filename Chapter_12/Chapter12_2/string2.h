#pragma once
#ifndef STRING2_H_
#define STRING2_H_

#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char* s);
	String();
	String(const String&);
	~String();
	int length() const { return len; }

	String& operator=(const String&);
	String& operator=(const char*);
	char& operator[](int i);
	const char& operator[](int i) const;
	
	//ZADANIE 12.2
	friend String operator+(const char* st, const String& st1);
	friend String operator+(const String& st1, const char* st);
	friend String operator+(const String& st, const String& st1);
	//friend String& operator+(const String& st, const String& st2);
	void stringlow();
	void stringup();
	int liczba_wystapien(char a);
	////////////////
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);

	static int HowMany();
};

#endif 