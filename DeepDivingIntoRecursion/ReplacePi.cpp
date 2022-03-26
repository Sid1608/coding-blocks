//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int
void ReplacePi(char*a ,int i){ 
    if(a[i]=='\0'||a[i+1]=='\0'){
        return;
    }
    if(a[i]=='P' and a[i+1]=='i'){
        int j=i+2;
        while(a[j]!='\0'){
            j++;
        }
        while(j>=i+2){
            a[j+2]=a[j];
            j--;
        }
        a[i]='3';
        a[i+1]='.';
        a[i+2]='1';
        a[i+3]='4';
        ReplacePi(a,i+4);
    }else{
        ReplacePi(a,i+1);
    }
}
int main()
{ 
	int t=1;
	cin>>t;
	while(t--){
        char a[100]="axpiaepif";
        cout<<a<<" ";
        ReplacePi(a,0);
        cout<<a<<endl;
	}
	return 0;
}