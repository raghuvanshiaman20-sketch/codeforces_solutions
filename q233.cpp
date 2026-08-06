#include <bits/stdc++.h>
using namespace std;
vector<int> v(400001);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> st;
        for(int i=0;i<2*n;i++){
            int x;
            cin>>x;
            st.emplace(x);
            v[x]++;
        }
        int contri=0,cnt2=0,cnt1=0;
        for(auto it:st){
            if(v[it]==1){
                contri++;
                cnt1++;
            }
            else if(v[it]%4==2){
                contri+=2;
            }
            else if(v[it]%2==1){
                contri+=1;
                cnt1++;
            }
            else{
                cnt2++;
            }
            v[it]=0;
        }
        if((cnt2%2==0)||((cnt2*2+cnt1)%2==0&&cnt1!=0)){
            contri+=cnt2*2;
        }
        else{
            contri+=(cnt2-1)*2;
        }
        cout<<contri<<endl;
    }
}
