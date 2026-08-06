#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        int cnt=1,f=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                cnt++;
            }
            else{
                if(cnt==1){
                    f=1;
                    break;
                }
                cnt=1;
            }
        }
        if(s[n-1]!=s[n-2]) f=1;
        if(f) cout<<-1<<endl;
        else{
            cnt=1;
            int i=1,j;
            while(i!=n){
                if(s[i]==s[i-1]){
                    cnt++;
                }
                else{
                    j=i;
                    if(cnt%2==0){
                        while(cnt){
                            cout<<j<<" ";
                            j--;
                            cnt--;
                        }
                    }
                    else{
                        cout<<j<<" ";
                        cnt--;
                        j-=cnt;
                        while(cnt){
                            cout<<j<<" ";
                            j++;
                            cnt--;
                        }
                    }
                    cnt=1;
                }
                i++;
            }
            if(cnt>1){
                j=n;
                if(cnt%2==0){
                    while(cnt){
                        cout<<j<<" ";
                        j--;
                        cnt--;
                    }
                }
                else{
                    cout<<j<<" ";
                    cnt--;
                    j-=cnt;
                    while(cnt){
                        cout<<j<<" ";
                        j++;
                        cnt--;
                    }
                }
            }
            cout<<endl;
        }
        
    }
}