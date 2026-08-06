#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a[n];
        vector<int> v1(m+1,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            for(int j=0;j<x;j++){
                int y;
                cin>>y;
                a[i].push_back(y);
                v1[y]++;
            }
        }
        int f=0;
        for(int i=1;i<=m;i++){
            if(v1[i]==0){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }
        else{
            
            int cnt=1;
            for(int i=0;i<n;i++){
                int f=0;
                for(auto it:a[i]){
                    if(v1[it]==1){
                        f=1;
                        break;
                    }
                }
                if(!f) cnt++;
            }
            if(cnt>=3){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}