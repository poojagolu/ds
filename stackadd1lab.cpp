#include<iostream>
#include<stdexcept>
#define SIZE 6
using namespace std;
class Stack1
{
	int arr[SIZE];
	int top1=-1,top2=SIZE/2-1;
	public:
	bool IsEmpty1()
    {
			return(top1==-1);
    }
    bool IsFull1()
	{
		return(top1==SIZE/2-1);
	}
      bool IsEmpty2()
    {
		return(top2==SIZE/2-1);
    }
    bool IsFull2()
	{
		return(top2==SIZE-1);
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
			arr[++top2]=ele;
	}
	int pop2()
	{
		if(IsEmpty2())
			throw runtime_error("\nUnderflow\n");
		else 
		return arr[top2--];
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
	}
	catch(runtime_error e)
	{
		cout<<e.what();
	}
		try
	{
	s.push2(11);
	s.push2(22);
	s.push2(33);
	s.push2(44);
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
	}
	catch(runtime_error e)
	{
		cout<<e.what();
	}
	return 0;
}
