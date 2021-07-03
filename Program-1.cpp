#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
	// array demonstration
	
	array<int,4> a1={1,5,3,9};
	int size_of_array=a1.size();
	cout<<"Printing array a1 by accessing the index position"<<endl;
	for(int i=0;i<size_of_array;i++)
	{
		cout<<a1[i]<<" ";
	}
	cout<<endl;
	cout<<"Printing array a1 by using at() function"<<endl;
	for(int i=0;i<size_of_array;i++)
	{
		cout<<a1.at(i)<<" ";
	}
	cout<<endl;
	cout<<"The array a1 is empty or not? "<<a1.empty()<<endl;
	
	// vector demonstration
	
	// the methods available inside vectors are
	// 1. push_back()
	// 2. pop_back()
	// 3. size()
	// 4. at() 
	// 5. capacity()
	// 6. begin()
	// 7. insert()
	// 8. erase()
	// 9. swap()
	// 10. resize()
	// 11. clear()
	// 12. assign()
	// 13. max_size()
	
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(9);
    
    cout<<"The vector v1 initially"<<endl;
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    v1.pop_back();
    v1.pop_back();
    
    cout<<"The vector v1 finally"<<endl;
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    vector<int> v2={3,6};
    
    int size=v2.size();
    
    cout<<"The size of vector v2 "<<size<<endl;
    
    cout<<"The vector v2"<<endl;
    for(int i=0;i<size;i++)
    {
    	cout<<v2.at(i)<<" ";
	}
	cout<<endl;
	
	cout<<"The capacity of vector v2 initially "<<v2.capacity()<<endl;
	
	v2.push_back(5);

	cout<<"The capacity of vector v2 finally "<<v2.capacity()<<endl;
	
	cout<<"Front of v2 "<<v2.front()<<endl;
	cout<<"Back of v2 "<<v2.back()<<endl;
	
	// initialize a vector with all 1's
	
	vector<int> v3(5,1);
	
	cout<<"The vector v3 is"<<endl;
	for(int i:v3)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	v3.push_back(6);
	
	v3.insert(v3.begin()+1,7);
	
	cout<<"The vector v3 after inserting 6 at end and 7 at index=1"<<endl;
	
	for(int i:v3)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	vector<int> v4={3,7,1,9,2,5};
	cout<<"The vector v4 initially"<<endl;
	for(int i:v4)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	v4.erase(v4.begin()+2);
	
	cout<<"The vector v4 (after erasing element at index=2)"<<endl;
	for(int i:v4)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	// initializing the vector v5 with the elements of vector v4
	
	vector<int> v5(v4);
	
	cout<<"The vector v5 is"<<endl;
	
	for(int i:v5)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"Swapping the elements between vectors v1 and v5"<<endl;
	v1.swap(v5);
	
	cout<<"The elements of vector v1 are"<<endl;
	for(int i:v1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"The elements of vector v5 are"<<endl;
	for(int i:v5)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"The size of vector v5 "<<v5.size()<<endl;
	
	v5.resize(15);
	
	cout<<"The size of vector v5 after resizing "<<v5.size()<<endl;
	
	v5.clear();
	
	cout<<"Size of vector v5 after clearing its elements "<<v5.size()<<endl;
	
	vector<int> v6;
	v6.assign(v4.begin()+1,v4.end()-1);
	
	cout<<"The vector v6 after assigning values to it"<<endl;
	for(int i:v6)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"Maximum size the vector v6 can hold "<<v6.max_size();
	
	cout<<endl;
	
    return 0;
}
