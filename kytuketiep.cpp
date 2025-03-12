/*Cho ký tự là chữ cái in hoa hoặc in thường, in ra ký tự kế tiếp sau nó trong bảng chữ cái ở dạng in thường, tức là ký tự nhập vào ở dạng in hoa hay in 
thường thì bạn đều in ra ký tự kế tiếp nó nhưng ở dạng in thường. Coi ký tự kế tiếp của 
chữ z là chữ a
Input Format
1 dòng chứa ký tự c
Constraints
c là chữ cái in hoa hoặc in thường
Output Format
In ra chữ cái kế tiếp ở dạng in thường
Sample Input 0
A
Sample Output 0
b
Sample Input 1
z
Sample Output 1
a
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    char c;
    cin>>c;
    if(c>='A' && c<='Z') c+=32;
    if(c=='z') cout<<'a';
    else cout<<(char)(c+1);
}