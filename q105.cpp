#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    map<int,string> m;
    map<int,int> m1;
    for(int i=0;i<n;i++){
        cin>>s;
        m[i]=s;
    }
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=0;j<n;j++){
            if(j==i) continue;
            if(m[j]==m[i]) c++;
        }
        m1[i]=c;
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        if(m1[i]>maxi){
            maxi=m1[i];
        }
    }
    cout<<maxi<<endl;
}