#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        int sum=0,cnt1=0,cnt2=0,cnt0=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]==0) cnt0++;
            else if(a[i]==1) cnt1++;
            else cnt2++;
        }
        if(sum>s){
            for(int i=0;i<n;i++){
                cout<<a[i]<<' ';
            }
            cout<<endl;
        }
        else if(s==sum){
            cout<<-1<<endl;
        }
        else{
            if(s-sum==1){
                for(int i=0;i<n;i++){
                    if(cnt0!=0){
                        cout<<0<<' ';
                        cnt0--;
                        continue;
                    }
                    else if(cnt2!=0){
                        cout<<2<<' ';
                        cnt2--;
                        continue;
                    }
                    else{
                        cout<<1<<' ';
                        cnt1--;
                    }
                    cout<<endl;
                }
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}