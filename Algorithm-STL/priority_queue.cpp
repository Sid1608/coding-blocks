//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<queue>//contain prioriy_queue, queue
#include<algorithm>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int main()
{ 
	priority_queue<int>pq;//max heap
	priority_queue<int,vector<int>,greater<int>>pq_min;//min heap
    int n;cin>> n;
    for(int i=1;i<n;i++){
        int no;
        cin>>no;
        pq.push(no);//O(logn)
    }

    //remove the elemetns from the heap
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
	return 0;
}