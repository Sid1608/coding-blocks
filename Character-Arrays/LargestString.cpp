#include<iostream>
#include<cstring>//header file for using string/character array functions
using namespace std;

int main() {
	char a[1000];
    char largest[1000];
    int largest_len=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        int len=strlen(a);
        if(largest_len<len){
            largest_len=len;
        }
    }
   
	return 0;
}