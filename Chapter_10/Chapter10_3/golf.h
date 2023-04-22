#pragma once
#ifndef GOLF_H_
#define GOLF_H_

class golf {
private:
	static const int Len = 40;
	char fullname[Len];
	int handicup;
public:
	golf();
	golf(const char* name, int hc);
	void handicup_f(int hc);
	void showgolf() const;

};

#endif // !GOLF_H_