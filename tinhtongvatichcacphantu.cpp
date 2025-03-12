/*Cho mảng số nguyên A[] gồm N phần tử, 
hãy tính tổng và tích của các phần tử trong mảng và lấy dư với (10^9 + 7)
Input Format
Dòng đầu tiên là N: số lượng phần tử trong mảng. 
Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống
Constraints
1<=N<=10^6; 0<=A[i]<=10^6
Output Format
Dòng đầu tiên in ra tổng các phần tử trong mảng chia dư với (10^9 + 7); 
dòng thứ 2 in ra tích các phần tử trong mảng chia dư với (10^9 + 7)
Sample Input 0
7
133 116 381 876 531 126 774 
Sample Output 0
2937
744083068
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
    long long cnt=0,tich=1;
    for(int i=0;i<n;i++){
        cnt+=a[i]%(10^9+7);
        tich*=a[i]%(10^9+7);
    }
    cnt%=(10^9+7);
    tich%=(10^9+7);
    cout<<cnt<<endl<<tich;
}
