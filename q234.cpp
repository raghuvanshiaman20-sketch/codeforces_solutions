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
        string s;
        cin>>s;
        if(n<=3){
            cout<<0<<endl;
        }
        else{
            int cnt_b=0,cnt_a=0;
            vector<int> b,a;
            for(int i=0;i<n;i++){
                if(s[i]=='a'){
                    a.emplace_back(i);
                    cnt_a++;
                }
                else{
                    b.emplace_back(i);
                    cnt_b++;
                }
            }
            long long sum_a=0,sum_b=0;
            for(int i=0;i<cnt_a;i++){
                sum_a+=abs(a[i]-i-(a[cnt_a/2]-cnt_a/2));
            }
            for(int i=0;i<cnt_b;i++){
                sum_b+=abs(b[i]-i-(b[cnt_b/2]-cnt_b/2));
            }
            cout<<min(sum_a,sum_b)<<endl;
        }
    }
}