/*Nhập n không âm và không quá 15, tính và in ra n!
Số nguyên không âm n
Constraints
1<=n<=15
Output Format
Kết quả của bài toán
Sample Input 0
5
Sample Output 0
120
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long tich=1;
    for(int i=1;i<=n;i++){
        tich*=i;
    }
    cout<<tich;
}