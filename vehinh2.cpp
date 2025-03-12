#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i) cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<n+1-i) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                if(i==1 || i==n || j==1 || j==i) cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
}