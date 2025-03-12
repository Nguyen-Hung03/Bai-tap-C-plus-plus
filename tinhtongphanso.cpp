/*Tính tổng S = 1 + 1/2 + ... + 1/n
Input Format
Số nguyên dương n
Constraints
1<=n<=10^5
Output Format
In ra kết quả lấy độ chính xác 3 số sau dấu phẩy
Sample Input 0
2
Sample Output 0
1.500 
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    double tong=0;
    for(int i=1;i<=n;i++){
        tong+=(double)1/i;
    }
    cout<<fixed<<setprecision(3)<<tong;
}