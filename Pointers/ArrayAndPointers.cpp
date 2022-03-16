//Author:Siddharth Akar	

#include <bits/stdc++.h>

using namespace std;

void PrintArray(int *a,int n){
    cout<<"Functions"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" "; 
    }
     //or
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;
}
int main()
{ 
	
	int a[]={1,2,3,4};
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //a[i]=*(a+i)
    for(int i=0;i<4;i++){
        cout<<*(a+i)<<" ";  
    }
    cout<<endl;
    PrintArray(a,4);

	return 0;
}