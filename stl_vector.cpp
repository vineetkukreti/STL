#include<vector>
#include<iostream>
using namespace std;
int main()
{

vector<int> v;
// checking memory assign 
cout<<v.capacity()<<endl;
// now adding element to the vector

v.push_back(23);
cout<<v.capacity()<<endl;


v.push_back(3);
cout<<v.capacity()<<endl;

v.push_back(13);
cout<<v.capacity()<<endl;

v.push_back(6);
cout<<v.capacity()<<endl;


v.push_back(90);
cout<<v.capacity()<<endl;

v.push_back(56);
cout<<v.capacity()<<endl;


// size tells how many elements are present in vector
cout<<"Size of vector : "<<v.size()<<endl;


// .at operation same work as it was in array gives content at given index number
cout<<"Elment : "<<v.at(1)<<endl;

// fornt and back
//there is also a function which is used to find first and last element 
 cout<<"First element : "<<v.front()<<endl;
 cout<<"last  element : "<<v.back()<<endl;
 
// removing element from the back side of the vector 
for(int i : v)
    cout<<i<<" ";
 
v.pop_back();

cout<<endl;
for(int i : v)
    cout<<i<<" ";
    
    
// clear the vector ,here only size become zero ,capcity will remain same
// Time complexity O(1)
cout<<endl;
vector <int> a(6,2);
for(int i : a)
    cout<<i<<" ";
// one vector to another vector


vector<int> t(a);
cout<<endl;
for(int i : t)
    cout<<i<<" ";

  return 0;
}   
