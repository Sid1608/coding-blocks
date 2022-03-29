//Author:Siddharth Akar	

#include <iostream>
#include<queue>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int main()
{ 
    queue<int> q;
    for(int i=0;i<=5;i++){
        q.push(i);
    }
	//loop 
    while(!q.empty()){
        cout<<s.front()<<", ";
        q.pop();
    }
	return 0;
}