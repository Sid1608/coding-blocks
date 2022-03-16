//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main()
{ 
	int arr[]={5,4,7,8,10};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int *ans=find(arr,arr+n,key);
    int indx=ans-arr;//subtracting the addressed gives the indx of ans address bucket
    if(indx==n){
        cout<<"Key is not found"<<endl;
    }else{
        cout<<"Key is present at"<<indx<<endl;
    }
	return 0;
}