#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        if(n<(2*k)) cout<<-1<<endl;
        else{
            int cnt=0;
            for(int i=0;i<k;i++){
                if(s[i]!='R') cnt++;
            }
            int i=n-1;
            while(k>0){
                if(s[i]!='L') cnt++;
                i--,k--;
            }
            cout<<cnt<<endl;
        }
    }
}