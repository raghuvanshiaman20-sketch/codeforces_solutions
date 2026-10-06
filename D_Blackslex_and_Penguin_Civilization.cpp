#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=n;
        int l=1<<n;
        vector<int> v(l,0);
        while(i>=1){
            cout<<(1<<i)-1<<" ";
            v[(1<<i)-1]=1;
            int j=(1<<i)-1+(1<<i);
            while(j<l){
                if(v[j]==1){
                    j+=(1<<i);
                    continue;
                }
                cout<<j<<" ";
                v[j]=1;
                j+=(1<<i);
            }
            i--;
        }
        for(int i=1;i<(1<<n);i+=2){
            if(v[i]==1) continue;
            cout<<i<<" ";
        }
        for(int i=0;i<(1<<n);i+=2){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
