#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long z=n^k;
        if(z==0){
            cout<<"YES"<<endl;
            for(int i=1;i<=(n-1);i++){
                if(z==i) continue;
                cout<<i<<" ";
            }
            cout<<0<<endl;
        }
        else if(z<=(n-1)&&n>1){
            cout<<"YES"<<endl;
            for(int i=1;i<=(n-1);i++){
                if(z==i) continue;
                cout<<i<<" ";
            }
            cout<<0<<" "<<z<<endl;
        }
        else if(z<=(n-1)&&n==1){
            cout<<"YES\n";
            cout<<0<<endl;
        }
        else{
            vector<int> v(32);
            long long i=1;
            int j=0;
            int fl=0;
            while(z>=i){
                if(z&i){
                    v[j]=1;
                    if(i>(n-1)) fl=1;
                }
                j++;
                i<<=1;
            }
            if(fl) cout<<"NO\n";
            else{
                cout<<"YES"<<endl;
                int k=0;
                long long el;
                while(k<=31){
                    if(v[k]==1){
                        el=1<<k;
                        k++;
                        break;
                    }
                    k++;
                }
                for(int i=1;i<=(n-1);i++){
                    if(i==el){
                        while(k<=31){
                            if(v[k]==1){
                                el=1<<k;
                                k++;
                                break;
                            }
                            k++;
                        }
                        continue;
                    }
                    cout<<i<<" ";
                }
                cout<<0<<" ";
                for(int i=0;i<32;i++){
                    if(v[i]==1){
                        long long el=1<<i;
                        cout<<el<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
}