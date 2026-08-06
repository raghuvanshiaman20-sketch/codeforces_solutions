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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int s=a[0],stan=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>=stan){
                s+=stan;
            }
            else{
                stan=a[i];
                s+=a[i];
            }
        }
        cout<<s<<endl;
    }
}