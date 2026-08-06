#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int k1;
        cin>>k1;
        vector<int> h1(k1);
        for(int i=0;i<k1;i++){
            cin>>h1[i];
        }
        int k2;
        cin>>k2;
        vector<int> h2(k2);
        for(int i=0;i<k2;i++){
            cin>>h2[i];
        }
        int k3;
        cin>>k3;
        vector<int> v1(k3);
        for(int i=0;i<k3;i++){
            cin>>v1[i];
        }
        int k4;
        cin>>k4;
        vector<int> v2(k4);
        for(int i=0;i<k4;i++){
            cin>>v2[i];
        }
        vector<long long> a(4);
        a[0]=1ll*(h1[k1-1]-h1[0])*h;
        a[1]=1ll*(h2[k2-1]-h2[0])*h;
        a[2]=1ll*(v1[k3-1]-v1[0])*w;
        a[3]=1ll*(v2[k4-1]-v2[0])*w;
        sort(a.begin(),a.end());
        cout<<a[3]<<endl;
    }
}