#include<iostream>
#include<stdexcept>
#define SIZE 5
using namespace std;
class Stack
{
	private:
	int top;
	int arr[SIZE];
	public:
		Stack():top(-1)
		{}
		bool IsEmpty()
		{
			return(top==-1); 
		}
		bool IsFull()
		{
			return(top==SIZE-1); 
		}
		void push(int ele)
		{
			if(IsFull())
			{
				throw runtime_error("Stack Overflow");
			}
			arr[++top]=ele;
		}
		int pop()
		{
			if(IsEmpty())
			{
				throw runtime_error("Stack Underflow");
			}
			return arr[top--];
		}
};
int main()
{
	Stack s;
        int x,a,n,num=0;
        cout<<"Enter number : ";
        cin>>x;
	cout<<"Enter Choice : \n1.Convert decimal to binary\n2.Convert decimal to octal\n";
	cin>>a;
	switch(a)
	{
	case 1:
        	while(x>0)
        	{
             		num=x%2;
			try
			{
				s.push(num);
			}
			catch(runtime_error e)
			{
			//cout<<e.what();
			}
			x=x/2;
		}
		cout<<"Binary Equivalent of number is : ";
		try
		{
			for(int i=0;i<4;i++)
			cout<<s.pop();
		}
		catch(runtime_error e)
                {
                        cout<<e.what();
                }
		break;
		case 2:
                while(x>0)
                {
                        num=x%8;
                        try
                        {
                                s.push(num);
                        }
                        catch(runtime_error e)
                        {
                        //cout<<e.what();
                        }
                        x=x/8;
                }
                cout<<"Octal Equivalent of number is : ";
                try
                {
                        for(int i=0;i<4;i++)
                        cout<<s.pop();
                }
                catch(runtime_error e)
                {
                        cout<<e.what();
                }
                break;

	}
	return 0;
}
