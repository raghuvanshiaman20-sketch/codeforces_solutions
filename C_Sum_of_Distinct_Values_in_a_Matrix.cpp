#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int> a(x),b(y);
        vector<int> v1(200001),v2(200001);
        for(int i=0;i<x;i++){
            cin>>a[i];
            v1[a[i]]=1;
        }
        for(int i=0;i<y;i++){
            cin>>b[i];
            v2[b[i]]=1;
        }
        long long ans1=0,ans2=0;
        if(x>=n){
            reverse(a.begin(),a.end());
            for(int i=0;i<n;i++){
                ans1+=a[i];
            }
            reverse(a.begin(),a.end());
        }
        else{
            ans1=max(ans1,accumulate(a.begin(),a.end(),0ll));
        }
        if(y>=m){
            reverse(b.begin(),b.end());
            for(int i=0;i<m;i++){
                ans2+=b[i];
            }
            reverse(b.begin(),b.end());
        }
        else{
            ans2=max(ans2,accumulate(b.begin(),b.end(),0ll));
        }
        long long ans3=0;
        priority_queue<int> pq_c,pq_1,pq_2;
        for(int i=0;i<x;i++){
            if(v2[a[i]]==1){
                pq_c.push(a[i]);
            }
            else pq_1.push(a[i]);
        }
        for(int i=0;i<y;i++){
            if(v1[b[i]]!=1){
                pq_2.push(b[i]);
            }
        }
        int sp=n+m-1,cnt_a=0,cnt_b=0;
        while(sp>0){
            int el1=0,el2=0,el3=0;
            if(!pq_c.empty()){
                el1=pq_c.top();
            }
            if(!pq_1.empty()&&cnt_a!=n){
                el2=pq_1.top();
            }
            if(!pq_2.empty()&&cnt_b!=m){
                el3=pq_2.top();
            }
            if(el1>el2&&el1>el3){
                ans3+=el1;
                pq_c.pop();
            }
            if(el2>el1&&el2>el3){
                ans3+=el2;
                pq_1.pop();
                cnt_a++;
            }
            if(el3>el1&&el3>el2){
                ans3+=el3;
                pq_2.pop();
                cnt_b++;
            }
            sp--;
        }
        cout<<max({ans1,ans2,ans3})<<endl;
    }
}