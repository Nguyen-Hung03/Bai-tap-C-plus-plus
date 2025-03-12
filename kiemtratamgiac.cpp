/*Cho 3 cạnh a, b, c của 1 tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2, tam giác 
vuông thì in ra 3, tam 
giác thường thì in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID"
Input Format
1 dòng chứa 3 số a, b, c
Constraints
0<=a, b, c<=10^3
Output Format
In ra kết quả tương ứng
Sample Input 0
8 8 8
Sample Output 0
1
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0 &&a+b>c && a+c>b && b+c>a){
        if(a==b && a==c) cout<<"1";
        else if(a==b || a==c || b==c) cout<<"2";
        else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) cout<<"3";
        else cout<<"4";
    }
    else{
        cout<<"INVALID";
    }
    return 0;
}