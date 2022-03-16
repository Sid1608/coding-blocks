//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;


//using iterator 
void printInc(int n,int i){
    //base case
    int (i==n+1){
        return ;
    }
    //recurcive Case
    cout<<i<<" ";
    printInc(n,i+1);

}
int main()
{ 
	int n=5;
    printInc(n,1);
    cout<<endl;
	return 0;
}