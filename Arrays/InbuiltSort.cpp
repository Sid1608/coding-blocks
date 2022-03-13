#include<iostream>
using namespace std;
bool compare(int a,int b){
    cout<<"Compairing"<<a<<" and "<<b<<endl;
    return a>b;//sort in descending order
}
int main() {
	int a[]={5,3,1,2,4};
    int n=sizeof(a)/sizeof(int),i,j;
    cout<<"Before Sorting"<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
    // sort(a,a+n);
    //compare will decide how we should arrange these numbers asc or desc
    sort(a,a+n,compare);
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}