//Author:Siddharth Akar	

#include <bits/stdc++.h>

using namespace std;

int main()
{ 
	int a=10;
	int *aptr=&a;
	float f=10;
	float *fptr=&f;
	char ch='A';
	char *chptr=&ch;
	//t bucket_name; t:int, char, bool, float, double, double
	// t * pointer_name;
	// t* pointer_name;
	// t *pointer_name;
	cout<<&a<<endl;
	cout<<aptr<<endl;
	cout<<&f<<endl;
	cout<<fptr<<endl;
	cout<<sizeof(aptr)<<endl;//8
	cout<<sizeof(fptr)<<endl;//8
	cout<<sizeof(chptr)<<endl;//8 
	return 0;
}