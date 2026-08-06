#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,xk,yk,xq,yq;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
    if(a!=b){
        int c=0;
        vector<pair<long long,long long>> v1(8);
        vector<pair<long long,long long>> v2(8);
        v1[0].first=xk-a;
        v1[0].second=yk-b;
        v1[1].first=xk-a;
        v1[1].second=yk+b;
        v1[2].first=xk+a;
        v1[2].second=yk-b;
        v1[3].first=xk+a;
        v1[3].second=yk+b;
        v1[4].first=xk-b;
        v1[4].second=yk-a;
        v1[5].first=xk-b;
        v1[5].second=yk+a;
        v1[6].first=xk+b;
        v1[6].second=yk+a;
        v1[7].first=xk+b;
        v1[7].second=yk-a;
        v2[0].first=xq-a;
        v2[0].second=yq-b;
        v2[1].first=xq-a;
        v2[1].second=yq+b;
        v2[2].first=xq+a;
        v2[2].second=yq-b;
        v2[3].first=xq+a;
        v2[3].second=yq+b;
        v2[4].first=xq-b;
        v2[4].second=yq-a;
        v2[5].first=xq-b;
        v2[5].second=yq+a;
        v2[6].first=xq+b;
        v2[6].second=yq+a;
        v2[7].first=xq+b;
        v2[7].second=yq-a;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if((v1[i].first==v2[j].first)&&(v1[i].second==v2[j].second)){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    else{
        int c=0;
        vector<pair<long long,long long>> v1(4);
        vector<pair<long long,long long>> v2(4);
        v1[0].first=xk-a;
        v1[0].second=yk-b;
        v1[1].first=xk-a;
        v1[1].second=yk+b;
        v1[2].first=xk+a;
        v1[2].second=yk-b;
        v1[3].first=xk+a;
        v1[3].second=yk+b;
        v2[0].first=xq-a;
        v2[0].second=yq-b;
        v2[1].first=xq-a;
        v2[1].second=yq+b;
        v2[2].first=xq+a;
        v2[2].second=yq-b;
        v2[3].first=xq+a;
        v2[3].second=yq+b;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if((v1[i].first==v2[j].first)&&(v1[i].second==v2[j].second)){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    }
}