//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int
int stairs(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 1;
    }
    return stairs(n-1)+stairs(n-2)+stairs(n-3);
}
int NStairs(int n,int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 1;
    }
    int ans=0;
    for(int i=1;i<=k;i++){
        ans+=NStairs(n-i,k);
    }
    return ans;
}

int main()
{ 
	int t=1;
	cin>>t;
	while(t--){
        int n,k;
        cin>>n>>k;
        cout<<stairs(n);
        cout<<NStairs(n,k);

	}
	return 0;
}