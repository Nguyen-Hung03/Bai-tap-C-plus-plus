/*Viết chương trình đếm xem trong đoạn giữa 2 số a và b có bao nhiêu số là số nguyên 
tố và tất cả các chữ số của nó cũng là số nguyên tố
Input Format
Gồm 2 số nguyên dương a, b
Constraints
1<=a<=b<=10^7
Output Format
Ghi ra số lượng số thỏa mãn trên 1 dòng
Sample Input 0
1234 5678
Sample Output 0
26
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

int kt(int n){
    int s;
    while(n){
        s=n%10;
        if(s!=2 && s!=3 && s!=5 && s!=7) return 0;
        n/=10;
    }
    return 1;
}

int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(kt(i) && prime(i)) ++cnt;
    }
    cout<<cnt;
}