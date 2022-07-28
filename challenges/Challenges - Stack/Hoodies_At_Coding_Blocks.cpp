#include<iostream>
#include<deque>
using namespace std;
int main() {
    int q;
    deque<int>dq[5];
    cin>>q;
    int time[5]={0},vis[5]={0};
    int t=1;
    while(q--){
        char type;
        cin>>type;
        if(type=='E'){
            int x,y;
            cin>>x>>y;
            if(vis[x]==0){
                temp[t]=x;
                t++;
                vis[x]=1;
            }
            dq[x].push_back(y);
            
        }else{
            for(int i=1;i<=4;i++){
                if(dq[time[i]].size()){
                    cout<<time[i]<<" "<<dq[time[i]].front()<<endl;
                    dq[time[i]].pop_front();
                    break;
                }
            }
            
            
        }
    }
	return 0;
}