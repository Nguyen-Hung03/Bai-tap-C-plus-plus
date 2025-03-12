/*Nhập vào n, đếm số lượng chữ số của n và in ra kết quả
Input Format
Số nguyên không âm n
Constraints
0<=n<=10^18
Output Format
Số lượng chữ số của n
Sample Input 0
123456789
Sample Output 0
9
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int cnt=0;
    if(n==0) cout<<1;
    else{
    while(n){
        cnt++;
        n/=10;
    }
    cout<<cnt;
    }
}