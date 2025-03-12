/*Hãy phân tích một số nguyên dương N thành thừa số nguyên tố
Input Format
Số nguyên dương N
Constraints
1<=N<=10^16
Output Format
Phân tích thừa số nguyên tố của N
Sample Input 0
60
Sample Output 0
2^2 * 3^1 * 5^1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int y=0;
            while(n%i==0){
                ++y;
                n/=i;
            }
            cout<<i<<"^"<<y;
            if(n!=1) cout<<" * ";
        } 
    }
    if(n!=1) cout<<n<<"^"<<1;
}