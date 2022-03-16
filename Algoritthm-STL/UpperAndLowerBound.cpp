//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main()
{ 
	int arr[]={10,20,40,40,50,60,100};
    int n=sizeof(arr)/sizeof(int);
    int *ans=lower_bound(arr,arr+n,40);
    // cout<<"Value: "<<*ans<<endl;
    cout<<"Firse Occurence of key"<<ans-arr<<endl;

    int *x=upper_bound(arr,arr+n,40);
    // cout<<"Value: "<<*x<<endl;
    cout<<"Last Occurence of key"<<x-arr-1<<endl;

    cout<<"Number of occurences of 40: "<<x-ans<<endl;
     
	return 0;
}