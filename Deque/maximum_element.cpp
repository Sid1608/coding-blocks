#include<iostream>
#include<deque>
using namespace std;

int main(){
    int n;
    int a[1000000];
    int k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    //we have to process first k elements separately
    deque<int>Q(k);
    for(int i=0;i<k;i++){
        while((!Q.empty()) and (a[i]>a[Q.back()])){
            Q.pop_back();
        }
        Q.push_back(i);

    }
    //process the remaining elements
    for(;i<n;i++){
        cout<<a[Q.font()]<<" ";
        //1. remvoe the elements which are not part of the window
        while((!Q.empty())and (Q.front()<=i-k))
            Q.pop_front();
            
        //2. remove the element which are not usefull and are in window
        while((!Q.empty()) and( a[i]>=a[Q.back()])){
            Q.pop_back();
        }
        //3. Add the new element(Expansion)
        Q.push_back(i);

        
    }
    cout<<a[Q.front()]<<endl;

    return 0;
}
