#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    long long tong=0;
    for(int i=3;i<=n;i+=3){
        if(i%3==0) tong+=i;
    }
    cout<<tong;
}