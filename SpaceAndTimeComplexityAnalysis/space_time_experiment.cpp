//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

//bubble sort
void bubble_sort(int a[], int n){
    //N-1 large elements to the end
    for(int itr=1;itr<=n;itr++){
        //pairwise swapping in the unsorted of the array
        for(int j=0;j<=(n-itr-1);j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{ 
	int n,key;
    cin>>n;
    int a[1000000];
    time_t start =clock();

    //create a reverse sorted array 
    for(int i=0;i<n;i++){
        a[i]=n-i;
    }
    time_t start=clock();
    bubble_sort(a,n);
    time_t end=clock();
    cout<<"Bubble Sort "<<end-start<<endl;
    for(int i=0;i<n;i++){
        a[i]=n-i;
    }
    start=clock();
    sort(a,a+n);
    end=clock();
    cout<<"Merge Sort "<<end-start<<endl;
	return 0;
}