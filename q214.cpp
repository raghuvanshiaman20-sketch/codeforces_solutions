#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);  
    cin.tie(0);                     
    cout.tie(0); 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int> v;
        int cnt=0;
        for(int i=n;i>0;i--){
            if(a[i]==0) continue;
            else if(a[i]>0){
                if(cnt%2==0){
                    v.push_back(i);
                    cnt++;
                }
                else continue;
            }
            else{
                if(cnt%2==1){
                    v.push_back(i);
                    cnt++;
                }
                else continue;
            }
        }
        cout<<v.size()<<endl;
        for(auto it: v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}