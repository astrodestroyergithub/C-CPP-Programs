#include <iostream>
#include <map>
using namespace std;

int main()
{
	// map demonstration
	
	// 1. insert()
	// 2. erase()
	// 3. count()
	
	map<int,string> m;
	
	m[5]="elephant";
	m[2]="tiger";
	m[9]="deer";
	m[4]="wolf";
	m[0]="jaguar";
	
	cout<<"The map initially"<<endl;
	
	for(auto i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	
	m.insert({7,"hyena"});
	
	cout<<"The map after inserting key 7"<<endl;
	
	map<int,string>::iterator it=m.begin();
	
	for(auto itr=it;itr!=m.end();itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	cout<<endl;
	
	cout<<"Is key=19 present or not "<<m.count(19)<<endl;
	
	m.erase(9);
	
	cout<<"The map after erasing the key 9"<<endl;
	
	for(auto i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	cout<<endl;
	
	cout<<"Printing the elements after key 4"<<endl;
	
	auto itr=m.find(4);
	
	for(auto i=itr;i!=m.end();i++)
	{
		cout<<i->first<<" "<<i->second<<endl;
	}
	
	cout<<endl;
	
	return 0;
}
