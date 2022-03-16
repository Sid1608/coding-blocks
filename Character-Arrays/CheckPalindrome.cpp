#include<iostream>
#include<cstring>//header file for using string/character array functions
using namespace std;
bool isPalindrome(char a[]){
    int i=0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
	char a[1000];
    cin>>a;
    if(isPalindrome(a)==true){
        cout<<"Is Palindrome"<<endl;
    }else {
        cout<<"Not a Palindrome"<<endl;
    }
   
	return 0;
}