#include<iostream>
#include<stdexcept>
#define SIZE 6
using namespace std;
class Stack1
{
	int arr[SIZE];
	int top1=-1,top2=SIZE;
	public:
	bool IsEmpty1()
    {
			return(top1==-1);
    }
    bool IsFull1()
	{
		return(top1==SIZE-1);
	}
	bool IsEmpty2()
    {
		return(top2==SIZE);
    }
    bool IsFull2()
	{
		return(top2==0);
	}
	void push1(int ele)
	{
		if(IsFull1())
			throw runtime_error("\nOverFlow\n");
		else
			arr[++top1]=ele;
	}
	int pop1()
	{
		if(IsEmpty1())
			throw runtime_error("\nUnderflow\n");
		else 
		return arr[top1--];
	}
	void push2(int ele)
	{
		if(IsFull2())
			throw runtime_error("\nOverFlow\n");
		else
			arr[--top2]=ele;
	}
	int pop2()
	{
		if(IsEmpty2())
			throw runtime_error("\nUnderflow\n");
		else 
		return arr[top2++];
	}
};
int main()
{
	Stack1 s;
	try
	{
	s.push1(11);
	s.push1(22);
	s.push1(33);
	s.push1(44);
	s.push1(55);
	s.push1(66);
	s.push1(77);
	}
	catch(runtime_error e)
	{
		cout<<e.what()<<endl;
	}
	try
	{
	cout<<"Element Deleted"<<s.pop1()<<endl;
	cout<<"Element Deleted"<<s.pop1()<<endl;
	cout<<"Element Deleted"<<s.pop1()<<endl;
	cout<<"Element Deleted"<<s.pop1()<<endl;
	cout<<"Element Deleted"<<s.pop1()<<endl;
	cout<<"Element Deleted"<<s.pop1()<<endl;
	cout<<"Element Deleted"<<s.pop1()<<endl;
	}
	catch(runtime_error e)
	{
		cout<<e.what();
	}
		try
	{
	s.push2(1);
	s.push2(2);
	s.push2(3);
	s.push2(4);
	s.push2(5);
	s.push2(6);
	s.push2(7);
	}
	catch(runtime_error e)
	{
		cout<<e.what()<<endl;
	}
	try
	{
	cout<<"Element Deleted"<<s.pop2()<<endl;
	cout<<"Element Deleted"<<s.pop2()<<endl;
	cout<<"Element Deleted"<<s.pop2()<<endl;
	cout<<"Element Deleted"<<s.pop2()<<endl;
	cout<<"Element Deleted"<<s.pop2()<<endl;	
	cout<<"Element Deleted"<<s.pop2()<<endl;
	cout<<"Element Deleted"<<s.pop2()<<endl;
	}
	catch(runtime_error e)
	{
		cout<<e.what();
	}
	return 0;
}
