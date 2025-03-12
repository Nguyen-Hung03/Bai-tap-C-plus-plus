/*Cho số nguyên dương n, kiểm tra n có phải là số nguyên tố không
[Trương Hoài Nghi] https://www.facebook.com/profile.php?id=100089474835342
Input Format
Số nguyên dương n
Constraints
1<=n<=10^9
Output Format
In ra YES nếu n là số nguyên tố, ngược lại in NO
Sample Input 0
2
Sample Output 0
YES
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
    if(prime(n)) cout<<"YES";
    else cout<<"NO";    
}