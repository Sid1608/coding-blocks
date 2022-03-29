//Author:Siddharth Akar	

#include <iostream>
#include<set>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int
typedef multiset<int>::iterator It;
int main()
{ 
	//Multiset - that can store multiple elements that have same elements
    //stored in a specific sorted accorign to internal comparison object
    //valuesonce insertd cannot be modified 
    //associative container: elements are refereed by their values and not by their index
    //underlying implementation is a bst
    // int arr[]={10,20,30,20,10,10};
    int arr[]={10,20,30,30,30,20,10,10};
    multiset<int>m(arr,arr+6);

    //iterate over all elements
    for(int x:m){
        cout<<x<<", ";
    }
    //erase all elements of particular type
    m.erase(20);//10,10,10,30
    //insert
    m.insert(80);

    //count: how many times a no is occuring
    cout<<m.count(10);

    //find 
    auto if=m.find(30);//first element equal to 30
    cout<<(*it)<<endl;

    //Get all elements which are equl to 30
    pair<It,It>range=m.equal_range(30);
    for(auto it=range.first:it!=range.end();it++){
        cout<<*it;
    }
    //lower and upper bound 
    for(int it=m.lower_bound(10);it!=m.upper_bound(77);i++){
        cout<<(*it)<<endl;
    }
    
    return 0;
}