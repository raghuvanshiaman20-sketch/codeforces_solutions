#include <bits/stdc++.h>
using namespace std;
vector<int> v(200001);
vector<queue<int>> te(200001);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            v[b[i]]++;
        }
        int fl=0;
        for(auto it:b){
            if(v[it]%it!=0){
                fl=1;
                break;
            }
        }
        if(fl) cout<<-1<<endl;
        else{
            set<int> st(b.begin(),b.end());
            int i=1;
            for(auto it:st){
                while(v[it]>0){
                    te[it].push(i);
                    v[it]--;
                    if(v[it]%it==0) i++;
                }
            }
            for(int j=0;j<n;j++){
                cout<<te[b[j]].front()<<" ";
                te[b[j]].pop();
            }
            cout<<endl;
        }
        for(auto it:b){
            v[it]=0;
        }
    }
}
