#include<iostream>
#include<vector>

using namespace std;
//Implementation of stack data structure using vector 
template<typename T,typename U>
class Stack{
    private:
        vector<T>v;
        vector<U>v2;
    public:
        void push(T data){
            v.push_back(data);
        }
        bool empty(){
            return v.size()==0;
        }
        void pop(){
            if(!empty()){
                v.pop_back();
            }
        }
        T top(){
            return v[v.size()-1];
        }
}
int main(){
    Stack<int,int> s;
    for(int i=1;i<=5;i++){
        s.push(i*i);
    }
    //try to print the content of the stack by popping each element 
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    Stack<char,int> sch;
    for(int i=65;i<=70;i++){
        sch.push(i);
    }
    //try to print the content of the stack by popping each element 
    while(!sch.empty()){
        cout<<sch.top()<<endl;
        sch.pop();
    }
    return 0;
}