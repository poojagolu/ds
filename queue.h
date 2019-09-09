#include<iostream>
#include<stdexcept>
using namespace std;
#define SIZE 5
template<class T>
class Queue
{
	int front;
	int rear;
	T *arr;
	public:
		Queue();
//		~Queue();
		bool IsEmpty();
		bool IsFull();
		bool Add(T ele);
		T del();
};
