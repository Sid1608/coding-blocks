//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

bool compare(string a,string b){
    return a.length()<b.length();
}
bool compare1(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()<b.length();
}
int main()
{ 
	int n;
    cin>>n;
    string s[100];//vector
    cin.get();//to consume extra \n
    for(int i=0;i<n;i++){
        getline(cin,s[i],compare);
    }
    sort(s,s+n,compare);
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
	return 0;
}