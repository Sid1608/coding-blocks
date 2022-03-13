#include<iostream>
using namespace std;
void PrintArray(int a[],int n){
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
void PrintArrayb(int b[10],int m){
    for(int i=0;i<m;i++)cout<<b[i]<<" ";
    cout<<endl;
}

int main() {
	int a[]={5,3,1,2,4};
	int b[10]={5,3,1,2,4};
    int n=sizeof(a)/sizeof(int);
    int m=sizeof(b)/sizeof(int);
    cout<<n<<endl;
    PrintArray(a,n);
    PrintArrayb(b,m);

	return 0;
}