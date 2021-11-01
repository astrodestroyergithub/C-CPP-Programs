#include<bits/stdc++.h>
using namespace std;

int main()
{
	//vectors in c++
	vector<int> vec1={3,5,1,8,2,0,3,10,2,7,45,21,98,12};
	
	//using begin() and end() functions
	cout<<"demonstration using begin() and end() functions"<<endl;
	for(auto i=vec1.begin();i!=vec1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	
	cout<<endl;
	
	//using rgegin() and rend() functions
	cout<<"demonstration using rbegin() and rend() functions"<<endl;
	for(auto i=vec1.rbegin();i!=vec1.rend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	
	cout<<endl;
	
	//push_back() function in vectors
	cout<<"enter an integer: "<<endl;
	int n;
	cin>>n;
	vec1.push_back(n);
	cout<<"integer "<<n<<" pushed back into the vector"<<endl;
	
	cout<<endl;
	
	//using cbegin() and cend() functions
	cout<<"demonstration using cbegin() and cend() functions"<<endl;
	for(auto i=vec1.cbegin();i!=vec1.cend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	
	cout<<endl;
	
	//using crbegin() and crend() functions
	cout<<"demonstration using cbegin() and crend() functions"<<endl;
	for(auto i=vec1.crbegin();i!=vec1.crend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	
	cout<<endl;
	
	//size() function in vectors
	cout<<"demonstration of size() function - returns the total number of elements in the vector"<<endl;
	cout<<"the size of the vector - vec1 is "<<vec1.size()<<endl;
	
	cout<<endl;
	
	//max_size() function in vector
	cout<<"demonstration of max_size() function - returns the maximum number of elements that the vector can hold"<<endl;
	cout<<"the max_size of the vector - vec1 is "<<vec1.max_size()<<endl;
	
	cout<<endl;
	
	//capacity() function in vector
	cout<<"demonstration of capacity() function - returns the current capacity allocated to the vector in terms of the number of elements that it can hold"<<endl;
	cout<<"the capacity of the vector - vec1 is "<<vec1.capacity()<<endl;
	
	cout<<endl;
	
	//resize() function in vector
	cout<<"demonstration of resize() function - resizes the size of the vector to the number of elements passed as input"<<endl;
	cout<<"enter the number of elements you want vec1 to have"<<endl;
	cin>>n;
	cout<<"resizing the vector - vec1 for having "<<n<<" elements";
	vec1.resize(n);
	cout<<endl<<"printing the vector vec1 after resizing..."<<endl;
	for(auto i=vec1.begin();i!=vec1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	
	cout<<endl;
	
	//reference operator in vectors
	cout<<"the reference of the 3rd element of vector - vec1 is "<<endl;
	cout<<"vec1[3] : "<<vec1[3]<<endl;
	
	cout<<endl;
	
	//at() operator in vectors
	cout<<"demonstration of at() operator in vector - vec1"<<endl;
	cout<<"vec1.at(4) : "<<vec1.at(4)<<endl;
	
	cout<<endl;
	
	//front() operator in vectors
	cout<<"demonstration of front() operator in vector - vec1"<<endl;
	cout<<"vec1.front() : "<<vec1.front()<<endl;
	
	cout<<endl;
	
	//back() operator in vectors
	cout<<"demonstration of back() operator in vector - vec1"<<endl;
	cout<<"vec1.back() : "<<vec1.back()<<endl;
	
	cout<<endl;
	
	//data() operator in vectors
	int* t=vec1.data();
	cout<<"demonstration of data() operator in vector - vec1"<<endl;
	cout<<"int* t=vec1.data(); cout<<*t; output="<<*t<<endl;
	
	cout<<endl;
	
	cout<<"printing the vector - vec1 once again"<<endl;
	for(int i=0;i<vec1.size();i++)
		cout<<vec1[i]<<" ";
	cout<<endl;
	
	cout<<endl;
	
	cout<<"creating a new vector - vec2"<<endl;
	vector<int> vec2;
	
	//initialize the vector with 5 times 55 by using assign() function
	cout<<"demonstration of assign() function"<<endl;
	vec2.assign(5,55);
	cout<<"the vector now is"<<endl;
	for(int i=0;i<vec2.size();i++)
		cout<<vec2[i]<<" ";
	cout<<endl;
	
	cout<<endl;
	
	//push_back() funcction in vectors
	cout<<"demonstration of push_back() function in vector - vec2"<<endl;
	vec2.push_back(34);
	cout<<"the vector now is"<<endl;
	for(int i=0;i<vec2.size();i++)
		cout<<vec2[i]<<" ";
	cout<<endl;
	
	cout<<endl;
	
	//pop_back() function in vectors
	cout<<"demonstration of pop_back() function in vector - vec2"<<endl;
	vec2.pop_back();
	cout<<"the vector now is"<<endl;
	for(int i=0;i<vec2.size();i++)
		cout<<vec2[i]<<" ";
	cout<<endl;
	
	cout<<endl;
	
	//insert() function in vectors
	cout<<"demonstration of insert() function in vector - vec2"<<endl;
	cout<<"inserting 43 in the beginning position of the vector - vec2..."<<endl;
	vec2.insert(vec2.begin(),43);
	cout<<"the vector now is"<<endl;
	for(int i=0;i<vec2.size();i++)
		cout<<vec2[i]<<" ";
	cout<<endl;
	
	cout<<endl;
	
	//erase() function in vectors
	cout<<"demonstration of erase() function in vector - vec2"<<endl;
	cout<<"deleting the beginning position element of the vector - vec2..."<<endl;
	vec2.erase(vec2.begin());
	cout<<"the vector now is"<<endl;
	for(int i=0;i<vec2.size();i++)
		cout<<vec2[i]<<" ";
	cout<<endl;
	
	cout<<endl;
	
	//clear() function in vectors
	cout<<"demonstration of clear() function in vector - vec2"<<endl;
	cout<<"clearing the vector - vec2..."<<endl;
	vec2.clear();
	cout<<"the size of the vector - vec2 is "<<vec2.size()<<endl;
	
	cout<<endl;
	
	//creating 2 new vectors
	vector<int> vec3,vec4;
	vec3={1,2,3,4,5};
	vec4={6,7,8,9,10};
	cout<<"the vector - vec3 is"<<endl;
	for(auto i=vec3.begin();i!=vec3.end();i++)
		cout<<*i<<" ";
	cout<<endl;
	cout<<"the vector - vec4 is"<<endl;
	for(auto i=vec4.begin();i!=vec4.end();i++)
		cout<<*i<<" ";
	cout<<endl;
	
	cout<<endl;
	
	//swapping the vectors
	cout<<"swapping the 2 vectors - vec3 and vec4..."<<endl;
	vec3.swap(vec4);
	cout<<"printing the vectors - vec3 and vec4 after swapping..."<<endl;
	for(int i=0;i<vec3.size();i++)
		cout<<vec3.at(i)<<" ";
	cout<<endl;
	for(int i=0;i<vec4.size();i++)
		cout<<vec4.at(i)<<" ";
	cout<<endl;
	
	return 0;
}
