#include <bits/stdc++.h>
using namespace std;
int a[800000];
int m;
int cal(int l,int r){
    if(r-l==1) return 0;
    int mid=(l+r)>>1;
    int ml = *max_element(a+l,a+mid);
    int mr=*max_element(a+mid,a+r);
    int ans=0;
    if(ml>mr){
        ans++;
        for(int i=0;i<(mid-l);i++){
            swap(a[l+i],a[mid+i]);
        }    
    }
    return cal(l,mid)+cal(mid,r)+ans;
}
int res(){
    int ans=cal(0,m);
    if(is_sorted(a,a+m)) return ans;
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        cout<<res()<<endl;
    }
}