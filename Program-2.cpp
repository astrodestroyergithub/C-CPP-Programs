#include<iostream>
#include<deque>
using namespace std;

int main()
{
	// deque demonstration
	
	deque<int> d1;
	
	d1.push_back(3);
	d1.push_back(5);
	d1.push_back(7);
	d1.push_back(9);
	d1.push_back(2);
	
	cout<<"The elements of the deque d1 are"<<endl;
	for(int i:d1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	d1.push_front(55);
	
	d1.push_back(99);
	
	cout<<"The deque d1 now is"<<endl;
	for(int i=0;i<d1.size();i++)
	{
		cout<<d1.at(i)<<" ";
	}
	cout<<endl;
	
	d1.pop_back();
	
	d1.pop_front();
	
	cout<<"The deque d1 now is"<<endl;
	for(int i=0;i<d1.size();i++)
	{
		cout<<d1.at(i)<<" ";
	}
	cout<<endl;
	
	deque<int> d2={2,4,1,8,10,23,0};
	
	cout<<"The deque d2 is"<<endl;
	
	for(int i:d2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	d2.erase(d2.begin()+2,d2.end()-1);
	
	cout<<"The deque d2 now is"<<endl;
	
	for(int i:d2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	return 0;
}
