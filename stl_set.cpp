// set stores only unique element
// it's implementation is bst\
// only add or delete
// element pops in sorted order
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
     s.insert(52);
      s.insert(15);
       s.insert(10);
       for(int x : s)
            cout<<x<<" ";// output will be seen in sorted order
        cout<<endl;
        
        // insertion TC - O(logn)
        s.erase(s.begin());
        for(int x : s)
            cout<<x<<" ";
        cout<<endl;
        
        // count function :it tells whether element is present or not
        cout<<s.count(15)<<endl;
        
        // find function ,if found the element in set then it will return
        // the iterator of that element
        
        set<int > ::iterator itr = s.find(15);
       for(auto it=itr;it!=s.end();it++)
       {
           cout<<it<<" ";
       }cout<<endl;
        
        
    return 0;
}

// set is slow   \ unordered set is fast
// when fetch    |  when fetch element did'nt
// element comes \  comes in sorted
// in sorted     |  ordeer
// order         \
