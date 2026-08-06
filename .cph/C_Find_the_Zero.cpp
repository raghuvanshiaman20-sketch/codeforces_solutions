#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cout<<"?"<<" "<<2<<" "<<3<<endl;
        cin>>x;
        if(x==1){
            cout<<"!"<<" "<<2<<endl;
            cout.flush();
            continue;
        }
        cout.flush();
        cout<<"? 3 4"<<endl;
        cin>>x;
        if(x==1){
            cout<<"!"<<" "<<3<<endl;
            cout.flush();
            continue;
        }
        cout.flush();
        cout<<"? 2 4"<<endl;
        cin>>x;
        if(x==1){
            cout<<"!"<<" "<<2<<endl;
            cout.flush();
            continue;
        }
        cout.flush();
        int fl=0;
        for(int i=5;i<=2*n;i+=2){
            cout<<"?"<<" "<<i<<" "<<i+1<<endl;
            cin>>x;
            if(x==1){
                fl=1;
                cout<<"!"<<" "<<i+1<<endl;
                cout.flush();
                break;
            }
        }
        if(fl==0){
            cout<<"!"<<" "<<1<<endl;
            cout.flush();
        }
    }
}