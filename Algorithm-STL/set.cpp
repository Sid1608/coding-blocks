//Author:Siddharth Akar	

#include <iostream>

#include<string>

//bst/red black tree
//insertion/deletion->O(logn)
//you can't update element(remove then update)
#include<set>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int main()
{ 
    int arr[]={10,20,11,98,11,10};
    int n=sizeof(arr)/sizeof(int);
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]); 
    }
    s.erase(10);
    auto it=s.find(11);
    s.erase(it);
    //print all the elemetns
    for (set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*(it)<<" ";
    }
	return 0;
}