#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]="abcdefcghijkzyxz";
    int n=strlen(a);
    int current_len=1;
    int max_len=1;

    int visited[256];
    for(int i=0;i<256;i++){
        visited[i]=-1;
    }
    visited[a[0]]=0;
    for(int i=1;i<n;i++){
        int last_occ=visited[a[i]];

        //Expansion
        if((last_occ==-1)||(i-current_len>last_occ)){
            current_len++;
            if(current_len>max_len){
                max_len=current_len;
            }
        }
        //Expansion + contraction
        else{
            if(current_len>max_len){
                max_len=current_len;
            }
            current_len=i-last_occ;
        }
        if(current_len>max_len){
            max_len=current_len;
        }
        visited[a[i]]=i;
       


    }
    cout<<max_len;
    return 0;
}
