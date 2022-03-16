//Author:Siddharth Akar	

#include <bits/stdc++.h>

using namespace std;

int main()
{ 
	
	int x=10;
    // int *y=&x;//Initialization + Declaration
    int *y;//Declare
    y=&x;//Assign

    cout<<y<<endl;
    cout<<&x<<endl;

    cout<<*y<<endl;
    cout<<x<<endl;

    cout<<*(&x)<<endl;
     


	return 0;
}