#include<iostream>
#include<stdexcept>
#define SIZE 6
using namespace std;
class Stack1
{
	int arr[SIZE];
	int top;
	public:
	bool IsEmpty()
	{
		return(top==-1); 
	}
	bool IsFull()
        {
                return(top==SIZE);
        }
	void choice(int n)
	{
		switch(n)
		{
			case 1:
				top=-1;
				break;
			case 2:
				top=(SIZE)-1;
				break;
		}
	}
	int push(int ele)
	{
		if(!IsFull())
		{
		arr[++top]=ele;
		return ele;
		}
		else 
			throw runtime_error("OverFlow\n");
	}
	int pop()
	{
		if(!IsEmpty())
		return arr[top--];
		else 
			throw runtime_error("Underflow\n");
	}
};
int main()
{
	int x,a;
	Stack1 s;
	do
	{
		cout<<"\n\n***********MENU***********\n1.From front\n2.From last\n\n";
		cout<<"Enter the array side u want to add or delete in"<<endl;
		cin>>x;
		s.choice(x);
		cout<<"Enter operation u want to perform:\n1.push\n2.pop\n3.exit\n\n"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:
			{
				int ele;
				cout<<"enter element to be inserted"<<endl;
				cin>>ele;
				try
				{
					s.push(ele);
					cout<<"Element inserted"<<s.push(ele)<<endl;
				}
				catch(runtime_error e)
				{
					cout<<e.what()<<endl;
				}
			}break;
			case 2:
			{
				try
				{
					cout<<"Element deleted"<<s.pop()<<endl;
				}
        			catch(runtime_error e)
        			{
                			cout<<e.what()<<endl;
       			 	}

			}break;
			case 3:
			break;
		}
	}while(a!=3);
	return 0;
}

