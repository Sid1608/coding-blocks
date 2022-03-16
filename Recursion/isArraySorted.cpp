//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
bool isSorted(int* a,int n){
    //base case
    if(n==0||n==1){
        return true;
    }
    return isSorted(a+1,n-1) and a[0]<=a[1];
 
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