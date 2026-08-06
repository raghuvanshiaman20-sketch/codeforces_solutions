#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0;
        map<char,int> s1;
        for(char ch:s){
            s1[ch]=0;
        }
        for(int i=0;i<n;i++){
            s1[s[i]]+=1;
        }
        for(auto it:s1){
            if(it.second%2!=0){
                c++;
            }
        }
        if(c>k+1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}