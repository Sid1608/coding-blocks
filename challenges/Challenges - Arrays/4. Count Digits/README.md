``` cpp
#include<iostream>
using namespace std;
int main() {
	int num,digit;
	cin>>num>>digit;
	int cnt=0;
	while(num){
		int currDigit=num%10;
		if(currDigit==digit){
			cnt++;
		}
		num/=10;
	}
	cout<<cnt;
	return 0;
}

```