#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q,a,b;
    cin>>n>>k>>q;
    vector<int> arr(900000,0);
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
        if(i==0){
            a=l,b=r;
        }
        else{
            a=min(a,l);
            b=max(b,r);
        }
    }
    for(int f=a;f<=b;f++){
        arr[f]+=arr[f-1];
    }
    for(int f=a;f<=b;f++){
        if(arr[f]>=k){
            arr[f]=1;
        }
        else arr[f]=0;
    }
    for(int f=a;f<=b;f++){
        arr[f]+=arr[f-1];
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        if(b>=r) cout<<arr[r]-arr[l-1]<<endl;
        else if(r>=b&&b>=l) cout<<arr[b]-arr[l-1]<<endl;
        else cout<<0<<endl;
    }
}
