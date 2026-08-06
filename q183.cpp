#include<bits/stdc++.h>
using namespace std;
int main(){
        int a,b;
        cin>>a>>b;
        int cnt[a+1]={0};
        for(int i=0;i<b;i++){
            int x,y;
            cin>>x>>y;
            cnt[x]++;
            cnt[y]++;
        }
        int c1=0,c2=0;
        for(int i=1;i<=a;i++){
            if(cnt[i]==1) c1++;
            if(cnt[i]==2) c2++;
        }
        if(c1==2&&c2==a-2) cout<<"bus topology"<<endl;
        else if(c1==a-1) cout<<"star topology"<<endl;
        else if(c1==0&&c2==a) cout<<"ring topology"<<endl;
        else cout<<"unknown topology"<<endl;
}