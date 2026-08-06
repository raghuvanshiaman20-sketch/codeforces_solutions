#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        int c=a.length();
        int d=b.length();
        int cnt=0;
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                int ca=0;
                while(i+ca<c&&j+ca<d&&a[i+ca]==b[j+ca]){
                    ca++;
                }
                if (ca>cnt) cnt=ca;
            }
        }
        cout<<c+d-2*cnt<<endl;
    }
}