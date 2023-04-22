#pragma once
#ifndef QUEUE_H_
#define QUEUE_H_

template <class Item>
class QueueTp
{
private:
	struct Node { Item item; struct Node* next; };
	enum { Q_SIZE = 10 };
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	QueueTp(const QueueTp& q) : qsize(0) {}
	QueueTp& operator=(const QueueTp& q) { return *this; }
public:
	QueueTp(int qs = Q_SIZE);
	~QueueTp();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item& item);
	bool dequeue(Item& item);
};

#endif 

template<class Item>
inline QueueTp<Item>::QueueTp(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

template<class Item>
inline QueueTp<Item>::~QueueTp()
{
	Node* temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template<class Item>
inline bool QueueTp<Item>::isempty() const
{
	return items == 0;
}

template<class Item>
inline bool QueueTp<Item>::isfull() const
{
	return items == qsize;
}

template<class Item>
inline int QueueTp<Item>::queuecount() const
{
	return items;
}

template<class Item>
inline bool QueueTp<Item>::enqueue(const Item& item)
{
	if (isfull()) return false;
	Node* add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL) front = add;
	else rear->next = add;
	rear = add;
	return true;
}

template<class Item>
inline bool QueueTp<Item>::dequeue(Item& item)
{
	if (front == NULL) return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0) rear = NULL;
	return true;
}
