#include<iostream>
#include<string>//Header file
using namespace std;

// bool compare(string x,string y){
//     return x>y;
// }
bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();  
}
int main(){
    int n;
    cin>>n;
    string s[100];
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    //Sort 
    // sort(s,s+n);//Dictionay wise
    // sort(s,s+n,compare);
    sort(s,s+n,compare);
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}