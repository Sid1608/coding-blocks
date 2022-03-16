//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int fibo(int n){
    //base case 
    if(n==1||n==0)return n;

    //recurcive dase
    return fibo(n-1)+fibo(n-2);
}
int main()
{ 
	int n;
    cin>>n;
    cout<<fibo(n)<<endl;
	return 0;
}