#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d=0,u=2;
        for(int i=2;i<=n;i++){
            int x=1;
            while(x==1){
                cout<<"? "<<1<<" "<<i<<" "<<d+1<<endl;
                cin>>x;
                if(x==-1) return 0;
                if(x==1){
                    d++;
                    u=i;
                }
            }
        }
        int v=1;
        for(int j=1;j<=n;j++){
            int x=1;
            while(x==1){
                cout<<"? "<<u<<" "<<j<<" "<<d+1<<endl;
                cin>>x;
                if(x==-1) return 0;
                if(x==1){
                    d++;
                    v=j;
                }
            }
        }
        cout<<"! "<<u<<" "<<v<<" "<<d<<endl;
    }
}