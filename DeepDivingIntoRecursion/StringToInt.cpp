//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int stringToInt(char* a,int n){
    //base case 
    if(n==0){
        return 0;
    }

    //recursive  
    int digit=a[n-1]- '0';
    // int smallerAns=stringToInt(a,n-1);
    // int BiggerAns=smallerAns*10 + digit;
    // return BiggerAns;
    return stringToInt(a,n-1)*10+digit;
}


int main()
{ 
	char a[]="4329";
    int n=strlen(a);
    int ans=stringToInt(a,n);
    cout<<ans<<endl;
    cout<<ans+1<<endl;
	return 0;
}