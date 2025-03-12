#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int nam,tuan;
    nam=n/365;
    n=n%365;
    tuan=n/7;
    n=n%7;
    cout<<nam<<' '<<tuan<<' '<<n;
}