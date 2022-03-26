//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main()
{ 
	int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(int);
    //np(a,a+n); //1 3 2
    do{
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }//123 then 132----321
        cout<<endl;
    }while(next_permutation(arr,arr+n)==true);

    //or

    next_permutation(arr,arr+n);
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }

	return 0;
}