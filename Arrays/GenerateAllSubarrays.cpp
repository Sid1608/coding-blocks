#include<iostream>
using namespace std;
void GenerateSubarrays(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main() {
	int a[]={5,3,1,2,4};
    int n=sizeof(a)/sizeof(int),i,j;
    GenerateSubarrays(a,n);
	return 0;
}