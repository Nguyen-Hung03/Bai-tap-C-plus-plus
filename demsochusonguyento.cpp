#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int cnt=0;
    while(n){
        if(n%10==2 || n%10==3 || n%10==5 || n%10==7) ++cnt;
        n/=10;
    }
    cout<<cnt;
}