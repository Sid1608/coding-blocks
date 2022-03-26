//Author:Siddharth Akar	

#include <iostream>

#include<string>

#include<unordered_map>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int main()
{ 
    //only unique keys
	unordered_map<string,int>m;
    //1.Insert
    m.insert(make_pair("Mango",100));
    pair<string,int>p;
    p.first="Apple";
    p.second=120;
    m.insert(p);
    m["Banana"]=20;

    // 2. Search
    string fruit;
    cin>>fruit;
    //update the price
    m[fruit]+=20;
    auto it=m.find(fruit);//return iterator
    if(it!=m.end()){
        cout<<"price of "<<fruit<<"is "<<m[fruit]<<endl;
    }else{
        cout<<"Fruit is not present."<<endl;
    }

    //3 Erase
    m.erase(fruit);
    //another way to find aparticular unordered_map
    //it stores unique keys only once
    if(m.count(fruit)){//returns integer
        cout<<"price of "<<fruit<<"is "<<m[fruit]<<endl;
    }else{
        cout<<"Fruit is not present."<<endl;
    }
    m["litchi"]=60;
    //iterate over all the key value pair
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(it->first)<<" "<<it->second<<endl;
    }

    //for each  loop
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }


    
	return 0;
}