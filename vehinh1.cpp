/*Nhập n là 1 số nguyên không quá 100. 
In ra các hình tương ứng, mỗi hình cách nhau một dòng trống
Input Format
Số nguyên dương n
Constraints
1<=n<=100
Output Format
In ra hình sao theo mẫu
Sample Input 0
5
Sample Output 0
*****
*****
*****
*****
*****

*****
*   *
*   *
*   *
*****

*****
*###*
*###*
*###*
*****

1 1 1 1 1 
2       2 
3       3 
4       4 
5 5 5 5 5 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n) cout<<"*";
            else{
                if(j==1 || j==n) cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n) cout<<"*";
            else{
                if(j==1 || j==n) cout<<"*";
                else cout<<"#";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n) cout<<i<<" ";
            else{
                if(j==1 || j==n) cout<<i<<" ";
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}