//Author:Siddharth Akar	

#include <iostream>
#include<stack>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int main()
{ 
    stack<int> s;
    for(int i=0;i<=5;i++){
        s.push(i);
    }
	//loop 
    while(!s.empty()){
        cout<<s.top()<<", ";
        s.pop();
    }
	return 0;
}