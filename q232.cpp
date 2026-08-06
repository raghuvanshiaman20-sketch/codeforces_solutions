#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        vector<int> a(3),b(7),c(25);
        a[1]=12,a[2]=21;
        b[1]=123,b[2]=132,b[3]=213,b[4]=231,b[5]=312,b[6]=321;
        c[1]=1234,c[2]=1243,c[3]=1324,c[4]=1342,c[5]=1423,c[6]=1432;
        c[7]=2134,c[8]=2143,c[9]=2314,c[10]=2341,c[11]=2413,c[12]=2431;
        c[13]=3124,c[14]=3142,c[15]=3214,c[16]=3241,c[17]=3412,c[18]=3421;
        c[19]=4123,c[20]=4132,c[21]=4213,c[22]=4231,c[23]=4312,c[24]=4321;
        int n,j,k;
        cin>>n>>j>>k;
        if(n==12){
            if(j!=k)
            cout<<"0A2B"<<endl;
            else cout<<"2A0B"<<endl;
        }
        else if(n==123){
            int fr=b[j];
            int la=b[k];
            int cnt1=0;
            for(int i=0;i<3;i++){
                if(b[j]%10==b[k]%10) cnt1++;
                b[j]/=10;
                b[k]/=10;
            }
            cout<<cnt1<<"A"<<3-cnt1<<"B"<<endl;
        }
        else{
            int fr=c[j];
            int la=c[k];
            int cnt1=0;
            for(int i=0;i<4;i++){
                if(c[j]%10==c[k]%10) cnt1++;
                c[j]/=10;
                c[k]/=10;
            }
            cout<<cnt1<<"A"<<4-cnt1<<"B"<<endl;
        }
    }
}