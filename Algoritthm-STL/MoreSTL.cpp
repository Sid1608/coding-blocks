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
    printArray(a,n);
    rotate(a,a+3,a+n);
    printArray(a,a+n);
    
	return 0;
}