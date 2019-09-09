#include"node.cpp"
using namespace std;
template<class T>
class Linklist
{
	Node<T>* head;
	Node<T>* tail;
	public:
	Linklist():head(nullptr),tail(nullptr)
	{
	}
	bool IsFull()
	{
		return false;
	}
	bool IsEmpty()
	{
		return(nullptr==head && nullptr==tail);
	}
	bool AddAtEnd(T ele)
	{
		Node<T> *temp=new Node<T>;
		temp->SetData(ele);
		temp->SetNext(nullptr);
		if(IsEmpty())
		{
			head=tail=temp;
		}
		else
		{
			tail->SetNext(temp);
			tail=temp;
		}
	}
	bool AddAtFront(T ele)
        {
                Node<T> *temp=new Node<T>;
                temp->SetData(ele);
                if(IsEmpty())
                {
                	temp->SetNext(nullptr);
                        head=tail=temp;
                }
                else
                {
			temp->SetNext(head);
                        head=temp;
                }
        }
	void display()
	{
		Node<T> *t=head;
		cout<<"\n";
		do
		{
			cout<<t->GetData()<<"->";
			t=t->GetNext();
		}
		while(nullptr!=t);
		cout<<"NULL"<<endl;
	}
};
int main()
{
	Linklist<int> l;
	l.AddAtEnd(11);
	l.AddAtEnd(22);
	l.AddAtEnd(33);
	l.AddAtEnd(44);
	l.AddAtEnd(55);
	l.AddAtEnd(66);
	l.display();
	l.AddAtFront(77);
	l.AddAtFront(88);
	l.AddAtFront(99);
	l.AddAtFront(100);
	l.display();
	return 0;
}
