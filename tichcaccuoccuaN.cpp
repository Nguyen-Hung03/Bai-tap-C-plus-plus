#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    long long cnt=1;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i!=n/i) cnt*=1ll*i*(n/i);
            else cnt*=1ll*i;
        }
    }
    cout<<cnt;
}