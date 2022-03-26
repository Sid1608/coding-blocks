//Author:Siddharth Akar	

#include <iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a<=b;
}
int main()
{ 
	int coins[]={1,2,5,10,20,50,100};
    int n=sizeof(coins)/sizeof(int);
    int money=25;
    //>=key (change)-><=key
    while(money){
         int indx=lower_bound(coins,coins+n,money,compare)-coins-1;

        cout<<"we should give exchange of coin"<<coins[indx]<<endl;
        money-=coins[indx];
    }
   

	return 0;
} 