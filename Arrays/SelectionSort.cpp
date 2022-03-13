#include<iostream>
using namespace std;
int main() {
	int a[]={5,3,4,1,2};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}