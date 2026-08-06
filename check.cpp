#include<bits/stdc++.h>
using namespace std;
int fibn(int n){
    if(n==1||n==2){
        return 1;
    }
    else return fibn(n-1)+fibn(n-2);
}
int main(){
    printf("%d",fibn(7));
}