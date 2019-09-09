#include<iostream>
using namespace std;
template<class T>
class Node
{
	T data;
	Node *next;
	public:
		T GetData()
		{
			return data;
		}
		void SetData(T ele)
		{
			data=ele;
		}
		Node* GetNext()
		{
			return next;
		}
		void SetNext(Node* temp)
		{
			next=temp;
		}
};
