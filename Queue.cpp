#include"Queue.h"
#include<iostream>
using namespace std;
template <typename T>
void Queue<T>::reSize(int cap)
{
	T* temp = new T[cap];
	int i;
	for (i = 0; i < cap&&i<noOfElement; i++)
	{
		temp[i] = data[i];
	}
	int rear1 = rear;
	int front1 = front;
	int noOfElement1 = noOfElement;
	this->~Queue();
	data = temp;
	front = front1;
	rear = rear1;
	capacity = cap;
	noOfElement = noOfElement1;
}
template <typename T>
Queue<T>::Queue()
{
	data = nullptr;
	capacity = 0;
	rear = 0;
	front = 0;
	noOfElement = 0;
}
template <typename T>
Queue<T>::~Queue()
{
	delete[]data;
	data = nullptr;
	capacity = 0;
	rear = 0;
	front = 0;
	noOfElement = 0;

}
template <typename T>
void Queue<T>::enQueue(T val)
{
	if (isFull())
	{
		reSize(capacity == 0 ? capacity = 1: (capacity * 2));
	}

	rear = (rear + 1) % capacity;
	data[rear] = val;
	noOfElement++;

}
template <typename T>
T Queue<T>::deQueue()
{
	if (isEmpty())
	{
		cout << "\nQueue is empty";
		exit(0);
	}
	T val = data[front];
	front = (front + 1) % capacity;
	noOfElement--;
	/*if (noOfElement>0 && noOfElement == capacity / 4)
		reSize(capacity / 2);*/
	return val;

}
template <typename T>
int Queue<T>::getNoOfElements()const
{
	return noOfElement;
}
template <typename T>
T Queue<T>::getElementAtFront()const
{
	return data[front];
}
template <typename T>
bool Queue<T>::isEmpty()const
{
	if (noOfElement)
		return false;
	else
		return true;

}
template <typename T>
bool Queue<T>::isFull()const
{
	if (noOfElement < capacity)
		return false;
	else
		return true;
}
template <typename T>
int Queue<T>::getCapacity()const
{
	return capacity;
}

template <typename T>
Queue<T>::Queue(const Queue& ref)
{
	if (ref.data == nullptr)
		return;
	capacity = ref.capacity;
	noOfElement = ref.noOfElement;
	front = ref.front;
	rear = ref.rear;
	data = new T[capacity];
	for (int i = 0; i < ref.capacity && i < noOfElement; i++)
	{
		data[i] = ref.data[i];
	}
}
template <typename T>
Queue<T>& Queue<T>::operator = (const Queue<T>& ref)
{
	if (this == &ref)
		return *this;
	this->~Queue();
	if (ref.data == nullptr)
		return *this;
	capacity = ref.capacity;
	noOfElement = ref.noOfElement;
	rear= ref.rear;
	front = ref.front;
	data = new T[capacity];
	for (int i = 0; i < capacity && i < noOfElement; i++)
	{
		data[i] = ref.data[i];
	}
	return *this;
}