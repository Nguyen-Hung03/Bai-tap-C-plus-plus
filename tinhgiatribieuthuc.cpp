/*Cho biểu thức A(x) = x^3 + 3*x^2 + x + 1. Với giá 
trị của x nhập từ bàn phím, tính và in ra giá trị của biểu thức trên
Input Format
Số nguyên x
Constraints
-10^5<=x<=10^5
Output Format
In ra kết quả của biểu thức
Sample Input 0
-9
Sample Output 0
-494
*/
#include<iostream>

using namespace std;
int main(){
    int x;
    cin>>x;
    cout<<1ll*x*x*x+1ll*3*x*x+x+1<<endl;
}