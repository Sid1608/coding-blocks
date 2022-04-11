#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<char>q;
    int freq[27]={0};
    //running a stream until a '.'
    char ch;
    cin>>ch;
    while(ch!='.'){
        //insert in the queue and frequency table
        q.push(ch);
        freq[ch-'a']++;
        //query
        while(!q.empty() and freq[q.front]!=1){
            q.pop();
        }
        if(!q.empty())
            cout<<q.front()<<endl;
        else
            cout<<-1<<endl;
        cin>>ch;
    }
    return 0;
}