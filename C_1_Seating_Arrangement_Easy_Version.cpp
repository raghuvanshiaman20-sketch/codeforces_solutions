#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x,s;
        cin>>n>>x>>s;
        string u;
        cin>>u;
        int occ=0,cnt_a=0;
        for(int i=0;i<n;i++){
            if(u[i]=='A') cnt_a++;
        }
        for(int i=0;i<=cnt_a;i++){
            int cnt=0,seats=0,taken=0,v_a=0,empty_t=x;
            for(int j=0;j<n;j++){
                if(u[j]=='I'){
                    if(empty_t>0){
                        taken++;
                        seats+=(s-1);
                        empty_t--;
                    }
                }
                if(u[j]=='A'){
                    if(v_a<i){
                        if(empty_t>0){
                            taken++;
                            seats+=(s-1);
                            empty_t--;
                        }
                        v_a++; 
                    }
                    else{
                        if(seats>0){
                            taken++;
                            seats--;
                        }
                    }
                }
                if(u[j]=='E'){
                    if(seats>0){
                        taken++;
                        seats--;
                    }
                }
            }
            occ=max(occ,taken);
        }
        cout<<occ<<endl;
    }
}