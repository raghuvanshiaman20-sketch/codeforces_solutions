#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        vector<int> a(26),b(26);
        for(auto it:s){
            a[it-'a']++;
        }
        for(auto it:t){
            b[it-'a']++;
        }
        int fl=0;
        for(auto it:s){
            if(a[it-'a']>b[it-'a']){
                fl=1;
                break;
            }
        }
        if(fl) cout<<"Impossible"<<endl;
        else{
            string ne="";
            int j=0;
            for(int i=0;i<26;i++){
                while(((s[j]-'a')<=i)&&j<s.length()){
                    ne+=s[j];
                    j++;
                }
                while(b[i]>a[i]){
                    ne+=(i+97);
                    b[i]--;
                }
            }
            cout<<ne<<endl;
        }
    }
}