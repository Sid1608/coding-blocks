//Author:Siddharth Akar	

#include <iostream>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int* fun(){
    // int a[]={1,2,3,4,5};
    int *a=new int[5];
    a[0]=11;
    a[1]=2;
    cout<<a<<endl;
    cout<<a[0]<<endl;
    return a;
}
int main()
{ 
	int *b=fun();
    cout<<b<<endl;
    cout<<b[0]<<endl;
    //let us clear the array a
	return 0;
}