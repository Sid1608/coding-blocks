//Author:Siddharth Akar	

#include <iostream>
#include <cstring>

#include<string>

using namespace std;
#define  ull unsigned long long int
#define  ll long long int
//char *strtok(char *s,char *delimeter)->internal declaration
//returns a token on each subsequent call
//on the first call function should be passed with string argument for 's'
//on subsequent calls we should  pass the string argument as null
int main()
{ 
    char s[100]='today, is a rainy, day';
    char *ptr=strtok(s,",");//ptr points to first token in given string today
    cout<<ptr<<endl;
    // ptr=strtok(s," ");//first token
    // cout<<ptr<<endl;
    while(ptr!=NULL){
        ptr=strtok(NULL,",");
        cout<<ptr<<endl;
    }
	return 0;
}