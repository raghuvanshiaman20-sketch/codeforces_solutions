#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f=0,j=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int> a(s.begin(),s.end());
        vector<int> b(s.begin(),s.end());
        vector<int> c;
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                f=1;
                c.push_back(i);
            }
        }
        if(f==1){
            cout<<"Alice"<<endl;
            cout<<c.size()<<endl;
            for(auto it:c){
                cout<<it+1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    
}