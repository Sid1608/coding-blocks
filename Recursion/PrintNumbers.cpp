//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

void printDec(int n){
    //base case
    int (n==0){
        return ;
    }
    //recurcive Case
    cout<<n<<" ";
    printDec(n-1);

}
void printInc(int n){
    //base case
    int (n==0){
        return ;
    }
    //recurcive Case
    printInc(n-1);
    cout<<n<<" ";

}
int main()
{ 
	int n=5;
    printDec(n);
    cout<<endl;
    printInc(n);
    cout<<endl;
	return 0;
}