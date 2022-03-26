//Author:Siddharth Akar	

#include <iostream>
#include <vector>
using namespace std;
#define  ull unsigned long long int
#define  ll long long int

int main()
{ 
	int t=1;
	// cin>>t;
	while(t--){
        vector<int>a;
        vector<int>b(5,10);//five int with value 10 init a vector of zeros (n,0)
        vector<int>c(b.begin(),b.end());
        vector<int>d{1,2,3,10,14};

        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl; 
        for(auto it=b.begin(),it!=b.end();it++){
            cout<<(*it)<<endl;
        }
        cout<<endl; 

        //for each  loop
        for(int x:d ){
            cout<<x<<",";
        }
        cout<<endl; 
        vector<int> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int no;
            cin>>no;
            v.push_back(no);
        }
        for(int x:v ){
            cout<<x<<",";
        }
        cout<<endl; 
        //understanding at memory level, what are the differences in the tow
        cout<<v.size()<<endl;
        cout<<v.capacity()<<endl;//size of the underlying array
        cout<<v.max_size()<<endl;//maximum no of elements a vector can hold int the worst case acc to the avbl memory in the system
        cout<<d.size()<<endl;
        cout<<d.capacity()<<endl;//size of the underlying array
        cout<<d.max_size()<<endl;//maximum no of elements a vector can hold int the worst case acc to the avbl memory in the system


	}
	return 0;
}