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
        vector<long long> a(2*n+1);
        for(int i=1;i<=2*n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long sum=0,cnt=1;;
        for(int i=1;i<2*n;i++){
            if(a[i]==a[i+1]) cnt++;
            else{
                sum+=(2*(cnt-1)+1);
                cnt=1;
            }
        }
        if(cnt>1) sum+=(2*(cnt-1));
        cout<<sum<<endl;
    }
}