#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> prefix(n),suffix(n);
        set<char> seen;
        for(int i=0;i<n;i++){
            seen.insert(s[i]);
            prefix[i]=seen.size();
        }
        seen.clear();
        for(int i=n-1;i>=0;i--){
            seen.insert(s[i]);
            suffix[i]=seen.size();
        }
        int count=0;
        for(int i=1;i<n;i++){
            count=max(count,prefix[i-1]+suffix[i]);
        }
        cout<<count<<endl;
    }
}