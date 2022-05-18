#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Vineet");
    s.push("vineet1");
    s.push("Rahul");
    cout<<"Top element is :"<<s.top()<<endl;
    s.pop();
    cout<<"Top element is : "<<s.top()<<endl;
    cout<<"Size of stack  : "<<s.size()<<endl;
    cout<<"Is empty or not: "<<s.empty()<<endl;
    return 0;
    
}
