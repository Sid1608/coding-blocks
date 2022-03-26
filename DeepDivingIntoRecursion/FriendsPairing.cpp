//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int friends(int n){
    //base case
    if(n==0||n==1){
        return 1;
    } 
    //recurcive case    
    return friends(n-1)+(n-1)*friends(n-2);
}
int main()
{ 
	int t=1;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        cout<<friends(n)<<endl;
	}
	return 0;
}