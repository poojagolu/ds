#include"cqueue.h"
template<class T>
CQueue<T>::CQueue(int s)
{
	front=rear=0;
	size=s;
	arr=new T[size];
}
template<class T>
CQueue<T>::~CQueue()
{
	delete []arr;
}
template<class T> 
bool CQueue<T>::IsEmpty()
{
	return(rear==front);
}
template<class T>
bool CQueue<T>::IsFull()
{
	return((rear+1)%size==front);
}
template<class T>
bool CQueue<T>::AddQ(T ele)
{
	bool bsuccess = false;
	if(!IsFull())
	{
		arr[rear]=ele;
		rear=(rear+1)%size;
		bsuccess = true;
	}
	return bsuccess;
}
template< class T>
T CQueue<T>:: DelQ()
{
	T ele;
 	if(!IsEmpty())
	{
		ele = arr[front];
		front=(front+1)%size;
	}
	else
       	{
		throw runtime_error("CQueue is empty");
	}
	return ele;
}
