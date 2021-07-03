#include <iostream>
#include <stack>
#include <queue>
#include <set>
using namespace std;

int main()
{
	// stack demonstration
	
	stack<int> s1;
	
	s1.push(3);
	s1.push(6);
	s1.push(7);
	s1.push(4);
	
	cout<<"The top element is "<<s1.top()<<endl;
	
	s1.pop();
	
	cout<<"The top element now is "<<s1.top()<<endl;
	
	cout<<"Size of the stack "<<s1.size()<<endl;
	
	cout<<"Stack s1 empty or not "<<s1.empty()<<endl;
	
	// queue demonstration
	
	queue<int> q1;
	
	q1.push(20);
	q1.push(30);
	q1.push(30);
	q1.push(40);
	q1.push(50);
	
	cout<<"The first element in the queue q1 is "<<q1.front()<<endl;
	
	q1.pop();
	
	cout<<"The first element in queue q1 now is "<<q1.front()<<endl;
	
	cout<<"The last element in queue q1 now is "<<q1.back()<<endl;
	
	cout<<"The size of the queue q1 is "<<q1.size()<<endl;
	
	cout<<"Is the queue q1 empty or not "<<q1.empty()<<endl;
	
	// priority queue demonstration
	
	// max heap
	
	priority_queue<int> maxi;
	
	maxi.push(3);
	maxi.push(1);
	maxi.push(7);
	maxi.push(4);
	maxi.push(0);
	
	int size_of_maxi=maxi.size();
	
	cout<<"The priority queue (max heap) maxi is"<<endl;
	
	for(int i=0;i<size_of_maxi;i++)
	{
		cout<<maxi.top()<<" ";
		maxi.pop();
	}
	cout<<endl;
	
	// min heap
	
	priority_queue<int,vector<int>,greater<int>> mini;
	
	mini.push(7);
	mini.push(1);
	mini.push(5);
	mini.push(0);
	mini.push(9);
	
	int size_of_mini=mini.size();
	
	cout<<"The priority queue (min heap) mini is"<<endl;
	
	for(int i=0;i<size_of_mini;i++)
	{
		cout<<mini.top()<<" ";
		mini.pop();	
	} 
	cout<<endl;
	
	// set demonstration
	
	set<int> s;
	
	s.insert(9);
	s.insert(9);
	s.insert(9);
	s.insert(9);
	s.insert(9);
	s.insert(4);
	s.insert(6);
	s.insert(6);
	s.insert(6);
	s.insert(0);
	s.insert(2);
	s.insert(2);
	s.insert(3);
	s.insert(3);
	s.insert(3);
	
	cout<<"The elements in the set s"<<endl;
	
	for(auto i:s)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	set<int>::iterator it=s.begin();
	
	it++;
	
	s.erase(it);
	
	cout<<"The elements in the set s after erasing element at index=1"<<endl;
	
	for(auto i:s)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"Element 4 present or not "<<s.count(4)<<endl;
	
	set<int>::iterator itr=s.find(6);
	
	for(auto it=itr;it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	return 0;
}
