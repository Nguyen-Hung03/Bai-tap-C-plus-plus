/*Nhập vào n nguyên dương 
không quá 1000 và tính tổng sau, kết quả in ra màn hình S = 1^3 + 2^3 + ... n^3
Input Format
Số nguyên dương n
Constraints
1<=n<=1000
Output Format
Kết quả của bài toán
Sample Input 0
3
Sample Output 0
36
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long tong=0;
    for(int i=1;i<=n;i++){
        tong+=1ll*i*i*i;
    }
    cout<<tong;
}