/*Tính tổng S(n) = 1 + 2 + ... + n
Input Format
Số nguyên dương n
Constraints
1<=n<=10^6
Output Format
Kết quả S(n)
Sample Input 0
6
Sample Output 0
21
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<1ll*n*(n+1)/2;
}