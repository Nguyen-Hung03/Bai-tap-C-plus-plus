/*Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng của bạn có bao nhiêu số có 
cùng giá trị nhỏ nhất. 
Ví dụ mảng A = {1, 2, 1, 3, 5} thì số nhỏ nhất trong mảng là 1 xuất hiện 2 lần.
Input Format
Dòng đầu tiên là số nguyên dương N; 
Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
Constraints
1<=N<=1000; -10^3<=A[i]<=10^3;
Output Format
In ra đáp án của bài toán
Sample Input 0
5
-854 600 222 472 207 
Sample Output 0
1
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=1,min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min = a[i];
            cnt=1;
        }
        else if(a[i]==min) ++cnt;
    }
    cout<<cnt;
}