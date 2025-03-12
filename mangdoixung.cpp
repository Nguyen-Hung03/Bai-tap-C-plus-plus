/*Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay không?
Input Format
Dòng đầu tiên là N: số lượng phần tử 
trong mảng. Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống
Constraints
1<=N<=10^6; 0<=A[i]<=10^6
Output Format
In ra YES hoặc NO tương ứng với mảng có đối xứng hoặc không
Sample Input 0
12
7 21 62 52 46 55 55 46 52 62 21 7 
Sample Output 0
YES
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        if(a[i] != a[n-1-i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}