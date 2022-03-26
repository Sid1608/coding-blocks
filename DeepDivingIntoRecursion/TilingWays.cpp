//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int
int ways(int n){
    if(n<=3){
        return 1;
    }
    return ways(n-1)+ways(n-4);
}
int main()
{ 
	int t=1;
	cin>>t;
	while(t--){
        int n=5;
        cout<<ways(n)<<endl;
	}
	return 0;
}