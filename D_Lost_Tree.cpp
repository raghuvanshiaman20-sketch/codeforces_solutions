#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    set<int> st_o,st_e;
    cout<<"? 1"<<endl;
    cout.flush();
    int a;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(i==1) continue;
        if(a==1) v.emplace_back(1,i);
        if(a%2==0&&a!=0) st_e.emplace(i);
        else st_o.emplace(i);
    }
    if(st_o.size()>=st_e.size()){
        for(auto it:st_e){
            cout<<"? "<<it<<endl;
            cout.flush();
            int x;
            for(int i=1;i<=n;i++){
                cin>>x;
                if(x==1) v.emplace_back(it,i);
            }
        }
    }
    else{
        v.clear();
        for(auto it:st_o){
            cout<<"? "<<it<<endl;
            cout.flush();
            int x;
            for(int i=1;i<=n;i++){
                cin>>x;
                if(x==1) v.emplace_back(it,i);
            }
        }
    }
    cout<<"!"<<endl;
    for(auto it:v){
        cout<<it.first<<" "<<it.second<<endl;
    }
}