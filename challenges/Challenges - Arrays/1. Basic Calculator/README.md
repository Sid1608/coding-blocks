``` cpp
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n<=1){
		cout<<n;
		return 0;
	}
	int a=0,b=1,c;
	for(int i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c;
	return 0;
}
```