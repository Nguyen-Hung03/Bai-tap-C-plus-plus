/*Tính tổng S = -1 + 2 - 3 + .. + (-1)^n*n
Input Format
Số nguyên dương n
Constraints
1<=n<=10^6
Output Format
Kết quả của bài toán
Sample Input 0
6
Sample Output 0
3
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0) cout<<n/2;
    else cout<<-(n-1)/2-1;
}