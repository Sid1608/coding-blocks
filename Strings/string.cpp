#include<iostream>
#include<string>//Header file
using namespace std;

int main(){
    //Initialization 
    string s="Hello";
    cout<<s<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;

    //2nd way 
    string s2=s;
    cout<<s2<<endl;

    //3rd way
    string s3=s2;
    cout<<s3<<endl;

    //4th way : using character array
    char a[]="Hello, world!";
    string s4(a);
    cout<<s4<<endl;

    //Update the string
    s="hello world";
    cout<<s<<endl;

    //concat
    string x="Hello";
    string y="learning strings!";
    x=x+" "+y;
    cout<<x<<endl;

    //find a particular word inside string
    s="I am learning strings update!";
    string word="learning";
    //gives startign index of word
    cout<<s.find(word)<<endl;//5

    //I want to erase the word 
    int idx=s.find(word);
    s.erase(idx,word.length()+1);
    cout<<s<<endl;
}