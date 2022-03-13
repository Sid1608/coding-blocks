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
void MaximumSumSubarray(int a[],int n){
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            max_sum=max(max_sum,sum);
        }
    }
    cout<<max_sum<<endl;
}
int main() {
	int a[]={5,3,1,2,4};
    int n=sizeof(a)/sizeof(int),i,j;
    MaximumSumSubarray(a,n);
	return 0;
}