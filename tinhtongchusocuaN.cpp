#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int tong=0;
    while(n){
        tong+=n%10;
        n/=10;
    }
    cout<<tong;
}