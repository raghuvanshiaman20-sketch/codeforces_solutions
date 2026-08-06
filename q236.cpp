#include <bits/stdc++.h>
using namespace std;
vector<int> v(200001,0),nu(200001,0);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt_e=0,cnt_o=0;
        vector<long long> a(n),b;
        long long s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                cnt_e++;
                s+=a[i];
            }
            else{
                cnt_o++;
                b.emplace_back(a[i]);
            }
        }
        if(cnt_o==0){
            cout<<0<<endl;
        }
        else{
            sort(b.begin(),b.end());
            reverse(b.begin(),b.end());
            cnt_o++;
            cnt_o/=2;
            cout<<accumulate(b.begin(),b.begin()+cnt_o,s)<<endl;
        }
    }
}