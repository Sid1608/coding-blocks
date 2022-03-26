//Author:Siddharth Akar	

#include <iostream>
#include <vector>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int main()
{ 
	
    vector<int>d{1,2,3,4,5};
    //push Back O(1) for most of the time
    d.push_back(16);
    //Pop Back / Remove O(1)
    d.pop_back();

    //insert some elements int
    d.insert(d.begin()+3,100);//1 2 3 100 4 5
    //insert multiple elements in o(no of elements added+no of elements shifted)
    d.insert(d.begin()+3,4,100);//1 2 3 100 100 100 100 4 5

    //erase some elements in the middle
    d.erase(d.begin()+2);
    d.erase(d.begin()+2,d.begin()+5);

    // size
    cout<<d.size()<<endl;//5
    cout<<d.capacity()<<endl;//10

    //vector doesnot shrink
    //we avoid the shrink operation
    d.resize(8);//if size is increase then more memeory will be allocated
    cout<<d.capacity()<<endl;//10
    cout<<d.size()<<endl;//8 
    //1 2 100 10 14 0 0 0 


    //remove all the elements from the vector,doesnot delete the memory occupied by the array
    d.clear();
    cout<<d.size();//0

    //empty 
    if(d.empty()){
        cout<<"this is an empty vector"<<endl;
    }
    for(int x:d){
        cout<<x<<",";
    }
    cout<<endl;

    d.push_back(10);
    d.push_back(11);
    d.push_back(12);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    //Reserve 
    int n;cin>>n;
    vector<int>v;
    //to avoid dubling we will use resever function
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"capacity"<<v.capacity()<<endl;
    }
    //1 2 4 8 16 
    cout<<v.capacity()<<endl;
     //to avoid dubling we will use resever function
     v.reserve(1000);
	for(int x:v){
        cout<<x<<",";
    }
	return 0;
}