#pragma once
#ifndef LIST_H_
#define LIST_H_

typedef unsigned long Item;

class List
{
private:
	
	enum {MAX = 10};
	Item items[MAX];
	int top;
public:
	List();
	bool add(const Item & a);
	void visit(void (*pf)(Item&), int ind);
	bool isempty() const;
	bool isfull() const;
	void showList() const;
	void showList(const int ind) const;

};

#endif