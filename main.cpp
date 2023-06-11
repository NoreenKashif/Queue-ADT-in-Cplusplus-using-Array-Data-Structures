#include"Queue.h"
#include<iostream>
using namespace std;
int main()
{
	Queue<int> q;
	q.enQueue(20);
	q.enQueue(43);
	q.enQueue(76);
	q.enQueue(56);
	q.enQueue(79);
	q.enQueue(87);
	cout<<q.getElementAtFront()<<"\n";//20
	cout << q.getNoOfElements() << "\n";//6
	cout << q.deQueue()<<"\n";//20
	cout << q.deQueue() << "\n";//43
	cout << q.deQueue() << "\n";//76
	cout << q.deQueue() << "\n";//56
	cout << q.deQueue() << "\n";//79
	cout << q.getElementAtFront();//87
	q.enQueue(23);
	q.enQueue(30);
	q.enQueue(33);
	q.enQueue(45);
	q.enQueue(90);
	q.enQueue(25);
	cout << q.getElementAtFront()<<"\n";
	cout << q.getNoOfElements() << "\n";
	cout << "\nCapacity is: " << q.getCapacity() << "\n";
	cout << "\n" << q.deQueue();
	cout << "\n" << q.deQueue(); cout << "\n" << q.deQueue(); cout << "\n" << q.deQueue();
	cout << "\n" << q.deQueue();
	cout << "\n" << q.deQueue();
	cout << "\n" << q.deQueue();
	cout << "\n" << q.deQueue();
	cout << "\n" << q.deQueue();
	
	//Queue<string>s;



	return 0;
}
