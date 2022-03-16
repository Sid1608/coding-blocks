#include<iostream>
#include<string>//Header file
using namespace std;

int main(){
    //Initialization 
    string s;
    // cin>>s;
    // getline(cin,s);//delimeter '\n'
    getline(cin,s,'$');
    string s1="Hello";
    string s2="World";
    if(s1<s2){
        cout<<"s1 is smaller than s2"<<endl;
    }else{
        cout<<"s2 is smaller than s1"<<endl;
    }
    cout<<s1.compare(s2)<<endl;//is s1==s2->0 if s1>s2->negative, if s2>s1->posig
    cout<<s;
}