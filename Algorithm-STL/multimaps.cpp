//Author:Siddharth Akar	

#include <iostream>

#include<cstring>
//implemeted using self balaning bst
#include<map>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int main()
{ 
    //can have duplicate keys
	multimap<char,string> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));//O(logn)
    }
    auto it =m.begin();
    m.erase(it);//O(logn)

    auto it2=m.lower_bound('b');//batman
    auto it3=m.upper_bound('d');//elephant
    for(auto it4=it2;it4!=it3;it4++){
        cout<<it4->second<<endl;
    }

    //Search for cat
    auto f=m.find('c');//O(logn)
    if(f->second=="cat"){
        m.erase(f);
    }
    //Try to print the entire map
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
	return 0;
}