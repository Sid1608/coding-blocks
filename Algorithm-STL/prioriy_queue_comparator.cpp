//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<vector>
#include<queue>//contain prioriy_queue, queue
#include<algorithm>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int
class Person{
    public:
        string name;
        int age;
        Person(){

        }
        Person(string n,int a){
            name =n;
            age=a;
        }

};
//max heap
class PersonCompare{
    public:
        bool operator()(Person A,Person B){
            return A.age<B.age;//larger is given more prioriy
        }
};
//min heap
class PersonCompare_min{
    public:
        bool operator()(Person A,Person B){
            return A.age>B.age;//smaller is given more prioriy
        }
};
int main()
{ 
    int n;
    cin>>n;
    priority_queue<Person,vector<Person>,PersonCompare>pq;//stl does not know how to compare two persons
    for(int i=0;i<n;i++){
        string name;
        int age;
        cin>>name>>age;
        Person p(name,age);
        pq.push(p);
    }
	
    int k=3;
    for(int i=0;i<k;i++){
        Person p=pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
    }
	return 0;
}