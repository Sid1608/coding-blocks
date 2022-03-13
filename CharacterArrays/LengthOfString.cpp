#include<iostream>
using namespace std;
int length(char a[]){
    int i;
    for(i=0;a[i]!='\0';i++){}
    return i;
}
int main() {
	char a[1000];
    cin.getline(a,1000);
    int ans=length(a);
    cout<<ans<<endl;
    //Inbuilt functin to find length in character aray.
    //strlen(name_of_array);
    cout<<strlen(a)<<endl;

   
	return 0;
}