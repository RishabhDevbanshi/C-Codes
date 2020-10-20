#include<iostream>
#include<vector>
using namespace std;

//Call By Value
void print_vector(vector<int> myVector)  
{
	for(int i=0;i<myVector.size();i++)
	{
		cout<<myVector[i]<<"\t";
	}
}

//Call By Reference
void print_vector_reference(vector<int> &myVector)
{
	myVector.push_back(100);
	for(int i=0;i<myVector.size();i++)
	{
		cout<<myVector[i]<<"\t";
	}
	cout<<endl;
}

int main(){
	//to create vector 
	vector<int> items; //without default size and default value
	vector<int> v1(10); //with default size but not default value
	vector<int> v2(10,0); //with default size(10) and default value(0)
	vector<int> v3 {1,2,3}; //similar as int c[3] = {1,2,3}
	vector<int> v4(v3.begin(),v3.end()); //initializing vector from another vector .
	
	
	items.push_back(12); //to push elements in a vector
	items.push_back(56); 
	items.push_back(33);
	
	cout<<"Vector Size = "<<items.size()<<endl; //to get the size of vector
	
	items.pop_back();  //to pop out last element of vector
	items.erase(items.begin() + 2); //to delete kth element from vector
	items.erase(items.end() - 1); //to delete last element
	
	cout<<"Front element= "<<items.front()<<endl; //to get first element of vector
	cout<<"Last element= "<<items.back()<<endl; //to get last element of vector
	print_vector(items);
	cout<<endl;
	print_vector_reference(items);
	print_vector_reference(items);
	print_vector_reference(items);
	print_vector_reference(items);
	print_vector_reference(items);
	vector<int> newItems = items; //This will copy the content of items to newItems.
	                              //We can use this with vectors and STL Arrays but not with normal arrays
	return 0;
}
