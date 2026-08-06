#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=1,c=0;
        cin>>n;
        vector<int> a;
        while(n>0){
            int dig=n%10;
            n/=10;
            dig*=s;
            s*=10;
            a.emplace_back(dig);
            if(dig!=0){
            c++;
            }
        }
        cout<<c<<endl;
        for(auto it:a){
            if(it!=0){
            cout<<it<<" ";
            }
        }
        cout<<endl;
    }
}