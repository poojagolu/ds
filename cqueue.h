#include<iostream>
using namespace std;
template<class T>
class CQueue
{
	T* arr;
	int front;
	int rear;
	int size;
	public:
	CQueue(int s);
	~CQueue();
	bool AddQ(T ele);
        T DelQ();
	bool IsEmpty();
	bool IsFull();
};
