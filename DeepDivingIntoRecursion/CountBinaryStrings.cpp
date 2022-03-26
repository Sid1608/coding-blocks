//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int count(int n,int ld){
    //base case 
    if(n==0)return 0;
    if(n==1){
        if(ld==0)return 2;
        else return 1;
    }
    //recurrence
    if(ld==0){
        return count(n-1,1)+count(n-1,0);
    }else{
        return count(n-1,0);
    }
}
int main()
{ 
	int t=1;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        cout<<count(n,0);
	}
	return 0;
}