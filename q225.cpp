#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n),dp;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long s=a[0];
        for(int i=1;i<n;i++){
            if(s>a[i]){
                s+=a[i];
            }
            else{
                dp.push_back(s);
                s=a[i];
            }
        }
        if(s>0) dp.push_back(s);
        cout<<(*max_element(dp.begin(),dp.end()))<<endl;
    }
}