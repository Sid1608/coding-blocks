#include<iostream>
using namespace std;

int main(){
    //Problem- Unique Number 2N+1
    //Given a list of numbers where every numbers occurs twice except one, find
    int n;
    cin>>n;
    int no;
    int ans=0;
    //Bitwise xor OPERATOR tosolve
    //helppd to not use any storage
    for(int i=0;i<n;i++){
        cin>>no;
        ans=ans^no;
    }
    cout<<ans;
    return 0;
}