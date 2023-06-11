#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
//template <typename T>
//class Queue
//{
//	int rear;
//	int front;
//	int capacity;
//	int noOfElement;
//	T* data;
//	void reSize(int);
//public:
//	Queue();
//	~Queue();
//	void enQueue(T);
//	T deQueue();
//	T getNoOfElement();
//	T getElementAtFront();
//	bool isEmpty();
//	bool isFull();
//	int getCapacity();
template<typename T>
class Queue
{
	int rear;
	int front;
	int capacity;
	int noOfElement;
	T* data;
	void reSize(int);
public:
	Queue();
	~Queue();
	Queue(const Queue<T>&);
	Queue<T>& operator = (const Queue<T>&);
	void enQueue(T);
	T deQueue();
	T getElementAtFront() const;
	bool isEmpty() const;
	bool isFull() const;
	int getNoOfElements() const;
	int getCapacity() const;

};
#endif
