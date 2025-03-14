/*Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là tính 
trung bình cộng của các số là số nguyên tố trong dãy. 
Dữ liệu đảm bảo có ít nhất 1 phần tử là số nguyên tố trong
Input Format
Dòng đầu tiên là số nguyên dương N; 
Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
Constraints
1<=N<=1000; -10^3<=A[i]<=10^3;
Output Format
In ra đáp án của bài toán lấy 3 số sau dấu phẩy.
Sample Input 0
5
-911 234 151 347 231 
Sample Output 0
249.000
Sample Input 1
3 
1 2 5
Sample Output 1
3.500
*/
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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    int s=0;
    for(int i=0;i<n;i++){
        if(prime(a[i])){
            ++cnt;
            s+=a[i];
        }
    }
    cout<<fixed<<setprecision(3)<<(double)s/cnt;
}