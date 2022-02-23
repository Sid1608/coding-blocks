```cpp
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int isOdd=1,sumOdd=0,sumEven=0;
	while(n){
		int num=n%10;
		if(isOdd){
			sumOdd+=num;
		}else{
			sumEven+=num;
		}
		isOdd=!isOdd;
		n/=10;
	}
	cout<<sumOdd<<endl<<sumEven;
	return 0;
}

```