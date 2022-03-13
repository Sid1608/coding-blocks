#include<iostream>
using namespace std;

bool isOdd(int n){
    return (n&1);
}
int getBit(int n,int i){
    int mask=(1<<i);
    int bit=(n&mask)>0?1:0;
    return bit;
}
int setBit(int n,int i){
    int mask=(1<<i);
    int ans=n|mask;
    return ans;
}
int clearBit(int& n,int i){
    int mask=~(1<<i);
    n=n&mask;
    return n;
}
int updateBit(int n,int i,int v){
    int mask=~(1<<i);
    int cleared_n=n&mask;
    n=cleared_n|(1<<v);
    return n;
}
int clearLastIBits(int n,int i){
    //from position i+1 to 0
    int mask=(-1<<i);
    return n&mask;
}
int clearRangeItoJ(int n,int i,int j){
    int ones=(~0);
    int a=ones<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    int ans=n and mask;

    return ans;
}

int main(){
    int n,i,j;
    cin>>n>>i>>j;
    cout<<isOdd(n);
    cout<<getBit(n,i);
    cout<<setBit(n,i);
    cout<<clearBit(n,i);
    cout<<updateBit(n,4,1);
    cout<<clearRangeItoJ(n,i,j);
    return 0;
}