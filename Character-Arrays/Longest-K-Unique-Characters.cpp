#include<iostream>
using namespace std;
void longestKUnique(char a[],int k){
    int freq[26]={0},cnt=0,i=0,len=-1;
    for(int j=0;a[j]!='\0';j++){
        freq[a[j]-'a']++;
        if(freq[a[j]-'a']==1)cnt++;
        while(cnt>k){
            //here we are having more than k unique characters 
            //so shrink the window.
            freq[a[i]-'a']--;
            if(freq[a[i]-'a']==0){
                cnt--;
            }
            i++;
        }
        if(cnt==k){
            len=max(len,j-i+1);
        }
    }
    cout<<len;
}
int main() {
	char a[]="abbcceddd";
    int k=3;
    longestKUnique(a,k);
    
   
	return 0;
}