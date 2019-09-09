#include"queue.h"
template<class T>
Queue<T>::Queue():front(0),rear(0),arr(new T[SIZE])
{}
template<class T>
bool Queue<T>::IsEmpty()
{
	return(front==rear);
}
template<class T>
bool Queue<T>::IsFull()
{
	return(rear==SIZE);
}
template<class T>
bool Queue<T>::Add(T ele)
{
	bool success=false;
	if(!IsFull())
	{
		arr[rear++]=ele;
		success=true;
	}
	return success;
}
template<class T>
T Queue<T>::del()
{
	if(!IsEmpty())
	{
		return arr[front++];
	}
	else
	throw runtime_error("Queue is empty");
}
