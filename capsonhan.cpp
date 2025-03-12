#include<bits/stdc++.h>

using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int q=b/a;
    if(c==b*q && d==c*q) cout<<"YES";
    else cout<<"NO";
}