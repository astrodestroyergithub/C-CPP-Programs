#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> the_vector;
	int total=0;
	for(int i=0;i<10;i++)
	{
		int input;
		cin>>input;
		the_vector.push_back(input);
	}
	vector<int>::iterator the_iterator;
	the_iterator=the_vector.begin();
	while(the_iterator!=the_vector.end())
	{
		total+=*the_iterator;
		the_iterator++;
	}
	cout<<"The total is "<<total;
	return 0;
}
