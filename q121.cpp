#include<bits/stdc++.h>
using namespace std;
long long arr[1005][1005];
long long prefix[1005][1005];

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        for(int i = 0; i <= 1001; i++){
            for(int j = 0; j <= 1001; j++){
                arr[i][j] = prefix[i][j] = 0;
            }
        }
        for(int i=0;i<n;i++){
            int h,w;
            cin>>h>>w;
            arr[h][w]+=h*w;
        }
        for (int i = 1; i < 1001; i++) {
            for (int j = 1; j < 1001; j++) {
                prefix[i][j] = prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+arr[i][j];
            }
        }
        int hs,hb,ws,wb;
        for(int i=0;i<q;i++){
            cin>>hs>>ws>>hb>>wb;
            cout << prefix[hb-1][wb-1]-prefix[hb-1][ws]-prefix[hs][wb-1]+prefix[hs][ws] << endl;
        }
    }
}