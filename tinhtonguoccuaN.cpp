#include<bits/stdc++.h>

using namespace std;
int main(){
    long long n;
    cin>>n;
    long long tong=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if (i!= n/i) tong+=i+n/i;
            else tong+=i;
        }
    }
    cout<<tong;
}