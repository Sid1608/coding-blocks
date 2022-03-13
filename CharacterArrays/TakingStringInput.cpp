#include<iostream>
using namespace std;
void readline(char a[],char delimeter='\n'){
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
    // readline(a);
    // readline(a,'\n');
    // readline(a,'$');
    //null is alos counter as character here
    cin.getline(a,100);
    cin.getline(a,5);//take input of only 4 char
    cout<<a<<endl;
    
   
	return 0;
}