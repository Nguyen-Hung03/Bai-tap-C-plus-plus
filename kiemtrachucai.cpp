/*Cho 1 ký tự, bạn hãy kiểm tra ký tự nhập vào là chữ cái in hoa, 
in thường, chữ số hay kí tự đặc biệt (các ký tự không phải là chữ cái và chữ số)
Input Format
1 dòng chứa kí tự c
Constraints
c là chữ in hoa, in thường, chữ số hoặc kí tự đặc biệt
Output Format
Nếu c là chữ cái in hoa in ra "UPPER", nếu c là chữ cái in thường in ra "LOWER", 
nếu c là chữ số in ra "DIGIT", nếu c là ký tự đặc biệt in ra "SPECIAL".
Sample Input 0
Z
Sample Output 0
UPPER
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    char c;
    cin>>c;
    if(c>='A' && c<='Z') cout<<"UPPER";
    else if(c>='a' && c<='z') cout<<"LOWER";
    else if(c>='0' && c<='9') cout<<"DIGIT";
    else cout<<"SPECIAL";
}