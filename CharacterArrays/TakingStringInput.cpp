#include<iostream>
using namespace std;
void readline(char a[],char delimeter){
    int i=0;
    char ch=cin.get();
    while(ch!=delimeter){
        a[i]=ch;
        i++; 
        ch=cin.get();
    }
    a[i]='\0';
}
int main() {
	char a[100];
    //cin ignores white spaces
    // cin>>a;
    // cout<<a<<endl;
    // readline(a,'\n');
    readline(a,'$');
    cout<<a<<endl;
    
   
	return 0;
}