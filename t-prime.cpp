/*Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số. 
Ví dụ n=100, ta có các số 4, 9, 25, 49.
Input Format
Số nguyên dương N
Constraints
1≤N≤10^12
Output Format
Đưa ra kết quả trên 1 dòng
*/
// số 3 ước số chính là số bằng bình phương của 1 số nguyên tố.
#include<bits/stdc++.h>
using namespace std;

int prime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    long long n;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(prime(i)) cout<<1ll*i*i<<' ';
    }
}