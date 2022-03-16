//Author:Siddharth Akar	

#include <bits/stdc++.h>

using namespace std;

int main()
{ 
	
	char ch='A';
	char *chptr=&ch;
    char a[]="abcd";
    cout<<a;
    cout<<(int*)a<<endl;//print address
    cout<<&ch<<endl;//A
    cout<<chptr<<endl;//A
    cout<<(int*)chptr<<endl;//print ad   dress
    cout<<(float*)chptr<<endl;//print address
    cout<<(void*)chptr<<endl;//print address

    int arr[]={1,2,3,4};
    cout<<arr<<endl;
	return 0;
}