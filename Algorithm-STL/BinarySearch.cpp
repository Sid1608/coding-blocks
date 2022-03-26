//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main()
{ 
	int arr[]={1,3,5,7,8,100};
    int n=sizeof(arr)/sizeof(int);
    bool present=binary_search(arr,arr+n,8);
    if(present==true){
        cout<<"Key Found"<<endl;
    }else{
        cout<<"Key Not Found"<<endl;
    }
	return 0;
}