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
    int wi,wj;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            if(max_sum<sum){
                max_sum=sum;
                wi=i;wj=j;
            }
            // max_sum=max(max_sum,sum);
        }
    }
    cout<<max_sum<<endl;
    cout<<"Maximum Subarray: "<<endl;
    for(int i=wi;i<=wj+1;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
	int a[]={5,3,1,2,4};
    int n=sizeof(a)/sizeof(int),i,j;
    MaximumSumSubarray(a,n);
	return 0;
}