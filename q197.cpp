#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(__builtin_clz(a) > __builtin_clz(b)){
            cout<<-1<<endl;
        }
        else{
            if(a==b){
                cout<<0<<endl;
            }
            else{
                vector<long long> v;
                for(int i=0;i<31;i++){
                    int x=(1<<i);
                    if(x<=a&&(( a & x)==0)){
                        a+=x;
                        v.push_back(x);
                    }
                }
                for(int i=0;i<31;i++){
                    int x=(1<<i);
                    if(x<=a && (b & x)==0) v.push_back(x);
                }
                cout<<v.size()<<endl;
                for(auto it:v){
                    cout<<it<<' ';
                }
                cout<<endl;
            }
        }
    }
}