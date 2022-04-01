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

int main()
{ 
	//Allocation
    int b[100]={0};
    cout<<sizof(b)<<endl;//400
    cout<<b<<endl;//come from symbol table
    //b can't be overwrittn because b is constant that is stored inside the symbol table
    //b is a part of read only memory
    //dynamic allocation  
    int n;cin>>n;
    int *a=new int[n]{0};
    cout<<sizof(a)<<endl;//8
    cout<<a<<endl;//comes from variable a that is created inside the static memeory can be overwritten 
    //a=new char [30];

    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    //free up the sapace
    delete [] a;
	return 0;
}