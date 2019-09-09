#include"queue.cpp"
int main()
{
	int choice;
	Queue<int> q;
	do
	{
		cout<<"\n\n1.Add\n2.Delete\n3.Exit"<<endl;
		cout<<"Enter your choice: ";
	        cin>>choice;
		cin.get();
		switch(choice)
		{
			case 1:
				{
					int ele;
					cout<<"Enter ele: ";
					cin>>ele;
					if(!q.Add(ele))
					{
					cout<<"\nQueue is full\n";
					}
				}	
				break;
			case 2:{
					try
					{
						cout<<"Ele deleted : "<<q.del()<<endl;
					}
					catch(runtime_error e)
					{
						cout<<e.what()<<endl;
					}
			       }
			       break;
			case 3:
			       {}
			       break;
		}
	}while(choice!=3);
	return 0;
}
