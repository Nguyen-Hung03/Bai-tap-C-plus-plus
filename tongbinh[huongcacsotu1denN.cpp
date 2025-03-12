/*Tính tổng S(n)=1^2 + 2^2 + ... + n^2
Input Format
Số nguyên dương n
Constraints
1<=n<=10^5
Output Format
S(n)
Sample Input 0
3
Sample Output 0
14
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    long long tong=0;
    for(int i=1;i<=n;i++){
        tong+=1ll*i*i;
    }
    cout<<tong;
}