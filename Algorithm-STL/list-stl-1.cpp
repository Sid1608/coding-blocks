#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int>l;
    //init
    list<int>l1{1,2,3,10,8,5};
    //different datatype
    list<string>l2{"apple","guava","mango","banana"};
    l2.push_back("pineapple");

    //sort
    l2.sort();
    //reverse
    l2.reverse();

    //pop_front
    cout<<l2.front()<<endl;
    l2.pop_front();

    //add to the front of the list
    l2.push_front('kiwi');
    cout<<l2.back()<<endl;
    l2.pop_back()

    //Iterate over the list and print the data
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<(*it)<<"->";
    }
    cout<<endl;
    for(string s:l2){
        cout<<s<<"-->";
    }



    //some more functions in the list
    l2.push_back("carrot");
    l2.push_back("lemon");
    for(string s:l2){
        cout<<s<<"-->";
    }
    //remove a fruit
    string f;
    cin>>f;
    l2.remove(f);
    for(string s:l2){
        cout<<s<<"-->";
    }
    //earase one or more elements fromt the list
    auto it=l2.begin();
    it++;
    it++;
    l2.erase(it);
    //insert element in the list
    it =l2.begin();
    it++;
    l2.insert(it,"FruitJuice");

    return 0;
}