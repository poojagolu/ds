#include<stdexcept>
#include<iostream>
#define SIZE 7
using namespace std;
template<class T>
class Stack
{
	private:
		int top;
		T arr[SIZE];
	public:
		Stack():top(-1)
		{}	
		bool IsEmpty()
		{
			return (-1==top);
		}
		bool IsFull()
		{
			return (SIZE-1==top);
		}
		int peep()
		{
			if(IsEmpty())
			{
				throw runtime_error("stack underflow");
			}
			return arr[top];
		}
		int pop()
		{
			if(IsEmpty())
			{
				throw runtime_error("stack Underflow");
			}
			return arr[top--];
		}
		void push(T ele)
		{
			if(IsFull())
			{
				throw runtime_error("Stack Overflow");
			}
			arr[++top]=ele;
		}
};
int main()
{
	Stack <int> s;
	Stack <char> s1;
	try
	{
		s.push(11);
		s.push(22);
		s.push(33);
		s.push(44);
		s.push(55);
		s.push(66);
		s.push(77);
	}
	catch(runtime_error e)
	{
		cout<<"\n"<<e.what();
	}
	try
	{
		cout<<"\n"<<s.pop();
		cout<<"\n"<<s.pop();
		cout<<"\n"<<s.pop();
		cout<<"\n"<<s.pop();
		cout<<"\n"<<s.pop();
		cout<<"\n"<<s.pop();
		cout<<"\n"<<s.pop();
	}
	catch(runtime_error e)
	{
		cout<<"\n"<<e.what();
	}
	return 0;
}

