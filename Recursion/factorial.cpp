//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int fact(int n){
    //1. Base Case
    if(n==0){
        return 1;
    }
    //2. Recursive Case/Recurrence Relation
    //n!=n*(n-1)!
    //fact(n)=fact(n-1)*n;
    // int smallerAns=fact(n-1);

    //3.Find the Soloution
    // int biggerAns=n*smallerAns;
    // return biggerAns;
    return n*fact(n-1);
}
int main()
{ 
	int n=5;
    cout<<fact(n)<<endl;
	return 0;
}