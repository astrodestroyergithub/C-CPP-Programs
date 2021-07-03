#include <iostream>
#include <list>
using namespace std;

int main()
{
	// list demonstration
	
	list<int> l1={2,6,9,10,3};
	
	cout<<"The list l1 is"<<endl;
	for(int i:l1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	l1.push_back(43);
	
	cout<<"The list l1 now is"<<endl;
	for(int i:l1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	l1.push_front(45);
	l1.push_front(77);
	
	cout<<"The list l1 now is"<<endl;
	for(int i:l1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	l1.erase(l1.begin());
	
	cout<<"The list l1 now is"<<endl;
	for(int i:l1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	l1.pop_back();
	
	cout<<"The list l1 finally is"<<endl;
	for(int i:l1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"The size of the list l1 is "<<l1.size()<<endl;
	
	return 0;
}
