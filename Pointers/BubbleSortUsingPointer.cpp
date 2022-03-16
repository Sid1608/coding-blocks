//Author:Siddharth Akar	

#include <bits/stdc++.h>

using namespace std;

void BubbleSort(int* a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            //a[j]=*(a+j)
            //a[j+1]=*(a+j+1)
            if(*(a+j)>*(a+j+1)){
                swap(*(a+j),*(a+j+1));
            }
        }
    }
}
void PrintArray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" "; 
    }
    cout<<endl;
}
int main()
{ 
	
	int a[]={6,5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    cout<<"Before Sorting : ";
    PrintArray(a,n);
    BubbleSort(a,n);
    cout<<"After Sorting : ";
    PrintArray(a,4);

	return 0;
}