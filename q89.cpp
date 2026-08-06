#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int> a(n);
        int p,q,c=0,d=0;
        if(h>=l){
            p=h;
            q=l;
        }
        else{
            p=l;
            q=h;
        }
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(p>=a[i]){
                c++;
            }
            if(q>=a[i]){
                d++;
            }
        }
        if(p==q){
            cout<<c/2<<endl;
        }
        else{
            int dif=c-d;
            if(c>=2*d){
                cout<<d<<endl;
            }
            else{
            cout<<(c-d)+(d-dif)/2<<endl;
            }
        }
    }
}