#include<iostream>
#include<list>
using namespace std;

class Queue{
    int cs;
    list<int>l;

    public:
        Queue(){
            cs=0;
        }
        bool isEmpty(){
            return cs==0;
        }
        void push(int data){
            l.push_back(data);
            cs++;
        }
        void pop(){
            if(!isEmpty()){
                cs--;
                l.pop_front();
            }
        }
        int front(){
            return l.front();
        }
        
}


int main(){
    Queue Q;
    for(int i=1;i<=6;i++){
        q.push(i);
    }
    q.pop();
    q.pop();
    q.push(7);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}