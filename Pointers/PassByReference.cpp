//Author:Siddharth Akar	

#include <bits/stdc++.h>

using namespace std;

void update(int* a){
    *a=*a+1;
    cout<<"Inside Function: "<<*a<<endl;
}
int main()
{ 
	
	int x=10;
    update(&x);
    cout<<"Inside Main: "<<x<<endl;


	return 0;
}