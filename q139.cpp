#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long s=0,least=10000000000,lowest=least;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<long long> a(m);
            for(int j=0;j<m;j++){
                cin>>a[j];
            }
            sort(a.begin(),a.end());
            s+=a[1];
            if(least>a[0]){
                least=a[0];
            }
            if(lowest>a[1]){
                lowest=a[1];
            }
        }
        s-=lowest;
        s+=least;
        cout<<s<<endl;
    }
}