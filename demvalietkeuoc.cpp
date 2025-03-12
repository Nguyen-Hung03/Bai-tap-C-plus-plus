/*Đếm số lượng ước và liệt kê các ước theo thứ tự tăng dần cuả số nguyên dương N
Input Format
Số nguyên dương N
Constraints
1<=N<=10^6
Output Format
Kết quả của bài toán
Sample Input 0
28
Sample Output 0
6
1 2 4 7 14 28
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int b=n;
    int cnt=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int y=0;
            while(n%i==0){
                ++y;
                n/=i;
            }
            cnt*=(y+1);
        }
    }
    if(n!=1) cnt*=2;
    cout<<cnt<<endl;
    for(int i=1;i<=b;i++){
        if(b%i==0) cout<<i<<' ';
    }
}