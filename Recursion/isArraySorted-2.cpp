//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
bool isSorted(int* a,int n,int i){
    //base case
    if(i==n-1){
        return true;
    }
    //recurcive case
    return isSorted(a,n,i+1) and a[i]<=a[i+1];
 
}
int main()
{ 
	int arr[]={5,4,7,8,10};
    int n=sizeof(arr)/sizeof(int);
    bool ans=isSorted(arr,n);
    if(ans==true){
        cout<<"Sorted "<<endl;
    }else{
        cout<<"Not Sorted"<<endl;
    }
	return 0;
}