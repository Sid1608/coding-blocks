#include<iostream>
using namespace std;
int main() {
	int a[]={5,3,1,2,4};
    int n=sizeof(a)/sizeof(int),i,j;
    cout<<"Before Sorting"<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
    //Insertion Sort algorithm
    for(i=1;i<n;i++){
        int pickedUpCard=a[i];
        for(j=i-1;j>=0 and a[j]>pickedUpCard;j--){
                a[j+1]=a[j];
        }
        a[j+1]=pickedUpCard; 
        
    }
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}