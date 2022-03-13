#include<iostream>
using namespace std;
void PrintArray(int a[],int n){
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
bool compare(int a,int b){
    return a>b;//sort in descending order
}
//passing function as argument
void BubbleSort(int a[],int n,bool(&myCompare)(int a,int b))){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(myCompare(a[j],a[j+1])){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main() {
	int a[]={5,3,1,2,4};
    int n=sizeof(a)/sizeof(int),i,j;
    cout<<"Before Bubble Sort: ";
    PrintArray(a,n);
    //calling bubble sort
    BubbleSort(a,n,compare);
     cout<<"After Bubble Sort: ";
    PrintArray(a,n);
	return 0;
}